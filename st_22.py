while 1:
    strinin=input()
    strinin=list(strinin)
    strinin.reverse()
    for c in strinin:
        if c.isupper():
            print(c.lower(),end="")
        elif c.islower():
            print(c.upper(),end="")
        else:
            print(c,end="")
    print()