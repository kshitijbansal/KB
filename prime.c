#include<stdio.h>

int main() {
   int x,a=0;
   scanf("%d",&x);
   for(int i=2;i<x-1;i++)
   {
   if(x%i==0)
   {
       a++;
   }
   }
   if(a>0)
   printf(" not Prime");
   else
   printf("prime prime");
   }   
