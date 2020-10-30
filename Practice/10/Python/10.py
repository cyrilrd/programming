from math import fabs
s, l1, l2, r1, r2, = map(int,input("Через пробел введите число и границы первого и второго диапозона:").split())
x = 0
if((s > ( r1 + r2 )) or ( s < ( l1 + l2 ))):
    print(-1)
else:
    if(( s - l1 ) >= l2):
        if(s <= ( l1 + r2 )):
            print (l1," ", s - l1)
        else:
            a = fabs(s - (l1 + r2))
            if ((l1 + x) < r1 and (r2 - x) > l2):
                print (l1 + x, " ", s - (l1 + x))
            else:
                print(-1)
    else:
        print (-1)