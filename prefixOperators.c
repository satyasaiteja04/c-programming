/*prefix operators*/
#include<stdio.h>
int main()
{
    int a=7,b=12,c;
    c=b*(a++)+5*(++a);
    printf("a=%d",a);
    printf("\nb=%d",b);
    printf("\nc=%d",c);
    
}
