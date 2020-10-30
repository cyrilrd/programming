print("Введите возводимое в степень число:")
a = float(input())
print("Введите целое степенное цисло:")
b = int(input())
x = 1.0

for i in range(abs(b)):
    x *= a

if b < 0:
    x = 1 / x

print(x)