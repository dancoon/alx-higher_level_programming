#!/usr/bin/python3
if __name__ == "__main__":
    from calculator_1 import add, sub, mul, div
    import sys

    n = len(sys.argv)
    if n != 4:
        print("Usage: ./100-my_calculator.py <a> <operator> <b>")
        sys.exit(1)
    
    op = sys.argv[2]
    a = int(sys.argv[1])
    b = int(sys.argv[3])

    if op == '+':
        print("{}".format(add(a, b)))
    elif op == '-':
        print("{}".format(sub(a, b)))
    elif op == '*':
        print("{}".format(mul(a, b)))
    elif op == '/':
        print("{}".format(div(a, b)))
    else:
        print("Unknown operator. Available operators: +, -, * and /")
        sys.exit(1)

