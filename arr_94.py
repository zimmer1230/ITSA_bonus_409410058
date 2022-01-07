def cmpar(a,b):
    if int(a)-int(b)==1 or (int(a)==1 and int(b)==5) :
        return '贏'
    elif int(b)-int(a)==1 or (int(b)==1 and int(a)==5):
        return '輸'
    return '和'
a1=input()
a2=input()
l=len(a1)
for i in range(l):
    print( cmpar(a1[i],a2[i]),end="")
print()