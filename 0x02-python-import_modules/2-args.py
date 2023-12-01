#!/usr/bin/python3
from sys import argv

if __name__ == "__main__":
    num_args = len(argv) - 1
    args_str = "arguments" if num_args != 1 else "argument"
    
    print("{:d} {:s}{:s}".format(num_args, args_str, ":" if num_args else "."))

    for i in range(1, num_args + 1):
        print("{:d}: {:s}".format(i, argv[i]))
