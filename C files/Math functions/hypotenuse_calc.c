#include <stdio.h>
# include <math.h>

int main(){
    // Hypotenuse calculator Program , formula = h = sqrt(p2+b2)

    double hypo;
    double base;
    double height;

    printf("Enter base: ");
    scanf("%lf",&base);
    printf("Enter height: ");
    scanf("%lf",&height);

    hypo = sqrt(height*height+base*base);

    printf("Hypotenuse: %lf",hypo);


    return 0;
}