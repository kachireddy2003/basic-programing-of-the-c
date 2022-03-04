#include<stdio.h>
int main(){
   /* 2D array declaration*/
   // Syntax : type array_name[array_size_firstdimension][array_size_seconddimension];
   int twod_array[2][3];
   /*Counter variables for the loop*/
   int i, j;
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("Enter value for twod_array[%d][%d]:", i, j);
         scanf("%d", &twod_array[i][j]);
      }
   }
   //Displaying array elements
   printf("Two Dimensional array elements:\n");
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", twod_array[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
   return 0;
}
