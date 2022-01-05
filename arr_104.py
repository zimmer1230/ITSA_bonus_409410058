def my_cmp(a):
    a_value=int(0)
    while(a):
        a_value=a_value+int(a%10)
        a=int(a/10)
    return a_value
n=int(input())
inpussy=input().split(" ")
inpussy=list( map(int,inpussy) )
inpussy.sort()
inpussy=sorted(inpussy,key=my_cmp)
for i in range(n-1):
    print(inpussy[i],end=' ')
print(inpussy[n-1])
