#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int stonePaperScizzor(char you,char comp){

    //Returns 1 if you win, -1 if you lose and 0 if draw
    if(you == comp){
        return 0; //both choosed same 
    }

    if(you == 'p' && comp == 's'){
        return 1;  //paper wrap the stone ,paper wins
    }
    else if(you == 's' && comp == 'p'){
        return -1;  //stone lose
    }
    if(you == 'z' && comp == 'p'){
        return 1; //scizzor cuts the paper,scizzor wins
    }
    else if(you == 'p' && comp == 'z'){
        return -1; //paper lose
    }
    if(you == 's' && comp == 'z'){
        return 1; //stone breaks the scizzor,stone wins
    }
    else if(you == 'z' && comp == 's'){
        return -1; //scizzor lose
    }

        
    }


int main()
{
    char you, comp;
    srand(time(0));
    int num = rand()%100 + 1;
    printf("%d \n",num);

    if(num < 33){
        comp='s';
    }
    else if(num > 33 && num < 66){
        comp='p';
    }
    else {
        comp='z';
    }

    printf("Enter 's' for stone, 'p' for paper, 'z' for scizzor : ");
    scanf("%c",&you); //your input

    int result = stonePaperScizzor(you,comp);  //function
    printf("You choosed %c and computer choosed %c \n",you,comp);

    
    if(result == 0){
        printf("Game Draw !!\n");
    }
    else if(result == 1){
        printf("You Win !!\n");
    }
    else if(result == -1){
        printf("You Lose !!\n");
    }
    return 0;

}