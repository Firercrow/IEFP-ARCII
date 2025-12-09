def IMC (x,y):
    return(x/y**2)
def par (z):
    
    if z%2 == 1:
        return("impar")
    else:
        return("par")
def contaw (a):
    soma=0
    while a>0:
        soma=soma+a
        a=a-1
    return(soma)
def contaf (b):
    soma=0
    for i in range(b+1):
        soma=soma+i
        i=i+1
    return(soma)
def ncar(c):
    
    contagem=0
    for i in range(len(c)):
        contagem=contagem+1
    return(contagem)
def soma_elem(d):
    soma=0
    contagem=0
    while contagem<len(d):
        soma=soma+d[contagem]
        contagem=contagem+1
    return(soma)

def digito(e):
    x=0
    for i in e:
        if i >= "0" and i <= "9":
            x=x+1
    return(x)

def pt(f):

    if ".pt" in f:
        x="true"
    else:
        x="false"
    return(x)
def pt2(f):

    if ".pt" == f[-3:]:
        x="true"
    else:
        x="false"
    return(x)

            
