#!/usr/bin/python3

formatted_alphabet = ''.join([chr(i) for i in range(97, 123) if chr(i) not in ['e', 'q']])
print("{}".format(formatted_alphabet), end='')
