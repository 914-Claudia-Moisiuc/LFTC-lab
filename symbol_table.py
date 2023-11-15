from hash import HashTable


class SymbolTable:
    def __init__(self, size):
        self.size = size
        self.identifiersHashTable = HashTable(size)
        self.intConstantsHashTable = HashTable(size)
        self.stringConstantsHashTable = HashTable(size)

    def add_identifier(self, name):
        return self.identifiersHashTable.add(name)

    def add_int_constant(self, constant):
        return self.intConstantsHashTable.add(constant)

    def add_string_constant(self, constant):
        return self.stringConstantsHashTable.add(constant)

    def has_identifier(self, name):
        return self.identifiersHashTable.contains(name)

    def has_int_constant(self, constant):
        return self.intConstantsHashTable.contains(constant)

    def has_string_constant(self, constant):
        return self.stringConstantsHashTable.contains(constant)

    def get_position_identifier(self, name):
        return self.identifiersHashTable.get_position(name)

    def get_position_int_constant(self, constant):
        return self.intConstantsHashTable.get_position(constant)

    def get_position_string_constant(self, constant):
        return self.stringConstantsHashTable.get_position(constant)

    def __str__(self):
        return "SymbolTable{\n" + \
            "identifiersHashTable=" + str(self.identifiersHashTable) + "\n" + \
            "intConstantsHashTable=" + str(self.intConstantsHashTable) + "\n" + \
            "stringConstantsHashTable=" + str(self.stringConstantsHashTable) + "\n" + \
            "}"