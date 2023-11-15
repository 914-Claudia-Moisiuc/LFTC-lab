import re

from fa_hw.transition import Transition


class FA:
    def __init__(self, filename):
        self.filename = filename
        self.states = []
        self.alphabet = []
        self.transitions = []
        self.initial_state = ""
        self.output_states = []
        self.init()

    def init(self):
        try:
            regex = re.compile(r"^([a-z_]*):")
            with open(self.filename) as file:
                for line in file:
                    matcher = regex.match(line)
                    if matcher is None:
                        raise Exception(f"Invalid line: {line}")
                    match = matcher.group(0)
                    key, value = match[:-1], line[line.find(":") + 1:].strip()
                    if key == "states":
                        self.states = value.split(", ")
                    elif key == "alphabet":
                        self.alphabet = value.split(", ")
                    elif key == "out_states":
                        self.output_states = value.split(", ")
                    elif key == "initial_state":
                        self.initial_state = value
                    elif key == "transitions":
                        transitions = value.split("; ")
                        for transition in transitions:
                            _from, _to, label = transition.split(", ")
                            self.transitions.append(Transition(_from[1:], _to, label[:-1]))
                    else:
                        raise Exception("Invalid line in file")

        except Exception as e:
            print(f"Error when initializing FA: {e}")

    def print_list_of_strings(self, list_name, _list):
        print(f"{list_name} = {_list}")

    def print_states(self):
        self.print_list_of_strings("states", self.states)

    def print_alphabet(self):
        self.print_list_of_strings("alphabet", self.alphabet)

    def print_output_states(self):
        self.print_list_of_strings("out_states", self.output_states)

    def print_initial_state(self):
        print(f"initial_state = {self.initial_state}")

    def print_transitions(self):
        print("transtions = {")
        for i, transition in enumerate(self.transitions):
            print(f"({transition._from}, {transition._to}, {transition.label})")
        print("}")

    def check_accepted(self, word):
        current_state = self.initial_state
        for c in word:
            found = False
            for transition in self.transitions:
                if transition._from == current_state and transition.label == c:
                    current_state = transition._to
                    found = True
                    break
            if not found:
                return False
        return current_state in self.output_states

    def check_if_deterministic(self):
        transition_groups = {}
        for transition in self.transitions:
            group_key = (transition._from, transition.label)
            if group_key not in transition_groups:
                transition_groups[group_key] = [transition._to]
            else:
                transition_groups[group_key].append(transition._to)

        for key, value in transition_groups.items():
            if len(value) > 1:
                return False
        return True





