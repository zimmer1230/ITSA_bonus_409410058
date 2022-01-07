a1= input().split(",") 
a2= input().split(",") 
a3= input().split(",") 
a4=a1+a2+a3
a5=list(map(int,a4))
a5.sort()
print(a5[6]+a5[7]+a5[8])