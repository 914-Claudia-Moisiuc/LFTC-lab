from symbol_table import SymbolTable

if __name__ == '__main__':
    symbol_table = SymbolTable(47)
    p1 = (-1, -1)
    p2 = (-1, -1)
    p3 = (-1, -1)

    try:
        p1 = symbol_table.add_identifier("abc")
        print("abc ->", p1)
        print('c ->', symbol_table.add_identifier('c'))
        print('a ->', symbol_table.add_identifier('a'))
        print('bc ->', symbol_table.add_identifier('bc'))
        print('ba ->', symbol_table.add_identifier('ba'))

        print("2 ->", symbol_table.add_int_constant(2))
        print("3 ->", symbol_table.add_int_constant(3))
        p2 = symbol_table.add_int_constant(100)
        print('100 ->', p2)
        print('20 ->', symbol_table.add_int_constant(20))
        print('131 ->', symbol_table.add_int_constant(131))
        print('49 ->', symbol_table.add_int_constant(49))
        print('120 ->', symbol_table.add_int_constant(120))
        print('96 ->', symbol_table.add_int_constant(96))

        print("string1 ->", symbol_table.add_string_constant("string1"))
        print("another ->", symbol_table.add_string_constant("another"))
        print("lab ->", symbol_table.add_string_constant("lab"))
        print("hello ->", symbol_table.add_string_constant("hello"))
        p3 = symbol_table.add_string_constant("world")
        print("world ->", p3)

        print("abc ->", symbol_table.add_identifier("abc"))

    except Exception as e:
        print(e)

    print(symbol_table)

    try:
        assert symbol_table.get_position_identifier("abc") == p1, "abc does not have position " + str(p1)
        assert symbol_table.get_position_int_constant(100) == p2, "100 does not have position " + str(p2)
        assert symbol_table.get_position_string_constant("world") == p3, "world does not have position " + str(p3)
        assert symbol_table.get_position_identifier("aaaa") == (-1, -1), "aaaa exists in the table"
        assert symbol_table.get_position_int_constant(96) == (2, 2), "96 does not have position (2, 2)"
    except AssertionError as e:
        print(e)

    try:
        print("49 ->", symbol_table.get_position_int_constant(49))
        assert symbol_table.get_position_int_constant(49) == (2, 2), "49 does not have position (2, 2)"
    except AssertionError as e:
        print(e)

    try:
        print("ba ->", symbol_table.get_position_identifier("ba"))
        assert symbol_table.get_position_identifier("ba") == p1, "ba does not have position " + str(p1)
    except AssertionError as e:
        print(e)

    try:
        print("22 ->", symbol_table.get_position_int_constant(22))
        assert symbol_table.get_position_int_constant(22) == p2, "22 does not have position " + str(p2)
    except AssertionError as e:
        print(e)

    try:
        print("word ->", symbol_table.get_position_string_constant("word"))
        assert symbol_table.get_position_string_constant("word") == p3, "word does not have position " + str(p3)
    except AssertionError as e:
        print(e)
    

