#include<stdio.h>
int main(){
   int n;
   scanf("%d", &n);
   int a = 0, b = 1;
   int c=a+b;
   for(int i=0; i <=n;  i++);
   printf("%d", a);
   c=a+b;
   a=b+c;
   b=a+c;
}
