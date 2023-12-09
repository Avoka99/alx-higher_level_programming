#!/usr/bin/python3

def complex_delete(a_dictionary, value):
    [a_dictionary.pop(key) for key, val in list(a_dictionary.items()) if val == value]
