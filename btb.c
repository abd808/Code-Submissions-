#include<stdio.h>
#include<string.h>

long long int c[100005];
char s[100005],a[2],x;

int main()
{
    long long int t,n,k,z,min,f;
    scanf("%lld",&t);
    while(t)
    {
        t--;
        k=0;
        f=0;
        z=strlen(s);
        min=100010;
        scanf("%s %s %lld",s,a,&n); 
        x=a[0];
        for(int i=0;i<z;i++)
            c[i]=0;
        for(int i=0;s[i]!='\0';i++)
            if(s[i]==x)
                c[k++]=i;
        for(int i=0;i<(k-n+1);i++)
            if(min>(c[i+n-1]-c[i]+1))
                min=(c[i+n-1]-c[i]+1);
        for(int i=0;i<(k-n+1);i++)
            if(min==(c[i+n-1]-c[i]+1))
                f++;
        printf("%lld %lld\n",min,f);
    }
}