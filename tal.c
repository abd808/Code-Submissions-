#include<stdio.h>

long long int m=1000000007;

long long int num(long long int n,long long int k)
{
    if((n==1)||(n==0))
        return 1;
    if(n<0)
        return 0;
    return ((num(n-1,k)%m+num(n-k,k)%m)%m);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t)
    {
        t--;
        long long int n,k;
        scanf("%lld %lld",&n,&k);
        printf("%lld\n",num(n,k));
    }
}