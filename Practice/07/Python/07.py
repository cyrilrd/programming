import math
from math import sqrt

print ("Выберете способ расчета площади треугольника:")
print (" 1 - С использованием длин сторон")
print (" 2 - С использованием координат вершин")
w = int(input())
if w == 1:
 print ("Введите число - a")
 a = int(input())
 print ("Введите число - b")
 b = int(input())
 print ("Введите число - c")
 c = int(input())
 p = (a + b + c) / 2
 s = sqrt(p * (p - a) * (p - b) * (p - c))
 print ("S = ", s)

elif w == 2:
  print ("Введите числа x1 и y1 через пробел")
  x1, y1 = map(float, input().split())
  print ("Введите числа x2 и y2 через пробел")
  x2, y2 = map(float, input().split())
  print ("Введите числа x3 и y3 через пробел")
  x3, y3 = map(float, input().split())
  sb = (((x1 - x3) * (y2 - y3)) - ((x2 - x3) * (y1 - y3))) / 2
  s = math.fabs(sb)
  print ("S = ", s)