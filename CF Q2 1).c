#include <stdio.h>
int main(){
int t ,i,n;
scanf("%d",&t);
for(i=1;i<=t;i++){
scanf("%d",&n);
int a = n/10;
int b = n%10;
int c = a + b;
printf("%d\n",c);
}
return 0;
}






