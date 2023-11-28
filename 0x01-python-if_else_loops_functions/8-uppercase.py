#!/usr/bin/python3

def uppercase(s):
    for c in s:
        upc = chr(ord(c) - 32) if 'a' <= c <= 'z' else c
        print("{}".format(upc), end='')
    print()
