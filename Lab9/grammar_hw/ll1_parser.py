import copy

class LL1Parser:
    def __init__(self, grammar):
        self.grammar = grammar
        self.first = {}
        self.follow = {}
        for terminal in self.grammar.sigma:
            self.first[terminal] = terminal
        for non_terminal in self.grammar.N:
            self.follow[non_terminal] = []

    def computeFirst(self):
        for key in self.grammar.productions.keys():
            if key not in self.first.keys():
                self.first[key] = []
            for elem in self.grammar.productions[key]:
                if elem in self.grammar.sigma or elem == "epsilon":
                    self.first[key].append(elem)
                elif elem[0] in self.grammar.sigma:
                    self.first[key].append(elem[0])

        grammar = self.grammar
        while True:
            # currentFirst = dict(self.first)
            currentFirst = copy.deepcopy(self.first)
            for key in self.grammar.productions.keys():
                for elem in grammar.productions[key]:
                    if elem[0] in self.grammar.N and len(self.first[elem[0]]) == 1 and "epsilon" in self.first[elem[0]]:
                        for char in elem:
                            if 'epsilon' in self.first[char] and len(self.first[char]) == 1:
                                continue
                            else:
                                if char in self.grammar.N and len(self.first[char]) != 0:
                                    self.first[key] = list(set(self.first[key] + self.first[char]))
                                    if "epsilon" in self.first[key]:
                                        self.first[key].remove("epsilon")
                                    break
                                elif char in self.grammar.sigma:
                                    self.first[key] += self.first[char]
                                    break
                    elif elem[0] in self.grammar.N and len(self.first[elem[0]]) != 0:
                        self.first[key] = list(set(self.first[key] + self.first[elem[0]]))
                        if "epsilon" in self.first[key]:
                            self.first[key].remove("epsilon")
                        break

            if currentFirst == self.first:
                break

    def compute_follow(self):
        self.follow[self.grammar.startSymbol].append('$')

        changes = True
        while changes:
            changes = False
            for a in self.grammar.N:
                for production in self.grammar.productions[a]:
                    for i, symbol in enumerate(production):
                        copy_follow = copy.deepcopy(self.follow)
                        if symbol in self.grammar.N:
                            if i < len(production) - 1:
                                next_symbol = production[i + 1]
                                first_beta = copy.deepcopy(self.first[next_symbol])
                                if 'epsilon' in first_beta:
                                    first_beta.remove('epsilon')
                                if 'epsilon' in self.first[next_symbol]:
                                    first_beta.extend(self.follow[a])
                                copy_follow[symbol].extend(first_beta)
                                copy_follow[symbol] = list(set(copy_follow[symbol]))
                                if self.follow[symbol] != copy_follow[symbol]:
                                    changes = True
                                    self.follow[symbol].extend(first_beta)
                                    self.follow[symbol] = list(set(self.follow[symbol]))
                            elif symbol != a:
                                copy_follow[symbol].extend(self.follow[a])
                                copy_follow[symbol] = list(set(copy_follow[symbol]))
                                if self.follow[symbol] != copy_follow[symbol]:
                                    changes = True
                                    self.follow[symbol].extend(self.follow[a])
                                    self.follow[symbol] = list(set(self.follow[symbol]))

    def print_first(self):
        for key in self.first.keys():
            print(key, self.first[key])

    def print_follow(self):
        for key in self.follow.keys():
            print(key, self.follow[key])