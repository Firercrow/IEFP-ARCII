"""for i in range(1,10,2):
    print(i)

soma=0
for i in range(101):
    soma=soma+i
print(soma)

x=int(input("insira um numero para iniciar: "))
y=int(input("insira um numero maior para limitar: "))
soma=0
for i in range(x, y+1):
    soma=soma+i
    print(soma)

str="python"
print(str)
print("len(str):",len(str),",testes: ", str[:2], str[3], str[-2],str[::2], str[::-2], ", on in str:" ,"on"in str)
str=str+"!"
print("str.count(y):", str.count("y"),",str=str+!",str, ",str.index(n):", str.index("n"))
for i in str:
    print(i)

def conta(s):
    x=0
    for i in range(len(s)):
        x=x+1
    return(x)
def conta(s):
    x=0
    for i in s:
        x=x+1
    return(x)
def conta(s):
    x=0
    for i in s:
        x=x+1
    return(x)"""
def digito(s):
    x=0
    z=0#erro
    
    for i in s:
        if s >= "0":
            x=x+1
    return(x)
