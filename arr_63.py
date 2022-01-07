size=list(input().split(" "))
size=list(map(int,size))
arr=[]
arr_2=[]
for i in range(size[0]):
    arr+=list( map(int,(input().split(" "))))

size=list(input().split(" "))
size=list(map(int,size))
for i in range(size[0]):
    arr_2+=list( map(int,(input().split(" "))))
for i in range(size[0]):
    for j in range(size[1]):
        print(arr[i*size[0]+j]+arr_2[i*size[0]+j],end=" ")
    print()




