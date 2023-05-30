# include <stdio.h>

int main(){
    // Arithmetic operators --->   +,-,*,/,,%,++,--

    int x = 4;
    int y = 5;

    int a = x + y;  // Addition
    int b = x - y;  // Subtract
    float c = x / (float) y;  // Division
    int d = x * y;  // Multiply
    int e = x % y;  // Modulus  returns remainder

    x++;    // increment
    y--;    // decrement 


    // Print
    printf("sum : %d\n",a);
    printf("subtract : %d\n",b);
    printf("division : %f\n",c);
    printf("multiply : %d\n",d);
    printf("modulus : %d\n",e);
    printf("increment : %d\n",x);
    printf("decrement : %d\n",y);

    
    


    return 0;
}