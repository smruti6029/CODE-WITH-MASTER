// with argument no return type....
#include<stdio.h>
void sum(int a, int b)  //formal arguments
{
    int c;
    c=a+b;
    printf("%d",c);
}
void main()
{
    int a,b;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    sum(a,b);//ac arguments 
    
}