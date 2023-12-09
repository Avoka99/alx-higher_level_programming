#!/usr/bin/python3
def uniq_add(my_list=[]):
    unique_set = set()

    for element in my_list:
        unique_set.add(element)

    sum_of_unique = sum(unique_set)

    return sum_of_unique
