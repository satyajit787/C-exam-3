

#include<stdio.h>

void main(){

int coulam;



printf("Enter Coulam : ");
scanf("%d",&coulam);
printf("\n");
int array[coulam];


    for(int j=0;j<coulam;j++){
        printf("a[%d]= ",j);
        scanf("%d",&array[j]);
    }




int sum=0;

    for(int j=0;j<coulam;j++){
         sum += array[j];
    }
printf("\nThe sum of the all element : %d\n",sum);
}


