# M1_game_Rock_paper_Scissors

# Test plan 

### Expected output- 
1. rock
2. paper
3. scissor
4. exit
### select any number between 1 to 4 and get according to win or lost output.
program is running according to expectations except that when there is a tied game, it repeats the result twice.
I have a function to get the user's choice, I have one to generate the computer's choice, I have one that determines the winner and displays it (using result + win/lose functions to display the winner), and all three are in a function called Play_the_Game.

In case of a tie, the function prints "It's a tie!" and calls Play_the_Game again.

This is the output I get:

Please choose - Rock, Paper, or Scissors? Rock
The computer chooses rock.
The game is tied, choose again.

Please choose - Rock, Paper, or Scissors? Rock
The computer chooses paper.
Paper covers rock, you lose.
Paper covers rock, you lose
