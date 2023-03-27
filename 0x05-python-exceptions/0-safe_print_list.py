#!/usr/bin/python3
def safe_print_list(my_list=[], x=0):
    count = 0
    try:
        [print(my_list[i], end="") for i in range(x)]
        count += 1
    except IndexError:
        pass
    print()
    return (count)
