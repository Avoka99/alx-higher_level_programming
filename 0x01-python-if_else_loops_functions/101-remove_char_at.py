#!/usr/bin/python3

def remove_char_at(s, n):
    if n < 0 or n >= len(s):
        return s  # Return the original string if n is out of bounds

    # Use slicing to create a copy without the character at position n
    return s[:n] + s[n+1:]
