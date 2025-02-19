#include <stdio.h>
int main (){
int n,i,largest,smallest;
printf("\n Enter the number of elements:");
scanf("%d",&n);
int num[i];
printf("\n Enter the elements:");
for (i=0;i<n;i++){
scanf("%d",&num[i]);
}
largest=num[i];
smallest=num[i];
for (i=0;i<n;i++){
if (num[i]>largest){
largest=num[i];
}
if (num[i]<smallest){
smallest=num[i];
}
}
printf("\n The largest number=%d in %dth position",largest,);
printf("\n The smallest number=%d in %dth position",smallest,);
return 0;
}
