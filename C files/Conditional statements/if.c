#include <stdio.h>

int main(){
    int age;

    printf("Enter your age: ");
    scanf("%d",&age);

    //Condition
    if(age>=18){
        printf("Logged in!");
    }
    else if(age<0){
        printf("Age cannot be in negative value!");
    }
    else{
        printf("Too young");
    }

    return 0;
}