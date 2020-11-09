Str=input()
Str=list(Str)
Strings=[]

while len(Str)>0:
    Strings.append(''.join(Str))
    Str.pop(0)

Strings= sorted(Strings)

for i in Strings:
    print(i)