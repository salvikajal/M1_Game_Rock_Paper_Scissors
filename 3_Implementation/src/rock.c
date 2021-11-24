int main() {
int userChoice,compChoice;
srand(time(0));
printf("\t\t\t\t==========Welcome to Rock, Paper & Scissor Game==========");
while(userChoice != 4){
printf("\nPlease select the option: ");
printf("\n1.Scissor");
printf("\n2.Paper");
printf("\n3.Rock");
printf("\n4.Quit\n");
scanf("%d",&userChoice);

compChoice = (rand() % 3) + 1;
checkOptions(userChoice,compChoice);
}
