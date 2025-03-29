def fatorial(n):
    resultado = 1
    for i in range(1, n + 1):
        resultado *= i # resultado = resultado * i
    return resultado

fatoriais = [fatorial(n) for n in range(1, 6)]
print(fatoriais)
