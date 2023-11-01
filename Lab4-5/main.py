from scanner import Scanner
from symbol_table import SymbolTable

if __name__ == '__main__':
    scanner = Scanner()
    p1 = "p1.txt"
    scanner.scan(p1)
    p2 = "p2.txt"
    scanner.scan(p2)
    p3 = "p3.txt"
    scanner.scan(p3)
    p_error = "error.txt"
    scanner.scan(p_error)


