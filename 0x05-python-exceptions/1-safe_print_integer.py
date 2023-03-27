#!/usr/bin/python3
def safe_print_int(value):
    try:
        print("{:d}".format(value))
        return True
    except ValueError:
        pass
    return False
