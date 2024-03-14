#include<stdio.h>
int main()
{
    int n,c,r,s=0;
    printf("Enter the positive number ");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        r=n%10;
        s=(s*10)+r;
        n=n/10;
    }
    if(c==s)
    printf("The number is palindrome");
    else
    printf("Not a palindrome");
    return 0;

}
