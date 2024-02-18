# PEDADA ABHIRAM
# AP22110011118
# CSE-R



Tic Tac Toe:
import numpy

board=numpy.array([['-','-','-'],['-','-','-'],['-','-','-']])
ps1='X'
ps2='O'

def check_row(a):
    for r in range (3):
        ct=0
        for c in range(3):
            if board[r][c]==a:
                ct=ct+1
        if ct==3:
            print(a,' won')
            return True
    return False

def check_col(a):
    for c in range (3):
        ct=0
        for r in range(3):
            if board[r][c]==a:
                ct=ct+1
        if ct==3:
            print(a,' won')
            return True
    return False

def check_diag(a):
    for r in range(3):
        ct=0
        for c in range(3):
            if c==r or c+r==2 :
                if board[r][c]==a:
                    ct=ct+1
        if ct==3:
            print(a,'won')
            return True
    return False

def won(a):
    return check_col(a) or check_diag(a) or check_row(a)

def place(a):
    print(numpy.matrix(board))
    while(1):
        row=int(input('Enter row[1-3]: '))
        col=int(input('Enter column[1-3]: '))
        if row>0 and row<4 and col>0 and col<4 and board[row-1][col-1]=='-':
            break
        else:
            print("Invalid input. Enter again")
        board[row-1][col-1]=a

def play():
    for i in range(9):
        if i%2==0:
            print('X turn')
            place(ps1)
            if won(ps1):
                break
        else:
            print('O turn')
            place(ps2)
            if won(ps2):
                break
    if not(won(ps1)) and not(won(ps2)):
        print("Draw")

play()

----------------------------------------------------------------------------------------------

Factorial (iterative):
a = input("Enter a number: ")
b = int(a)
b+=1
res=1
for i in range (1,b):
    res*=i
print(res)


Factorial(recursive):
def factorial (a):
    if(a==0):
        return 1
    return a*factorial(a-1)

a = int(input("Enter a number: "))
print("Factorial of",a,"is:",factorial(a))

-----------------------------------------------------------------------------------------------

Binary Search:
def binarysearch (a, key, left, right):
    if(left>right):
        return -1
    mid = (left+right)//2
    if(a[mid]==key):
        return mid
    elif(a[mid]>key):
        return binarysearch(a,key,mid+1,right)
    else:
        return binarysearch(a,key,left,mid-1)

   
n=int(input("Enter the size of the array: "))
a=[None]*n
print("Enter an array: ")
for i in range (n):
    x = input("")
    a[i]=x
a.sort()
key=int(input("Enter element to search: "))
pos = int(binarysearch(a,key,0,n-1))
if(pos==-1):
    print("Element not found")
else:
    print("Element found in position",pos+1)

------------------------------------------------------------------------------------------------

Fibonacci Series (Recursive):
def fibonacci(n):
    if(n==0):
        return 0
    elif(n==1):
        return 1
    else:
        return fibonacci(n-1)+fibonacci(n-2)
    
n=int(input("Enter the number of terms in fibonacci series: "))
if(n<0):
    print("Wrong Input")
else:
    print("Fibonacci Series is: ")
    for i in range(n):
        print(fibonacci(i),end=" ")


Fibonacci Series (Iterative):
n=int(input("Enter the number of terms in fibonacci series: "))
if(n<0):
    print("Wrong Input")
else:
    fib=[None]*n
    fib[0]=0
    fib[1]=1
    for i in range(2,n):
        fib[i]=fib[i-1]+fib[i-2]
    print("Fibonacci Series is: ")
    for i in range(n):
        print(fib[i],end=" ")