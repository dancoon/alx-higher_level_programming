#!/usr/bin/python3
def uppercase(str):
    for i in str:
        a = ord(i)
        if a >= 97 and a <= 122:
            a = a + 32
        i = chr(a)
        print("{:s}".format(i), ends="")
    print("")
