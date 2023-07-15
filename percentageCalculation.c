#include <stdio.h>

int main() {
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a>=1 && a<=50){
        printf("%d in range of 1 to 50",a);
    }
    else{
        printf("%d not in the range of 1 to 50",a);
    }

}
=============marks and grade===============
#include <stdio.h>

int main() {
    int a;
    printf("Enter a marks:");
    scanf("%d",&a);
    if(a>=80 && a<=100){
        printf("A \n");
    }
    else if(a>=70 && a<80){
        printf("B \n");
    }
    else if(a>=60 && a<70){
        printf("C \n");
    }
    else if(a>=35 && a<60){
        printf("D \n");
    }
    else if(a>=0 && a<35){
        printf("FAIL \n");
    }

}
