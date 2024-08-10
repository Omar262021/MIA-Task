#include <stdio.h>
#include <stdlib.h>

int main()
{
int r=0 , c=0 , j=0 , i=0;       //declaration the variables
int Justice_League=0,villains=0 ;

printf("Enter the number of rows=");      //get the number of rows
scanf("%d",&r);
printf("Enter the number of columns=");   //get the number of columns
scanf("%d",&c);

int j_array[r][c],v_array[r][c];   //declaration the arrays

printf("\nthe power levels of the Justice League.\n");
for(i=0;i<r;i++){                                       //create a loop to gets levels of power of Justice League
    for(j=0;j<c;j++){
            printf("enter the element=");
            scanf("%d",&j_array[i][j]);
    }
}

printf("\nthe power levels of the villains.\n");     //create a loop to gets levels of power of villains
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
            printf("enter the element=");
            scanf("%d",&v_array[i][j]);
    }
}

for(i=0;i<r;i++){                          //create a loop to compare the levels of the powers
    for(j=0;j<c;j++){
        if(j_array[i][j]>v_array[i][j])
                Justice_League++;

        else if(j_array[i][j]<v_array[i][j])
          villains++;

        else{
            villains++;
            Justice_League++;
        }
    }
}
//output
if(Justice_League>villains)
    printf("\nJustice League \n");

else if(Justice_League<villains)
    printf("\nvillains\n");

else
   printf("\nTie\n");

    return 0;
}
