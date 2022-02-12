#include<stdio.h>
int main(void)
{
  int myArr1D[12]={0}; //create 1D array
  int myArr2D[4][3]={0};//create 2D array
  int i,j,z=0;
  for(i=0;i<12;i++)
  {
    printf("Enter the number : ");
    scanf("%d",&myArr1D[i]);
  }

  for(i=0;i<4;i++){
    for(j=0;j<3;j++){
      myArr2D[i][j]=myArr1D[z];
      z++;
    }
  }
  for(i=0;i<4;i++){
    for(j=0;j<3;j++){
      printf("%d",myArr2D[i][j]);
    }
    printf("\n");
  }
  return 0;
}