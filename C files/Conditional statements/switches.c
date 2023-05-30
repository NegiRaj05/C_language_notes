#include <stdio.h>
#include <ctype.h>
int main(){

    char grade;

    printf("Enter your grade: ");
    scanf("%c",&grade);
    grade = toupper(grade);

    // Checker
    switch(grade){
        case 'A':
            printf("Very good!");
            break;
        case 'B':
            printf("Good!");
            break;
        case 'C':
            printf("Could be better!");
            break;
        case 'D':
            printf("You Failed!");
            break;
        default:
            printf("Please enter a valid grade");
            break;
    }

    return 0;
}