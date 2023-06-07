#include <stdio.h>

int main() {
    int a,b;
    printf("Enter two number:");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("maximum number is %d\n",a);
    }
    else{
        printf("maximum number is %d\n",b);
    }
}
==============even or odd====================
int main() {
    int a;
    printf("Enter two number:");
    scanf("%d",&a);
    if(a%2==0){
        printf("%d is even",a);
    }
    else{
        printf("%d is odd",a);
    }

}
=============vowel===============
#include <stdio.h>

int main() {
    char a;
    printf("Enter a charachter:");
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
        printf("%c is vowel",a);
    }
    else if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
        printf("%c is vowel",a);
    }
    else{
        printf("%c is consonent",a);
    }

}
