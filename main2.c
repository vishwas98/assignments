
#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

int main()
{
    int m=0,c=0,x=0,y=0;
    //Read the values of m,c,x,y from end user
    printf("Enter the values of slope m, constant c, x-coordinate, y-coordinate:");
    scanf("%d %d %d %d",&m,&c,&x,&y);
    if(point_On_Line(m,c,x,y))
    {
        printf("\nThe Point (%d,%d) lies on the line y=mx+c",x,y);
    }
    else
    {
        printf("\nThe Point (%d,%d) doesn't lies on the line y=mx+c",x,y);
    }
    return 0;
}
int point_On_Line(int m,int c,int x,int y)
{
    // check Whether the values satisfies the standard equation of the line y=mx+c.
    if(y==(m*x)+c)
        return 1; //Return 1 if satisfies.
    else
        return 0;//Return 0 if it doesn't satisfies.
}
