"""def fact(n):
    if n==(1):
        print(n)
        return(1)
    else:
        print(n)
        return(n*fact(n-1))
    
z=int(input("defina o numero a ser fatorado: "))
print(fact(z))

def soma(x,z):
    if x==z:
        print(x)
        return(x)
    else:
        print(x)
        return(x+soma(x+1,z))
inicial=int(input("insira o numero inicial: "))
final=int(input("insira o numero final: "))
print(soma(inicial,final))

def mult(x,z):
    if z==0:
        print(0)
        return(0)
#    if z==1:
  #      print(x)
 #       return(x)
    else:
        print(x)
        return(x+mult(x,z-1))
inicial=int(input("insira o numero a ser multiplicado: "))
multi=int(input("insira o numero multiplicador: "))
print(mult(inicial,multi))
"""
def expo(x,z):
    if z==0:
        print(1)
        return(1)
   # if z==1:
   #     print(x)
   #     return(x)
    else:
        print(x)
        return(x*expo(x,z-1))
inicial=int(input("insira o numero para ser a potencia: "))
multi=int(input("insira o numero para exponenciar: "))
print(expo(inicial,multi))

