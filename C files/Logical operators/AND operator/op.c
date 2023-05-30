#include <stdio.h>
#include <stdbool.h>


int main(){

    // Logical operators -->    && (AND) checks if both conditions are true

    float temp = 34.9;
    bool sunny = false;

    if(temp>0 && temp<=35 && sunny ){
        printf("The weather is good!");
    
    }
    else{
        printf("The weather is bad!");
    }
    return 0;
}