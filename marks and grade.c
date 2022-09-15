#include<stdio.h>
#include<math.h>
void main()
{
    int Total;
    float Per,marks1,marks2,marks3,marks4;
    printf("\nEnter the marks in Slot A: ");
    scanf("%f",&marks1);
    printf("\nEnter the marks in Slot B: ");
    scanf("%f",&marks2);
    printf("\nEnter the marks in Slot C: ");
    scanf("%f",&marks3);
    printf("\nEnter the marks in Slot D: ");
    scanf("%f",&marks4);
    int a=ceil(Total);
    if(marks1>=0 && marks2>=0 && marks3>=0 && marks4>=0)
    {
    Total=(marks1+marks2+marks3+marks4);
    Per=(Total/4);
    printf("The total marks of the student is %d",Total);
    printf("\nThe aggregate of the student is %f",Per);
    if(Per<=100 || Per>=75)
    {
        printf("\nDISTINCTION");
    }
    else if(Per<75 || Per>=60)
    {
        printf("\nFIRST DIVISION");
    }
    else if(Per<60 || Per>=50)
    {
        printf("\nSECOND DIVISION");
    }
    else if(Per<50 ||  Per >=40)
    {
        printf("\nTHIRD DIVISION");
    }
    else
    {
        printf("\nFAILED");
    }
    }
    else
    {
        printf("INVALID INPUT");
    }
}
