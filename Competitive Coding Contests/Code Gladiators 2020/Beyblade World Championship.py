#sambhav228

def main():
    num=int(input())
    for i in range(num):
        s=0
        num1=int(input())
        t1=list(map(int,input().split()))
        t1.sort(reverse=True)
        t2=list(map(int,input().split()))
        t2.sort(reverse=True)
        cnt=0
        for i in range(num1):
            for j in range(cnt,num1):
                if t1[i]>t2[j] :
                    cnt=j+1
                    s+=1
                    break
        print(s)
main()
