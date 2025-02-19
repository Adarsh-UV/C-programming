#include <stdio.h>
int main (){
int limit,i,item;
printf("\n Enter the number of limit:");
scanf("%d",&limit);
int arr[i];
printf("Enter the elements");
for(i=0;i<limit;i++){
scanf("%d",&arr[i]);
}
printf("Enter the elements to check");
scanf("%d",&item);
for(i=0;i<limit;i++){
if (arr[i]== item) {
printf("item %d found in %d position\n",item,i+1);
}

}
if (arr[i]!= item) {
printf("element %d not in the array",item);
}
return 0;
}
