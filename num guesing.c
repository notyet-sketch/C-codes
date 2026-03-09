#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int attempts=7,guess,number,choice,max,difference,guesses=0;
    char again;
    srand(time(0));
    printf("==========Numer guessing game==========\n");
    do{
        printf("Enter difficulty:\n1. Easy (1-50)\n2. Normal (1-100)\n3. Hard (1-150)\n>>>");
        scanf("%d",&choice);
        attempts = 7;
        guesses = 0;
        
        if(choice==1){
            max=50;
        }
        else if (choice==2)
        {
           max=100;
        }
        else if (choice==3)
        {
            max=150;
        }
        else{
            printf("Please try (1-3)\n");
            continue;
        }
        number= rand() % max+1;
        do{

            printf("Enter your guess:");
            scanf("%d",&guess);
            guesses++;
            attempts--;

            if (guess>number){
                difference=guess-number;
                if(difference<=10){
                    printf("Too close! Try lower.\n");
                }
                else if (difference>10 && difference<=20)
                {
                    printf("You are going close! Try lower.\n");
                }
                else if (difference>20 && difference<=50)
                {
                    printf("High enough.\n");
                }
                else if (difference>50)
                {
                    printf("Too high!");
                }
            }

            else if (guess<number){
                difference=number-guess;
                if(difference<=10){
                    printf("Too close! Try higher.\n");
                }
                else if (difference>10 && difference<=20)
                {
                    printf("You are going close! Try higher.\n");
                }
                else if (difference>20 && difference<=50)
                {
                    printf("Low enough.\n");
                }
                else if (difference>50)
                {
                    printf("Too low!");
                } 
                
            }
            
            

            else if(guess==number){
                printf("You found it!\n");
                printf("You took total %d attempts.\n",guesses);
            }

            printf("You have %d attempts left.\n",attempts);
            
            

        }while(guess!=number && attempts!=0);
        if(guess!=number && attempts==0){
                printf("Game over!\nThe number was %d.",number);
            }

        printf("Play again?\n>>>");
        scanf(" %c",&again);
        

    }while(again!='N' && again!='n');
    

    return 0;
}