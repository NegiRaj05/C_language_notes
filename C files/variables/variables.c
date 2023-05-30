# include <stdio.h>

int main(){
    // declaring variables
    
    char name[] = "Rajeev"; // String datatype
    int age = 69;   //  integer datatype
    char grade = 'A'; // character datatype
    float percentage = 69.069; // Float datatype

    // Using variables in print statement
    
    printf("Hello %s\n",name);
    printf("Your age is %d\n",age);
    printf("Your grade is %c\n",grade);
    printf("your percentage is %f",percentage);
    return 0;
}