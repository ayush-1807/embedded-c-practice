#include<stdio.h>
int main(){
    int num;
    printf("enter a no.:");
    scanf("%d",&num);
    
    if (num>0){
        printf("no. is +ve");
    }else if (num<0){
        printf("no. is -ve");
    }else{
        printf("no. is zero");
    }
}