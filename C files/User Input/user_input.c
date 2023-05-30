# include <stdio.h>

int main(){
    // Taking user input
    int age;
    char name[10];
    char full_name[25];

    printf("your full name? ");
    fgets(full_name,25,stdin);
    printf("Your age? ");
    scanf("%d",&age);
    printf("your name? ");
    scanf("%s",&name);


    printf("\nyour age is %d\n",age);
    printf("Your name is %s\n",name);
    printf("your full name is %s",full_name);

    return 0;
}