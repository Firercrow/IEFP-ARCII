altm=float(input("insira a sua altura em metros: "))
altcm=altm*100
print("alturam em centimetros",altcm)
centi=int(input("defina um valor para transformar centimetros em polegadas: "))
poleg=2.54*centi
print("centimetros em polegadas",poleg)
PrecBilhete=float(input("insira o valor do bilhete: "))
Bilhetenum=int(input("insira a quantia de bilhetes: "))
Totalbilhete=PrecBilhete*Bilhetenum
print("custo total dos bilhetes",Totalbilhete)
quadc=float(input("insira a altura do retangulo: "))
quadl=float(input("insira a largura do retangulo: "))
quadper=quadc*2+quadl*2
print("perimetro do retangulo",quadper)
quadar=quadc*quadl
print("area do retangulo", quadar)
retanl=float(input("insira em cm o lado do quadrado: "))
retanper=retanl*4
print("perimetro do quadrado", retanper)
retanar=retanl*retanl
print("area do quadrado", retanar)
Cust=float(input("insira o custo do produto: "))
taxa=float(input("insira o IVA sem o porcentagem: "))
Viva=Cust*taxa/100
print("valor do IVA", Viva)
custtotal=Cust+Viva
print("valor total com IVA", custtotal)
vldep=float(input("insira o valor de deposito: "))
vljur=float(input("insira o valor do juros sem o porcentagem: "))
vljr=vldep*vljur/100
print("valor do juros", vljr)
vlttl=vljr+vldep
print("valor total com o juros: ", vlttl)
sal=float(input("insira seu salario aqui: "))
descs=float(input(" insira a taxa do desconto social sem o porcetagem: "))
descrs=float(input(" insira a taxa do desconto do IRS sem o porcetagem: "))
vdscs=sal*descs/100
vdirs=sal*descrs/100
print("valor descontado pelo IRS: ",vdirs)
print("valor descontado pela ssocial: ",vdscs)
sall=sal-vdscs-vdirs
print("valor liquido do salario: ", sall)
cons100=float(input("insira o consumo de litros a cada 100km: "))
kmfeitos=float(input("insira os KMs feitos: "))
kmcusto=float(input("insira o valor da gasolina por litro: "))
cosplitro=cons100/100*kmfeitos
print("consumo por litro: ", cosplitro)
totalKMSgasto=cosplitro*kmcusto
print("total gasto: ", totalKMSgasto)
potencia=float(input("insira a potencia do aparelho em watts: "))
hrstrab=float(input("insira as horas trabalhadas do aparelho: "))
kllhr=float(input("insira o valor do KWh: "))
ptconsu=potencia/1000*hrstrab
custtl=ptconsu*hrstrab
print(" KWh ja consumidos: ", ptconsu)
print(" custo total do consumo: ", custtl)
pesous=float(input("insira teu peso em KGs: "))
altus=float(input("insira sua altura em metros: "))
IMC=pesous*altus**2
print("IMC do usuario: ", IMC)
           















