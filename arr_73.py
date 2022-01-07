def fab_generate(max):
    arr=[1,1]

    for i in range(max):
        arr.append( arr[i]+arr[i+1] )
    return arr
arr=fab_generate(30)
while(1):
    d=int(input())
    for i in range(d):
        print(arr[i],end=" ")
    print()

