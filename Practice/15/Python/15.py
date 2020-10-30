import random

while True:
    x = int(random.random() * 101)
    win = False

    print("У вас есть 5 попыток угадать число от 0 до 100, удачи :)")

    for i in range(5):
        a = int(input())
        if a > x:
            print("*Загаданное число меньше:")
        elif a < x:
            print("*Загаданное число больше:")
        else:
            print("Еху! Вы выиграли! Было загадано:")
            win = True
            break

    if not win:
        print("*Вы проиграли. Было загадано:", x)

    if not 1 == int(input("Хотите начать сначала? (1 - да!)")):
        break