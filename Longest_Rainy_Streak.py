e=int(input())
x=list(input())
s=0
m=0
for i in x:
    if i=="R":
        s+=1
        if s>m:
            m=s
    else:
        s=0
print(m)