def is_recursive(skr):
    skr_alter=skr[::-1]
    return skr_alter==skr    
skr=input()
if is_recursive(skr):
    print("YES")
else:
    print("NO")