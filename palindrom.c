#include<stdio.h>

int main() {
   int x,r,a=0;
   int rev;
   scanf("%d",&x);
   rev=x;
   while(rev!=0)
   {  
       r=rev%10;
       a=a*10+r;
       rev=rev/10;
   }
   
   printf("%d",a);
   if(a==x)
   printf("\nyes");
   else
   printf("\nno");
}
