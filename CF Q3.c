#include <stdio.h>
int main(){
int a , b ,c,i,n;
scanf("%d",&n);
for(i=1;i<=n;i=i+1){
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a+b==c){
    printf("+\n");
}
else if(a-b==c){
    printf("-\n");
}}
return 0;
}