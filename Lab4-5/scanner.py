import re

from symbol_table import SymbolTable


class Scanner:
    def __init__(self):
        self.program = ""
        self.tokens = []
        self.reserved_words = []
        self.symbol_table = SymbolTable(17)
        self.pif = []
        self.index = 0
        self.current_line = 1

        try:
            self.read_tokens()
        except Exception as e:
            print(e)

    def set_program(self, program):
        self.program = program

    def read_tokens(self):
        reserved = []
        with open("reserved.txt") as file:
            for line in file:
                reserve = line.split()[0]
                reserved.append(reserve)
        with open("token.txt") as file:
            for line in file:
                token = line.split()[0]
                if token in reserved:
                    self.reserved_words.append(token)
                else:
                    self.tokens.append(token)

    def skip_space(self):
        modifications_done = 0
        while self.index < len(self.program) and self.program[self.index].isspace():
            if self.program[self.index] == '\n':
                self.current_line += 1
            modifications_done += 1
            self.index += 1
        if modifications_done > 0:
            return True
        return False

    def skip_comments(self):
        modifications_done = 0
        while self.index < len(self.program) and self.program[self.index:self.index+2] == "::":
            while self.index < len(self.program) and self.program[self.index] != '\n':
                self.index += 1
                modifications_done += 1
        if modifications_done > 0:
            return True
        return False

    def treat_string_constant(self):
        regex_for_constant = re.compile(r'^\"[a-xA-Z0-9_ ?:*^+=.!]*\"')
        matcher = regex_for_constant.search(self.program[self.index:])
        if not matcher:
            if re.search(r'^\"[^\"]\"', self.program[self.index:]):
                raise Exception("Invalid string constant at line: " + str(self.current_line))
            if re.search(r'^\"[^\"]', self.program[self.index:]):
                raise Exception("Missing \" at line" + str(self.current_line))
            return False

        string_constant = matcher.group(0)
        self.index += len(string_constant)
        try:
            position = self.symbol_table.add_string_constant(string_constant)
        except Exception as e:
            position = self.symbol_table.get_position_string_constant(string_constant)
        self.pif.append(("str const", position))
        return True

    def treat_int_constant(self):
        regex_for_int_constant = re.compile(r'^([+-]?[1-9][0-9]*|0)')
        matcher = regex_for_int_constant.search(self.program[self.index:])
        if not matcher:
            return False
        if re.search(r'^([+-]?[1-9][0-9]*|0)[a-zA-z_]', self.program[self.index:]):
            return False

        int_constant = matcher.group(1)
        self.index += len(int_constant)
        try:
            position = self.symbol_table.add_int_constant(int(int_constant))
        except Exception as e:
            position = self.symbol_table.get_position_int_constant(int(int_constant))
        self.pif.append(('int const', position))
        return True

    def check_if_valid(self, prossible_identifier, program_substring):
        if prossible_identifier in self.reserved_words:
            return False
        if re.search(r'^[A-Za-z_][A-Za-z0-9_]*\(*', program_substring):
            return True
        return self.symbol_table.has_identifier(prossible_identifier)

    def treat_indentifier(self):
        regex_for_identifier = re.compile(r'^([a-zA-Z_][a-zA-Z0-9_]*)')
        matcher = regex_for_identifier.search(self.program[self.index:])
        if not matcher:
            return False

        identifier = matcher.group(1)
        if not self.check_if_valid(identifier, self.program[self.index:]):
            return False

        self.index += len(identifier)
        try:
            position = self.symbol_table.add_identifier(identifier)
        except Exception as e:
            position = self.symbol_table.get_position_identifier(identifier)
        self.pif.append(("identifier", position))
        return True

    def treat_from_token_list(self):
        possible_token = self.program[self.index:].split(" ")[0]
        for reserved_token in self.reserved_words:
            if possible_token.startswith(reserved_token):
                regex = "^" + "[a-zA-Z0-9_]*" + reserved_token + "[a-zA-Z0-9_]+"
                if re.search(regex, possible_token):
                    return False
                self.index += len(reserved_token)
                self.pif.append((reserved_token, (-1, -1)))
                return True

        for token in self.tokens:
            if possible_token == token:
                self.index += len(token)
                self.pif.append((reserved_token, (-1, -1)))
                return True
            elif possible_token.startswith(token):
                self.index += len(token)
                self.pif.append((token, (-1, -1)))
                return True

        return False

    def next_token(self):
        needs_attention = True
        while needs_attention:
            status_space = self.skip_space()
            status_comments = self.skip_comments()
            needs_attention = status_comments or status_space
        if self.index == len(self.program):
            return

        if self.treat_indentifier():
            return
        if self.treat_string_constant():
            return
        if self.treat_int_constant():
            return
        if self.treat_from_token_list():
            return
        raise Exception("Lexical error: invalid token at line " + str(self.current_line) + ", index " + str(self.index)
                        + ", generated by " + self.program[self.index:].split(" ")[0])

    def scan(self, program_file_name):
        try:
            with open(program_file_name) as file:
                self.set_program(file.read())
            self.index = 0
            self.pif = []
            self.symbol_table = SymbolTable(17)
            self.current_line = 1

            while self.index < len(self.program):
                self.next_token()

            with open("PIF" + program_file_name, "w") as file_writer:
                for pair in self.pif:
                    file_writer.write(pair[0] + " -> (" + str(pair[1][0]) + ", "+ str(pair[1][1]) + ")\n")

            with open("ST" + program_file_name, "w") as file_writer:
                file_writer.write(self.symbol_table.__str__())

            print("Lexically correct")

        except Exception as e:
            print(e)
