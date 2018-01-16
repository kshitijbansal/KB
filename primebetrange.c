#include<stdio.h>

int main() {
   int x,y,a;
 scanf("%d",&x);
 scanf("%d",&y);
 for(int i=x+1;i<y;i++)
 { a=0;
    for(int j=2;j<i;j++)
    {
        if(i%j==0)
        {
            a++;
            break;
        }
    }
    if(a==0)
    {
        printf("%d ",i);
    }
 }
 
}
