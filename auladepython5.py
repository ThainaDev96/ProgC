def Fatorial(nro):
    resposta=1 
    if nro == 1:
        return 1 
    return nro * Fatorial(nro-1)
    
print(Fatorial(5))
