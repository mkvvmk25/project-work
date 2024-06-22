s = input() 
c0 = 0
c1 = 0 
if(s[0]=="1"):
    c1+=1
else:
    c0+=1
    
for i in range(1,len(s)):
    if(s[i] == "1"):
        c1 += 1
        if(s[i-1] != s[i]):
            print("0"*(c0-1),end="") 
            c0 = 0 
    else:
        c0+=1
        if(s[i-1] != s[i]):
            print(c1,end="")
            c1 = 0
        
if( c1 != 0):
    print(c1,end="")
elif(c0 != 0):
    print("0"*(c0-1),end="")