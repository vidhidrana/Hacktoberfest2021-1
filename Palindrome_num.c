#include<stdio.h>
int reverse(int n, int rev)
{
    if(n==0)
        return rev;
    else
        return reverse(n/10,rev*10+n%10);
}
int main()
{
    int n,r;

    printf("enter the number:");
    scanf("%d",&n);
    r=rev(n,0);
    if(n==r)
        printf("%d is palindrome\n",n);
    else
        printf("%d is not palindrome\n",n);
    return 0;
}

    
