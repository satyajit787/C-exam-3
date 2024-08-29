#include <stdio.h>

void main(){

int coulam;

printf("Enter Coulam : ");
scanf("%d",&coulam);

int array[coulam];

printf("Program : \n");

for(int i=0;i<coulam;i++){
    printf("a[%d]= ",i);
    scanf("%d",&array[i]);
}

int largest=array[0];



for(int i=0;i<coulam;i++){
    if(array[i]>largest){
        largest=array[i];
    }

}
printf("The Maximum Number : %d",largest);

}
