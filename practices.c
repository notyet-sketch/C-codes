#include<stdio.h>

int main(){
    //swap two nubers
    int a=4, b=7,temp;
    printf("a = %d, b = %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("a = %d, b = %d\n",a,b);

    //celcius to fahrenheit

    float celcius= 43.5665;
    float fahrenheit=((celcius*9)/5)+32;
    printf("%.2f in farhrenheit is %.2f\n",celcius,fahrenheit);

    //area of cicrle and rectangle

    float radius=5;
    printf("Area = %.2f\n",(radius*radius)*3.416);
    

    return 0;
}