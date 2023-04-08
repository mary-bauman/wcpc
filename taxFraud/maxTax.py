input = input()
t, a, x = 0, 0, 0
for c in input:
    if(c=='t'):
        t+=1
    elif(c=='a'):
        a+=1
    elif(c=='x'):
        x+=1
print(min(t,a,x))