// grestest between two no.s
#include<stdio.h>
int main(){
    int a,b;
    printf("enter two no.s:");
    scanf("%d %d",&a,&b);

    if (a>b) {
        printf("a is greater %d" ,a);
    } else if (b>a){
        printf("b is greater %d" ,b);
    } else {
        printf("both are equal");
    }
}