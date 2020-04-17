txt=int(input())
my=0
while (my<txt):
    n1=int(input())
    s=[]
    for i in range(n1):
        b=input()
        s.append(b)
    c=set(s[0])
    for i in range(1,n1):
        c=c&set(s[i])
    print(len(c))
    my=my+1  
