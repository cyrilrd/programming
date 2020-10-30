print("Введите число:")
x = int(input())
condition = 0
for i in range (2, x): 
	if (x % i == 0): 
		print("Составное число")
		condition = 1
		break
if (condition != 1):
	print("Простое число") 