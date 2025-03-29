def Fatorial(nro):
    x=nro
    resposta=1
    while(x>0):
        resposta = resposta * x
        x=x-1
    return resposta
    
print(Fatorial(6))
