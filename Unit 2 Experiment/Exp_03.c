//Program (12)-> write a program to determine whether a given number is postive,negative,or zero

#include <stdio.h>
int main()
{
    int num;

    printf("Enter a number:");
    scanf("%d",&num);

    if(num>0)
      printf("The number is postive.");

    else if(num<0)
      printf("The number is negative.");

    else
      printf("The number is zero.");
    
    return 0;
}