import sys

def isBeautiful(s):
    for digits in range(1, int(len(strg)/2 + 1), 1):
            substring = strg[0:digits]
            start = int(substring)
            ret = int(substring)
            while len(substring) < len(strg):
                start = start + 1
                substring = substring + str(start)
            if len(substring) is len(strg):
                if substring == strg:
                    return ret
    return 0

no_of_strings = int(input())
for nos in range(no_of_strings):
    strg = input()
    if strg[0] is 0 and len(strg) is 1:
        print("NO")
        break
    ret = isBeautiful("99100")
    if ret is not 0:
        print("YES", ret)
    else:
        print("NO")
    