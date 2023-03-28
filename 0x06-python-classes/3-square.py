#!/usr/bin/pythons3
class Square:
    def __init__(self, s=0):
        if not type(s) is int:
            raise TypeError("size must be an integer")
        if s < 0:
            raise ValueError("size must be >= 0")
        self.__size = s
    def area(self):
        return self.__size * self.__size
