
#include<stdio.h>
#include<stdlib.h> //give access to many  standard library functions.
#include<time.h>  // provides function realted to time.
int main(){
// DISPLAY OF THE GAME 🎮 ROCK PAPER SCISSORS 🎮........//
int choice;
int userscore = 0;
int computerscore = 0;
int draws = 0;
srand(time(NULL));
for(int round = 1; round<=5; round++){
printf("------------------------------------");
printf("        \n       ROCK PAPER SCISSORS\n");
printf("------------------------------------\n");
printf("1-->>Rock\n");
printf("2-->>Paper\n");
printf("3-->>Scissors\n"); 

 //USER INPUTS --->>>>  1).Rock 🪨 , 2).Paper📜 , 3).Scissors✂️//
 //YOU HAVE TO GIVE INPUTS LIKE 1R,2P,3S......//

 printf("Enter your choice-->>");
 scanf("%d",&choice);
 
 if (choice == 1){
    printf("You have selected-->> Rock.\n");
 }

 
    else if(choice == 2){
        printf("You have selected-->> Paper.\n");
    }

    else if ( choice == 3){
        printf("You have selected-->> Scissors.\n");
    }
    else{
        printf("Invalid choice!\n");
        round--;
        continue;
        
    }


    // COMPUTER INPUTS .......//

    
    int computer = rand() %  3 + 1;

    if( computer == 1){
        printf("Computer has selected:-->> Rock\n");
    }
    else if( computer == 2){
        printf("Computer has selected:-->>Paper\n");
    }
    else {
        printf("Computer has selected:-->>Scissors\n");
    }

    // COMPARE THE CHOICES //

    if(choice == computer){
        draws++;
        printf("It's a Draw.\n");
    }
    else if( choice == 1 && computer == 3){
        userscore++;
        printf("You are the winner.\nHurray!!\n\n");

    }
    else if( choice == 2 && computer == 1){
        userscore++;
        printf("You are the winner.\nHurray!!\n\n");
        
    }
    else if( choice == 3 && computer == 2){
        userscore++;
        printf("You are the winner.\nHurray!!\n\n");
        
    }
    else{
        computerscore++;
        printf("The computer wins.\nBetter luck next time.\n");
    }
}
 

// // FINAL RESULT AFTER 5 ROUNDS //
printf("------------------------------------\n");
printf("Final Score -->> You: %d | Computer: %d | Draws: %d\n", userscore, computerscore, draws);

if(userscore > computerscore){
    printf("You won the match overall! 🎉\n");
}
else if(computerscore > userscore){
    printf("Computer won the match overall. Better luck next time!\n");
}
else{
    printf("The match is a tie!\n");
}

return 0;

}

