import random as rdm  
  

name1 = input("What is your NAME ? ")  
  
print("ALL THE BEST ", name1)  
words1 = ['Don', 'GODFATHER', 'ENDGAME', 'optimusPrime',  
         'Project-K', 'luststories', 'super', 'billa',  
         'avengers', 'Spaceship-1', 'cars', 'flight']  
word1 = rdm.choice(words1)  
print ("Please guess the characters: ")
guesses1 = ''
turns1 = 10
while turns1 > 0:  
    failed1 = 0  
    for char in word1:  
        if char in guesses1:  
            print(char)       
        else:  
            print("*")
            failed1 += 1  
    if failed1 == 0:
        print("User Win")
        print("The correct word is: ", word1)  
        break   
    guess1 = input("Guess another character:")  
    guesses1 += guess1  
    if guess1 not in word1:       
        turns1 -= 1  
        print("Wrong Guess")
        print("You have ", + turns1, 'more guesses ')       
        if turns1 == 0:  
            print("User Loose")  
            
            

NAME:P.ABHIRAM
ID;AP22110011118
            