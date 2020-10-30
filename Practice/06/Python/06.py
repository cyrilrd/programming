import math

print("Введите 3 вещественных числа, каждое в отдельной строке.")

a = int(input())
b = int(input())
c = int(input())

if a == 0:
    if b == 0:
        print("Корней нет.")
    else:
        print("x =", -c / b)
else:
    d = b**2 - 4*a*c
    if d < 0:
        print("Дискриминант меньше нуля, корней нет")
    elif d == 0:
        print("x =", -b/(2*a))
    else:
        dk = math.sqrt(d)
        x1 = (-b + dk) / (2 * a)
        x1 = (-b - dk) / (2 * a)
        print("x1 =", x1,"\nx2 =", x1)