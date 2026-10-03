#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void one(int input, int ai){
    if(input == 'r'){
        printf("You :\n");
        printf("Rock\n");
    }
    else if(input == 's'){
        printf("You :\n");
        printf("Scissors\n");
    }
    else if(input == 'p'){
        printf("You :\n");
        printf("Paper\n");
    }

    if(ai == 1){
        printf("Computer :\n");
        printf("Rock\n");
    }
    else if(ai == 2){
        printf("Computer :\n");
        printf("Paper\n");
    }
    else if(ai == 3){
        printf("Computer :\n");
        printf("Scissors\n");
    }
}




int main(){
    char input;
    srand(time(NULL));
    int ai = (rand() % 3) + 1;

    printf("Your Turn : \n");
    scanf(" %c", &input);

    one(input, ai);

    if(input == 'r' && ai == 1){
        printf("Draw\n");
    }
    else if(input == 'r' && ai == 2){
        printf("Computer Win !\n");
    }
    else if(input == 'r' && ai == 3){
        printf("You Win !\n");
    }
    else if(input == 'p' && ai == 1){
        printf("You Win !\n");
    }
    else if(input == 'p' && ai == 2){
        printf("Draw\n");
    }
    else if(input == 'p' && ai == 3){
        printf("Computer Win !\n");
    }
    else if(input == 's' && ai == 1){
        printf("Computer Win !\n");
    }
    else if(input == 's' && ai == 2){
        printf("You Win !\n");
    }
    else if(input == 's' && ai == 3){
        printf("Draw\n");
    }


    return 0;
}