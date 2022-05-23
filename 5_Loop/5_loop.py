for i in range(1, 10, 2):
    print("-", i)

while(i < 12):
    print("*",i)
    i += 1

while(i < 15):
    print("#",i)
    i += 1

s = 0
while(True):
    s += 1
    if(s == 4):
        continue
    if(s > 10):
        break
    print(s)
