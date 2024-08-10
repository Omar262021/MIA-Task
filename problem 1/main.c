#include <stdio.h>
#include <stdlib.h>

int main()
{
int rows=0 , i=0 , j=0;           //declaration the variables

printf("Enter the number of rows =");     //get the input
scanf("%d",&rows);

for(i=1;i<=rows;i++){       //creating a nasted loop to create the pattern
    for(j=1;j<=i;j++) {

        printf("*");     //output

    }
    printf("\n");      //print new line
}
    return 0;
}
