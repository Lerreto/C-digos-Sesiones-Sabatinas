I = 0
m = 1000
n = int(input("Ingrese un numero de 4 digitos para encontrar su inverso: "))
n2 = n
for i in range (4):
    d = int(n2 / 10) 
    r = n2 - (d * 10)
    I = I + (r * m)
    m = m / 10
    n2 = int(n2 /10)
print("El numero original es: " + str(n) + " y el numero inverso es: "+ str(int(I)))
