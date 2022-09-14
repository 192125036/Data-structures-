#include<stdio.h>
int main()
{
int x,h[10],m,a[10];
int i,n,index;
printf("\n Enter the array size");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the value of array\n");
scanf("%d",&a[i]);
index=a[i]%10;
h[index]=a[i];
}
printf("\n Hash table");
for(i=0;i<n;i++)
printf("%d \t ",(i));
}
