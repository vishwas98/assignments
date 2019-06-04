#include <stdio.h>
#include <math.h>

//function definition
int isPerfectSquare(int number)
{
    int iVar;
    float fVar;

    fVar=sqrt((double)number);
    iVar=fVar;

    if(iVar==fVar)
        return 1;
    else
        return 0;
}

int computeSurfaceArea(int n)
{
    int surfaceArea;
    int a,s;
    a=sqrt(n);
    s=a/2;
    surfaceArea=6*s*s;// Surface Area= 6*s*s .... where:s- side of a cube.
    return surfaceArea;
}

int main()
{
    int n,s;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    //To check if n is valid
    /**
    In order to built a bigger cube n should be a perfect square
    **/
    if(isPerfectSquare(n))
    {
        printf("%d is a perfect square.\n",n);
        s=computeSurfaceArea(n);
        printf("Surface Area of cube is S1 = %d\n",s);
        printf("After removing unit length cubic block from every corner of the bigger cube:");
        printf("\nThe surface area of the body will remain unchanged, it exposes three faces, which makes the number of exposed faces same as before removal.\n");
        printf("The surface area of new structure, S2 = %d\n",s);
    }
    else
    {
        printf("%d is not a perfect square.",n);
        printf("\nHence it is not valid to form a bigger cube");
    }
    return 0;
}
