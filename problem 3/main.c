#include <stdio.h>
#include <stdlib.h>

int main()
{
int n=0 , i=0 ,j=0 ,sum=0 ; //declaration the variables
printf("Enter the number of elements of the array = ");    //get the number of elements
scanf("%d",&n);

int array[n] ; //declaration the array

printf("\nEnter the heights\n");
for(i=0;i<n;i++){
    printf("");      //get the elements
    scanf("%d",&array[i]);
}
for(i=0;i<n;i++){              //create a nasted loop to get the maximum height
        for(j=0;j<n;j++){
            if(array[i]>=array[j]){
                sum++;
            }

        }
/*
with each comparison,if the condition is met,the sum is increase,
and if it reaches to n,then the length is greater than all the elements
*/
if(sum==n){
    printf("\n%d\n",array[i]);
    break;
}
sum=0;       //last line in the loop
}


      return 0;
}
