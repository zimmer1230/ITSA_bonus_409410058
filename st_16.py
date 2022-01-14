while 1:
    strininder=input()
    i=0
    L=len(strininder)
    for c in strininder:
        print(c,end="")
        i+=1
        if i!=L:
            print(end="   ")
    print()