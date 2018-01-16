#include<stdio.h>

int main() {
   int x,y,a,q;
   int s=0;
 scanf("%d %d",&x,&q);
 
 for(int i=x+1;i<q;i++)
 {  s=0;
      y=i;
 while(i!=0)
 {
     a=i%10;
     //printf("%d\n",a);
     s=a*a*a+s;
     //printf("%d\n",s);
     i=i/10;
     
  //printf("%d\n",i);
 }
if(s==y)
 printf("%d  ",s);
 
 
 i=y;
}
}
