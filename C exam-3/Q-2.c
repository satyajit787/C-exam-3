
#include<stdio.h>

void main(){

int row,coulam;

printf("Enter row : ");
scanf("%d",&row);

printf("Enter Coulam : ");
scanf("%d",&coulam);
printf("\n");
int array[row][coulam];

for(int i=0;i<row;i++){
    for(int j=0;j<coulam;j++){
        printf("a[%d][%d]= ",i,j);
        scanf("%d",&array[i][j]);
    }
}



int sum=0;

for(int i=0;i<row;i++){
    for(int j=0;j<coulam;j++){{
        sum= sum + array[i][j];
    }
}
}
printf("\nThe sum of matrix : %d\n",sum);
}
