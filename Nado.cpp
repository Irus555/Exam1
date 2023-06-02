Блок первый
Задание 1
FN = int(input("Введите число: "))
PN = 37
if (FN < PN):
    print("Первое число меньше пограничного")
if (FN > PN):
    print("Первое число больше пограничного")
if (FN > PN*3):
    print("Первое число больше пограничного более, чем в 3 раза")
Задание 2
St = input("Введите строчку: ")
LN = St[:-1]
start = -1
SN = " "
for x in range(0, len(LN)):
    if x != 2:
        SN = SN + LN[x]
print(SN)
if St.find("с") >= 0:
    print("Есть с")
Блок второй
Задание 1
import math
import random
do = input("Ввести арифметический оператор: ")
while do != "Exit":
    if do == "+":
        N1 = float(input("Ввести 1 значение: "))
        N2 = float(input("Ввести 2 значение: "))
        print(N1 + N2)
    elif do == "-":
        N1 = float(input("Ввести 1 значение: "))
        N2 = float(input("Ввести 2 значение: "))
        print(N1 - N2)
    elif do == "/":
        N1 = float(input("Ввести 1 значение: "))
        N2 = float(input("Ввести 2 значение: "))
        if N2 != 0:
            print(N1 / N2)
        else:
            print("На 0 делить нельзя")
    elif do == "*":
        N1 = float(input("Ввести 1 значение: "))
        N2 = float(input("Ввести 2 значение: "))
        print(N1 * N2)
    elif do == "stepen":
        N1 = float(input("Ввести 1 значение: "))
        N2 = float(input("Ввести 2 значение: "))
        print(pow(N1, N2))
    elif do == "module":
        N1 = float(input("Ввести значение: "))
        print(abs(N1))
elif do == "random": 
print(random.randint(0, 1000))
elif do == "f":
N1 = int(input("Ввести  значение: "))
print(math.factorial(N1))
elif do == "arccos":
        N1 = float(input("Ввести значение: "))
        print(math.acos(N1))
    do = input("Введите оператор или введите exit, что бы закончить: ")
Задание 2
print("Enter three vegetable names:") 
veg1 = input().strip()
veg2 = input().strip()
veg3 = input().strip()
print("Lowercase: {}, {}, {}".format(veg1.lower(), veg2.lower(), veg3.lower()))
print("Uppercase: {}, {}, {}".format(veg1.upper(), veg2.upper(), veg3.upper()))
def capitalize_first(s):
    return s[0].upper() + s[1:]
print("Capitalized: {}, {}, {}".format(capitalize_first(veg1), capitalize_first(veg2), capitalize_first(veg3)))
print("Enter the amount for each vegetable:")
amount1 = int(input())
amount2 = int(input())
amount3 = int(input())
print("Amount for each vegetable - {} ({}, {}), {} ({}, {}), {} ({}, {})".format(veg1, amount1, veg1.upper(), veg2, amount2, veg2.upper(), veg3, amount3, veg3.upper()))
Блок 3
Задание 1
words = input("Enter a list of words separated by commas: ").split(",")
word_set = set(words)
print("Number of words:", len(words))
second_list = input("Enter a list of words with the same number of characters: ").split
dictionary = dict(zip(words, second_list))
print(dictionary)
Задание 2
import math
import random
def calculate(N1, N2, operation):
   result = None 
def ask_operation():
   message = '''
Пожалуйста, введите символ операции, которую вы хотите совершить и нажмите Enter:
+ : Сложение
- : Вычитание
/ : Деление
* : Умножение
^ или ** : Возведение в степень
mod – Модуль числа
rand – Рандомное число от 0 до 1000
f – Факториал числа
acos – Арккосинус числа от -1 до 1
Ваш выбор:
   '''
   operation = input(message) 
   return operation
def sum(N1, N2):
   result = N1 + N2
   return result
def subtract(N1, N2)
result = N1 – N2
   return result
def multiply(N1, N2):
   result = N1 * N2
   return result
def divide(N1, N2):
   result = N1 / N2
   return result
def pow(a, b):
   result = a ** b
   return result
def module(N1):
result = abs(N1)
return result
def rand():
resul = random.randint(0, 1000)
return result
def factorial(N1):
result = math.factorial(N1))
return result
def acos(N1):
result = math.acos(N1)
return result
def run_calculator():
   N1 = int(input('Введите первое число: '))
   N2 = int(input('Введите второе число: '))
   operation = ask_operation()
   result = calculate(N1, N2, operation)
   print(f'Результат вычислений: {result}')
   if operation == '+':
       result = sum(N1, N2)
   elif operation == '-':
       result = subtract(N1, N2)
   elif operation == '/':
       result = divide(N1, N2)
   elif operation == '*':
       result = multiply(N1, N2)
elif operation == '^' or operation == '**':
       result = pow(N1, N2)
elif operation == ‘mod’:
results = module(N1)
elif operation == ‘rand’:
result = rand()
eliif operation == ‘f’:
result = factorial(N1)
elif operation == ‘acos’:
result = acos(N1)
   else:
       print('Неизвестная операция')  
   return result

Задание 3
import math
import random
class Calculator:
    def plus(self, number1, number2):
        return number1 + number2
    def minus(self, number1, number2):
        return number1 - number2
    def div(self, number1, number2):
        if number2 != 0:
            return number1 / number2
        else:
            print("на 0 делить нельзя")
    def multi(self, number1, number2):
        return number1 * number2
    def pow(self, number1, number2):
        return math.pow(number1, number2)
    def module(self, number1):
        return abs(number1)
    def rand(self, number1, number2):
        return random.uniform(number1, number2)
    def factorial(self, number1):
        return math.factorial(number1)
    def arccos(self, number1):
        return number1*math.pi/180
calc = Calculator()
do = input("ввести арифметический оператор: ")
while do != "exit":
    if do == "+":
        print(calc.plus(number1 = float(input("ввести 1 значение: ")),number2 = float(input("ввести 2 значение: "))))
    elif do == "-":
        print(calc.minus(number1=float(input("ввести 1 значение: ")), number2=float(input("ввести 2 значение: "))))
    elif do == "/":
        print(calc.div(number1=float(input("ввести 1 значение: ")), number2=float(input("ввести 2 значение: "))))
    elif do == "*":
        print(calc.multi(number1=float(input("ввести 1 значение: ")), number2=float(input("ввести 2 значение: "))))
    elif do == "^":
        print(calc.pow(number1=float(input("ввести 1 значение: ")), number2=float(input("ввести 2 значение: "))))
    elif do == "module":
        print(calc.module(number1=float(input("ввести значение: "))))
    elif do == "0":
        print(calc.rand(number1=float(input("ввести верхнее значение: ")), number2=float(input("ввести нижнее значение: "))))
    elif do == "f":
        print(calc.factorial(number1=int(input("ввести  значение: "))))
    elif do == "acos":
        print(math.acos(calc.arccos(number1=float(input("ввести  значение: ")))))
    do = input("Введите оператор или введите exit, что бы закончить: ")
