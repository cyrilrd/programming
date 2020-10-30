print ("Через пробел введите вещественное число, затем оператор и вещественное число:")
variable = input().split()
a = int(variable[0])
operation = variable[1]
b = int(variable[2])
if operation == '+':
	result = a + b
	print (result)
elif operation == '-': 
	result = a - b;
	print(result)
elif operation == '/':
	if (b == 0):
		print ("Деление на ноль невозможно")
	else:
		result = a / b;
		print(result)
if operation == '*': 
	result = a * b;
	print(result)