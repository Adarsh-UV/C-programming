#include <stdio.h>
int main() {
int a,b,sum;
char op;
printf("enter the numbers");
scanf("%d%d",&a,&b);
printf("enter the operation");
scanf(" %c",&op);
switch (op)
{ case ('+'):
sum=a+b;
printf("%d+%d=%d",a,b,sum);
break;
case('-'):
printf("%d-%d=%d",a,b,a-b);
break;
case('*'):
printf("%d*%d=%d",a,b,a*b);
break;
case('/'):
printf("%d/%d=%d",a,b,a/b);
break;
}

return 0;
}
