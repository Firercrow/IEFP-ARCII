"""
pzzm=float(input("insira o diametro das duas pizzas medias: "))
pizzg=float(input("insira o diametro da pizza grande: "))
areapm=3.14*(pzzm/2)**2
areapg=3.14*(pizzg/2)**2
areattlm=areapm*2
print("a duas pizzas medias tem a area total de: ",areattlm)
print("enquanto a area total da pizza grande é de: ",areapg)
if (areattlm>areapg):
    print(" as medias são maior.")
else:
    print(" a grande é maior.")
"""
"""
ano=int(input("insira o ano para saber que dia ira cair a pascoa: "))
x=int(24)
y=int(5)
a=ano%19
b=ano%4
c=ano%7
d=(19*a+x)%30
e=(2*b+4*c+6*d+y)%7
if (d+e)<10:
    
    dia=d+e+22
    mes="março"

else:
    dia=d+e-9
    mes="abril"
print("esse ano a pascoa sera: ", dia, mes, ano)
"""
"""
ano=int(input("insira o ano para ver se ele é bissexto: "))

if ano%400==0:
    print("é bissexto")
else:
    if ano%100==0:
        print("não é bissexto")
    else:
        if ano%4==0:
            print("bissexto")
        else:
            print("não é bissexto")
"""
"""nr=int(input("insira um numero de -10 até 10: "))
if nr>0:
    print("numero postivo")
else:
    if nr<0:
        print("numero negativo")
    else:
        print("é zero")
"""
"""
nr=int(input("insira um numero de -10 até 10: "))
if nr>0:
    print("numero postivo")
elif nr<0:
    print("numero negativo")
else:
    print("é zero")
    """

num=int(input("defina o numero inicial: "))
#limite=int(input("defina um limite de contagem: "))
v=0
while num<=100:#limite:
    print(num,v)
    v=v+num
    num=num+1
#print(x,v)
"""
num=int(input("defina o numero a ser fatorado: "))
v=num
while v>0:
    v=v-1
    print(num,v)
    num=num*v
    """
