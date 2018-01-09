#include<stdio.h>
void main()
{
int a;
scanf("%d",&a);
if(a<1)
{
  printf("0");
}
else
{
  printf("%d",a%100);
}
}
