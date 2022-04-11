"""

A function that receives a string, and returns a boolean whether it's a palindrome or not

"""
from math import floor


def is_palindrome(word):
    stack = []
    middle = (len(word) % 2) == 1

    if middle:
        x = floor(len(word)/2)
        word = word[:x] + word[x+1:]

    palindrome = True

    for i in range(0, len(word) // 2):
        if word[i] != word[len(word) - (i+1)]:
            palindrome = False

    return palindrome

print(is_palindrome("racecar"))
print(is_palindrome("racecare"))

print(is_palindrome("corroc"))
print(is_palindrome("word"))

print(is_palindrome("t"))
print(is_palindrome("tteeet"))
