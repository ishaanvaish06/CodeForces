n=int(input())
while(n>0):
    s=input()
    if(len(s)>10):
        print(s[0]+str(len(s)-2)+s[-1])
    else:
        print(s)
    n=n-1
