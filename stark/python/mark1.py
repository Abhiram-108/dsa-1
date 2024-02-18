# # ER USER INPUT :" ).split());
# # print(stark)stark=tuple(input("ENT
# tony=tuple(int(input().split()))
# print(tony)
# # # n=int(input())
# # # for i in range(0,n+1):
# # #     sum=0
# # #     for j in range(0,i+1):
# # #         sum+=j
# # #         if(j!=i):
# # #           print(j,'+',end=" ")
# # #         else:
# # #             print(j,end=" ")  
# # #     print("=",sum)
# # # print("\n")    
# # s="0"    
# # for i in range(1,10):
# #     ch=str(i)
# #     s=s +"+"+ch
# #     print(s,end=" ")
# #     print("=",int(i*(i+1)/2))
# take integers  as input

# x,y=[int (x) for x in input().split()]
# print(x)
    
    
#string concatenation    
# string1=input()
# string2=input()
# string3=" ".join([string1, string2])
# string4=string1+string2
# print(string3)
# print(string4)
    
    
import random as abhi
# a=[1,2,3,4,5]
# abhi.shuffle(a)
# print(str(a))
# abhi.sample(a,len(a))
# print(str(a))
# print(a)
# string1=input()
# l=" ".join(abhi.sample(string1,len(string1)))  #we have to join these letters by using join method
# print(l)     #in string sample does not work so we have to use sample method only


#use raandom.choice to choose a single word
# word=["ABHIRAM","TONYSTARK","STEVES","ROMNAFF"]
# l=abhi.choice(word)
# # s=" ".join(abhi.sample(l,len(l)))
# # print(s)
# s=list(l)
# shuffeldword=abhi.shuffle(s)
# s2=" ".join(shuffeldword)
# print(s2)
def Transpose(M):
	b=[]
  for i in range(0,len(M[0])):
    for j in range(0,len(M[0])):
        	b[i][j]=M[i][j]
    
print(b)

def Transpose(M):
 b = []
 for i in range(len(M)):
    for j in range(len(M[0])):
        b[i][j]=M[j][i]
    
 print(b) 
 
 def snake(M):
  N=[]
  a=[]
  for i in range(len(M[0])):
    if i%2==0:
      N.append(M[i])
    else:
      p=M[i]
    
      N.append(p[::-1])
      
  for i in range(len(M[0])):
                 
                 for j in range(0,len(M[0])):
                                a[i][j]=N[i][j]
  
  return a
    
              