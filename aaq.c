#include<stdio.h>

int main()
{
    long long int n,q,a[100005],d,l,r,m,c;
    scanf("%lld %lld",&n,&q);
    for(int i=0;i<n;i++)
        scanf("%lld",&a[i]);
    for(int i=1;i<n;i++)
        a[i]+=a[i-1];
    while(q)
    {
        q--;
        scanf("%lld",&d);
        l=0;
        r=n-1;
        while(l<=r)
        {
            m=l+(r-l)/2;
            c=-1;
            if(a[m]==d)
            {
                c=m+1;
                //printf("ha1\n");
                break;
            }
            else if(a[m]>d)
            {
                if(a[m-1]<d)
                {
                    c=m+1;
                    //printf("ha2\n");
                    break;
                }
                else
                    r=m-1;
            }
            else
                l=m+1;
        }
        printf("%lld\n",c);
    }
    
}