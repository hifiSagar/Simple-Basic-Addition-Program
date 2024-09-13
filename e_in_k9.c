#include<stdio.h>

void greet(){
    printf("hello world\n");

}
int add (int m,int n){
    int sum;
    sum= m+n;
    return sum;
}

void main(){
    int m,n,sum;
    greet();
    printf("Enter two numbers \n ");
    scanf("%d %d", & m,& n);
    sum=add(m,n);
    printf("printing sum : %d",sum);
}
