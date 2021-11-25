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




## High  level requirements


|    ID           |          DESCRIPTION              |       Exp I/P                |    Exp O/P                                     |                                                                                                 |
|----------------------|----------------------------|--------------------------|------------------------|--------------------------------
|HLT | It is requirement based model User have to choose the option betwwen 1 to 4  | Enter no. | saved sucessfully                 
|HLT2| scenario based model  user have to choose one choose one of the three object Ex.rock.paper.scissor| Enter object no.| sent sucessfully
|HLT3| Software requirements needed: Windows, gcc,visual studio.


## low level requirements

|    ID           | DESCRIPTION                                                                                                     |
|----------------------|--------------------------------------------------------------------------------------------------------------
|LLT |  User should enter correct option.
|LLT2|  being truly random selection methods. Rock-paper-scissors can be played with a degree of skill by recognizing and exploiting non-random behavior in one's opponent,               making it feel less like lucK




	

