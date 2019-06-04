#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int x1,y1,z1,x2,y2,z2,x,y,z;
    printf("Enter the Co-ordinates of the point p1:\n");//Takes the co-ordinates values of point p1
    scanf("%d %d %d",&x1,&y1,&z1);

    printf("Enter the Co-ordinates of the point p2:\n");//Takes the co-ordinates values of point p2
    scanf("%d %d %d",&x2,&y2,&z2);

    x=x2-x1;
    y=y2-y1;
    z=z2-z1;

    printf("The function f(a)= %dx+(%dy)+(%dz)",x,y,z);
    return 0;
}
