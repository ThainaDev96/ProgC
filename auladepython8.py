def eh_primo(n):
    if n < 2:
        return False
    for i in range(2, n):
        if n % i == 0:
            return False
    return True

primos = [n for n in range(1, 11) if eh_primo(n)]
print(primos)
#print(eh_primo(8))
