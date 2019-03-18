
from collections import Counter

t = int(input())
while t:
    t -=1
    n = int(input())
    s = input()
    l,r =(input().split(" "))
    l = int(l)-1
    r = int(r)-1
    ss = s[l:r+1]
    
    sleft = s.replace(ss,'',1)
    c=Counter(sleft)
    
    f=0
    if sleft in s:
        f =1
        for i in c:
            if i in ss:
            # f =1
            # for j in range(1,c[i]+1):
            #     f = f*j
            # Comb //= f
                f *= c[i] 

    print(f%1000000007 )
    
    


