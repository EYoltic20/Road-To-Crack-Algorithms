def main(n):
    valores=[0 for x in range(n+2)]
    valores[0] = 0
    valores[1]=1
    for i in range(2,n+2):
        valores[i]=valores[i-1]+valores[i-2]
    print(valores[n])
    
    

main(9)