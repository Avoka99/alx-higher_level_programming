#!/usr/bin/python3
def no_c(my_string):
    filtered_string = ''
    for char in my_string:
        if char.lower() not in {'c', 'C'}:
            filtered_string += char
    return filtered_string
