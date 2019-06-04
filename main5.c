#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define PI 3.14159265358979323846




float findArea(float diagonal)//This function returns the area of the circle
{

    float radius,area;
    radius=diagonal/2.0;//given the diagonal is same as that of the radius of the circle
    area=PI*(radius*radius);
    return area;
}

int main()
{
    int d,side;
    float diagonal,area,circumference;
    printf("Enter the area of the square:\n");
    scanf("%d",&d);
    side=sqrt(d);;// to find each length of a square
    diagonal=sqrt(side*side+side*side);
    area=findArea(diagonal);
    circumference=2*PI*diagonal;
    printf("The Area of the circle is : %.2f\n",area);
    printf("The Circumference of the circle is : %.2f",circumference);
    return 0;
}
