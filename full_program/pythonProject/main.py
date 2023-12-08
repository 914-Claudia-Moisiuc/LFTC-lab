from fa_hw.fa import FA
from fa_hw.ui_fa import ui
from grammar_hw.regularGrammar import RegularGrammar
from grammar_hw.ui_grammar import UI
from scanner import Scanner
from symbol_table import SymbolTable

if __name__ == '__main__':
    menu = '1. Scanner\n2. FA\n3. Grammer\n4. Exit\n'
    print(menu)

    option = input()

    while option != '4':
        if option == '1':
            scanner = Scanner()
            p1 = "files\p1.txt"
            scanner.scan(p1)
            p2 = "files\p2.txt"
            scanner.scan(p2)
            p3 = "files\p3.txt"
            scanner.scan(p3)
            p_error = "files\error.txt"
            scanner.scan(p_error)
        elif option == '2':
            fa = FA("C:\\1 My work\Python\pythonProject\\files\\fa_file.txt")
            ui(fa)
        elif option == '3':
            filename = "files\g1.txt"

            rg = RegularGrammar(filename)
            ui = UI(rg)
            ui.start()
        else:
            print('Invalid option')

        print(menu)
        option = input()



