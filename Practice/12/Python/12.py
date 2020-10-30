print("Введите число:")

a = int(input())
x = 1

for i in range(2, a + 1):
    x *= i

print(x)