def linear_search(lst, target):
    """Returns the index position of the target if found, else returns -1"""

    for i in range(0, len(lst)):
        if lst[i] == target:
            return i
    return -1

""" Cleaner version"""
def linear_search(lst, target):
    for index, value in enumerate(lst):
        if value == target:
            return index
    return -1