def pascal(n=1):
    linhas=[[1],[1,1]]#inicializa a primeira linha e a segunda linha
    retorno=linhas[n%2]
    
    #calcula os valores de cada linha
    for i in range(2,n+1):
        #calcula os elementos de cada linha de acordo com par ou impar
        linhas[i%2]=[1]#primeiro elemento da linha
        
        for j in range(len(linhas[(i+1)%2])-1):
            #elemento j+1 é a soma dos elementos j e j-1 da linha anterior
            linhas[i%2].append(linhas[(i+1)%2][j]+linhas[(i+1)%2][j+1])
            
        linhas[i%2].append(1)#ultimo elemento da linha
        retorno=linhas[i%2]
    return retorno
    
print(pascal(int(input("Digite a linha desejada:"))))
