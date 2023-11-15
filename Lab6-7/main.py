from scanner import Scanner
from symbol_table import SymbolTable

if __name__ == '__main__':
    scanner = Scanner()
    p1 = "files\p1.txt"
    scanner.scan(p1)
    p2 = "files\p2.txt"
    scanner.scan(p2)
    p3 = "files\p3.txt"
    scanner.scan(p3)
    p_error = "files\error.txt"
    scanner.scan(p_error)



