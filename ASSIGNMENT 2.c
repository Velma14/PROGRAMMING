#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float a,b;
    int c;
    //a=0;b=_1;
    printf("enter the starting value;");
    scanf("%f",&a);
    printf("enter the ending value;");
    scanf("%f",&b);
    printf("enter the increment value:");
    scanf("%d",&c);

    printf("-----------------\n");
    printf("Fahrenheit to celcius\n");
    printf("-----------------\n");
    while(a<=100)
    {
        //only runs when the value of a is <=100
        if((a > 98.6)&&(b < 98.6))
        {
            printf("%6.2f degrees F=%6.2f degrees c\n",
                   a, (a-32.0)*5.0/9.0);
                   b = a;
                   a = a+c;
    }
    return 0;
}
