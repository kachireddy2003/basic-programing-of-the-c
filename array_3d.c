#include<stdio.h>
int main(){
   /* 2D array declaration*/
   int threed_array[2][3][3];
   /*Counter variables for the loop*/
   int i, j, k ;
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
      	for(k=0;k<3;k++) {
		 printf("Enter value for threed_array[%d][%d][%d]:", i, j,k);
         scanf("%d", &threed_array[i][j][k]);
     	}
      }
   }
   //Displaying array elements
   printf("Three Dimensional array elements:\n");
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
      	for(k=0;k<3;k++) {
         printf("%d ", threed_array[i][j][k]);
         if(k==2){
        	printf("\n");
        }
         }
      }
   }
   return 0;
}
