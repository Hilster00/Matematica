def pascal(n=1):
    linha1=[1]
    linha2=[1,1]
    if n==0:
        return [1]
    elif n == 1:
        return [1,1]
    retorno=linha2
    for i in range(2,n+1):
        if i%2==0:
            linha2=[1]
            for j in range(len(linha1)-1):
                linha2.append(linha1[j]+linha1[j+1])
            linha2.append(1)
            retorno=linha2
        else:
            linha1=[1]
            for j in range(len(linha2)-1):
                linha1.append(linha2[j]+linha2[j+1])
            linha1.append(1)
            retorno=linha1
    return retorno
    
print(pascal(int(input("Digite a linha desejada:"))))