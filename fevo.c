#include <stdio.h>
int main()
{
    int n,i,s;
    printf("enter limit to start");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
       s=i*i;
        printf("  %d  ",s);
    }
    return 0;
}
