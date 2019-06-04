#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int k;
    float p,q,r,s;
    float p1,p2;
    printf("Enter the value of k which represents the count of digits:\n");
    scanf("%d",&k);
    p=pow(10,k);// 10 because every digit has 10 options from 0 to 9.
    printf("Total number of possibilities are :%.2f\n",p);

    printf("Possibility of not containing any digit 0,5,9 is\n");
    q=pow(7,k);// 7 because now every digit has 7 options excluding 0,5,9.
    printf("%.2f\n",q);
    printf("The p1, that the k-digit number does NOT contain the digits 0 , 5 , 9 is : ");
    p1=q/p;
    printf("%.2f\n",p1);

    printf("\nNow considering digit set as only d = { 0 , 1 , 3 , 4 , 5 , 7 , 9 }\n");
    r=pow(7,k);//7 because total possibilites needs to be choosen between available digit set(which are 7 in number).
    printf("Total number of possibilities considering digit set as only d = { 0 , 1 , 3 , 4 , 5 , 7 , 9 } is : %.2f\n",r);

    printf("Possibility of not containing any digit 0,5,9 is\n");
    s=pow(4,k);// 4 because now every digit has 4 options excluding 0,5,9(1,3,4,7 the remaining 4).
    printf("%.2f\n",s);
    printf("The probability p2, that the a k-digit number does NOT contain the digits 0 , 5 , 9 is :");
    p2=s/r;
    printf("%.2f\n",p2);

    return 0;
}
