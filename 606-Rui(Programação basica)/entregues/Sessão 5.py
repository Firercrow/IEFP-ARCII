"""num=int(input("defina o numero a ser fatorado: "))
v=num
while v>0: #continuacao do codigo fatorial da sessao 3
    
    v=v-1
    print(num,v)
    num=num*v
def bissexto2(x):
    if x%400==0:
        saida="é bissexto"
    elif x%100==0:
        saida="não é bissexto"
    elif x%4==0:
        saida="bissexto"
    else:
        saida="não é bissexto"
    return (saida)
ano=int(input("insira um ano para saber se ele é bissexto: " ))
print("o ano ", bissexto2(ano))

def bissexto(x):
    if x%400==0:
        return("é bissexto")
    elif x%100==0:
        return("não é bissexto")
    elif x%4==0:
        return("bissexto")
    else:
        return("não é bissexto")
ano=int(input("insira um ano para saber se ele é bissexto: " ))
print("o ano ", bissexto(ano))

def fatorial(x):
    v=1
    while x>0:
        v=x*v
        print(x, v)
        x=x-1
    return(v)

def mult(x,z):
    c=x
    while z>1:
        z=z-1
        c=c+x
        print(x,c)
    return(c)
    """
def expo(x,z):
    c=x
    while z>1:
        z=z-1
        c=c+x
        print(x,c)
    return(c)

    
