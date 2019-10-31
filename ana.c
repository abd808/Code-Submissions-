#include<stdio.h>
#include<string.h>

int main()
{
    long long int t,k,f;
    scanf("%lld",&t);
    while(t)
    {
        t--;
        k=0;
        f=0;
        char c1[256],c2[256],p[100005],q[100005];
        for(int i=0;i<256;i++)
        {
            c1[i]=0;
            c2[i]=0;
        }
        scanf("%s %s",p,q);
        if(strlen(p)!=strlen(q))
            printf("No\n");
        else
        {
            while(p[k]!='\0')
            {
                c1[(int)p[k]]++;
                c2[(int)q[k++]]++;
            }
            for(int i=0;i<256;i++)
                if(c1[i]!=c2[i])
                {
                    f=1;
                    break;
                }
            if(f==1)
                printf("No\n");
            else
                printf("Yes\n");
        }
    }
}