import random
def choose():
    wordlist=["abhiram","tony","stark","hulk","steves"]
    pick=random.choice(wordlist)
    return pick
def shuffle(word):
    s=random.sample(word,len(word))
    k=''.join(s)
    return k

li1=choose()
li2=shuffle(li1)
print(li2)
x=input("ENTER YOUR CHOICE:")
for i in range(0,3):
    if x==li1:
        print("you won the match")
        break
    else:
        print("enter your choice again")
        x=input()
            
        