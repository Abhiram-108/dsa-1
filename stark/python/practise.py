# l=["ABHIRAM"]
# print(l)
# tuple1=tuple(l)
# print(tuple1)
# x=tuple1.count("A")
# print(x)


# tuple1=tuple(input("ENTER THE TUPLE"))
# print(tuple1)
# here numbers are printing in character format
# a=()
# a=tuple(int(x) for x in a.split(" ,"))

#printing of a matrix

# x=int(input())
# y=int(input())
# matrix=[]
# for i in  range(x):
#     row=[]
#     for j in range(y):
#         z=int(input())
#         row.append(z)
#     matrix.append(row)
 
# print(matrix)

# x=int(input())
# y=int(input())
# matrix=[]
# for i in range(x):
#     row=list(int (x) for x in input().strip().split())[:y]
#     matrix.append(row)
# print(matrix)

# x,y=[int (x) for x in input().split()]
# print(x)
# print(y)
# matrix=[[int(input()) for i in range(y)] for j in range(x)]
# print(matrix)
# sum=0
# for  i in range(x):
#     for j in range(y):
#         if(i==j):
#             sum=sum+matrix[i][j]
# print(sum)
# list1=[int(x) for x in input().strip().split()]
# print(list1)
# a=list(int(x) for x in input().strip().split())
# print(a)
# a=tuple(int(x) for x in input().split())
# print(a)
# b=list(a)
# print(b)
# c=tuple(b)
# print(c)


# a=list(int(x) for x in input().split())
# print(a)
# print(sorted(a))
# print(sorted(a,reverse=True))
# b=sorted(a)
# print(b)
# print(a)

# a=list(int(x) for x in input().strip().split())
# print(a)
# b=sorted(a,reverse=True)
# print(sorted(a))

# x=input("ENTER THE STRING: ")
# print("GIVEN STRING HAS BEEN SORTED IN REVERSE ORDER AS ASCENDING ORDER ALSO\n")
# print(sorted(x))
# y=sorted(x,reverse=True)
# print(y)

# L=["cccc","bbbb","a","dddddd"]
# print(sorted(L,key=len))

# x=input("ENTER THE STIRNG 1: ")
# y=input("ENTER THE STRING 2: ")
# if( sorted(x)==sorted(y)):
#     print("GIVEN STRINGS ARE ANAGRAMS:")
# else:
#     print("GIVEN STRINGS ARE NOT ANAGRMS: ")    


l=["ABHIRAM"]
print(l)
tuple1=tuple(l)
print(tuple1)
a=list(int(x) for x in input().strip().split())
print(a)
b=tuple(a)
print(b)
c=sorted(a,reverse=True)
print(c)