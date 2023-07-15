#include <stdio.h>
int main(){
    int i=3,j=2,a[i][j];
   for(i=0;i<3;i++){
       for(j=0;j<2;j++){
           printf("enter array value for a[%d][%d]",i,j);
           scanf("%d",&a[i][j]);
       }
   }
   for(i=0;i<3;i++){
       for(j=0;j<2;j++){
           printf("%d,",a[i][j]);
       }
       printf("\n");
   }
}
