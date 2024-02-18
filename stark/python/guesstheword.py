import random
movies=["jailer","kushi","avengers","endgame","maharshi","salaar","sahoo"]
word=random.choice(movies)

l=''
# print(word)
# for i in range(len(word)):
#     print('*',end="")
# turns=12
# failed=0
# while turns>0:
    
#     print("enter the your character:")
#     guess=input()
#     l+=guess
#     for char in word:
#         if char in l:
#             print(char,end="")
#             turns+=1
#         else:
#             failed+=1
#             turns-=1
            
# if failed==0:
#   print("YOU WIN")
# else:
#   print("YOU LOSE")                

turns=6
while(turns>0):
    failed=0
    for char in word:
        
        if char in l:
            print(char,end="")
        else:
            print("*")
            failed+=1
        
    if failed==0:
        print("you win")
    print("GUESS THE CHARACTERS")
    guess=input()
    l+=guess
    if guess not in word:
        turns-=1
        if turns==0:
         print("you lose")
        