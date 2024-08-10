#include <stdio.h>
#include <stdlib.h>

int main()
{
int n=0 , i=0 ,target=0 ,none=1 ; //declaration the variables
printf("Enter the number of elements of the array = ");    //get the number of elements
scanf("%d",&n);

int array[n] ; //declaration the array

printf("\nEnter the elements\n");
for(i=0;i<n;i++){
    printf("");      //get the elements
    scanf("%d",&array[i]);
}
printf("\n");
printf("Enter the target number  = ");   //get the target number
scanf("%d",&target);

for(i=0;i<n;i++){                    //create a loop to search about the target number
   if(target==array[i]){
     printf("\n%d\n",i);
     none=0;
     break;

   }
    /*
    if we don't find the target number,the value of none
        is converted to true,the condition is met,
        and the -1 is printed
        */
}
if(none)
    printf("\n-1\n");


    return 0;
}
