import random

# List of movie titles
movies = ["bangbang", "kick", "pusha", "salaar", "kgf", "RRR"]

# Randomly select a movie from the list
random_index = random.randint(0, len(movies) - 1)
selected_movie = movies[random_index]

# Initialize a string to represent the hidden movie title
hidden_movie = ""
for _ in range(len(selected_movie)):
    hidden_movie += 'X'

# Initialize scores for the two players
player1_score = 0
player2_score = 0

# Player 1's turn
print("=== Player 1 ===")
while player1_score < len(selected_movie):
    print("Movie Name: ", hidden_movie)
    print("Guess a letter: ")
    guess = input()
    found = False
    for i in range(len(selected_movie)):
        if selected_movie[i] == guess and hidden_movie[i] == 'X':
            found = True
            hidden_movie = hidden_movie[:i] + guess + hidden_movie[i+1:]
            player1_score += 1
    if not found:
        print("Mismatched")
        break

# Player 2's turn
print("=== Player 2 ===")
hidden_movie = "X" * len(selected_movie)
while player2_score < len(selected_movie):
    print("Movie Name: ", hidden_movie)
    print("Guess a letter: ")
    guess = input()
    found = False
    for i in range(len(selected_movie)):
        if selected_movie[i] == guess and hidden_movie[i] == 'X':
            found = True
            hidden_movie = hidden_movie[:i] + guess + hidden_movie[i+1:]
            player2_score += 1
    if not found:
        print("Mismatched")
        break

# Print the correct movie title and scores
print("Correct Movie Title: ", selected_movie)
print("Player 1 Score: ", player1_score)
print("Player 2 Score: ", player2_score)