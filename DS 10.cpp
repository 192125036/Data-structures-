#include<stdio.h>
int main()
{
int x, m, a[10], p=0;
int i,n,ht,index;
printf("\n enter the array size");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
printf(" enter the value of array");
scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
{
printf("%d",a[i]);
}
for(i=0;i<=n;i++)
if(ht == 0)
{
index =(a[i]%m+p)%m;
}
else
{
p=p++;
}
printf("\n hash table");
for(i=0;i<=n;i++)
printf("%d\t",ht);
}
