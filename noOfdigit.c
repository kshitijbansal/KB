#include<stdio.h>

int main() {
   int n;
   int a=0;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
        n=n%10;
        a++;
   }
   printf("%d",a);
}
