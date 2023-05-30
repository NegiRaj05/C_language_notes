# include <stdio.h>
# include <math.h>

// Area of circle = PI*r*r  circum = 2*PI*r

int main(){
    const double PI = 3.14;
    double radius;
    double area;

    printf("\nEnter radius of circle:");
    scanf("%lf",&radius);

    area = PI*radius*radius;
    printf("Area of circle is :%lf",area);

    return 0;
}