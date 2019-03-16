import math as mt

PP = []
    

def SieveOfErastosthenes(n): 
    P =[]
    prime=[True for i in range(n+1)]
    prime[0] = False 
 
    prime[1]=False
      
    for p in range(2,mt.ceil(mt.sqrt(n))): 
        #if prime[p] is not changes, then it is a prime 
          
        if prime[p]: 
            #set all multiples of p to non-prime 
            for i in range(2*p,n+1,p): 
                prime[i]=False
    
    for idx,val in enumerate(prime):
        if val:
            P.append(str(idx))
    return P
    

t = int(input())
while t:
    t-=1
    n,k = input().split(" ")
    n = int(n)
    k =int(k)
    res = []
    while k:
        k -=1 
        arr = list(map(str, input().split(" ")))
    PrimeNo = SieveOfErastosthenes(n)
    for i in arr:
        c =0
        if i in PrimeNo:
            c+=1
        res.append(c)
    print(res)    

