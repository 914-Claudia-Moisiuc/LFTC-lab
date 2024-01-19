from fa_hw.fa import FA

def ui(fa):
    # fa = FA("C:\\1 My work\Python\pythonProject\\files\\fa_file.txt")
    # fa = FA("C:\\1 My work\Python\pythonProject\\files\\fa_identifier.txt")
    print("Options:")
    print("a. States ")
    print("b. Alphabet ")
    print("c. Output states ")
    print("d. Initial state ")
    print("e. Transitions ")
    print("f. Check sequence ")
    print("g. Verify DFA ")
    print("h. Exit ")

    while True:
        option = input("Your option: ")
        if option == 'h' or option == 'H':
            break
        elif option == 'a' or option == 'A':
            fa.print_states()
        elif option == 'b' or option == 'B':
            fa.print_alphabet()
        elif option == 'c' or option == 'C':
            fa.print_output_states()
        elif option == 'd' or option == 'D':
            fa.print_initial_state()
        elif option == 'e' or option == 'E':
            fa.print_transitions()
        elif option == 'f' or option == 'F':
            word = input()
            print(fa.check_accepted(word))
        elif option == 'g' or option == 'G':
            print(fa.check_if_deterministic())
        else:
            print("Invalid input")