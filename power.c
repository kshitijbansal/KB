#include<stdio.h>
#include<math.h>

int main() {
   int n;
   int a;
   int p=1;
   scanf("%d",&n);
   scanf("%d",&a);
   for(int i=0;i<a;i++)
   {
       p=p*n;
   }
   printf("%d",p);
   
}
