#include<stdio.h>

int main() {
   int N;
   int K;
   int a[N];
   int sum=0;
   scanf("%d",&N);
   scanf("%d",&K);
   for(int i=0;i<N;i++)
   scanf("%d",&a[i]);
   for(int i=0;i<K;i++)
   sum=sum+a[i];
   printf("%d",sum);
}
   
