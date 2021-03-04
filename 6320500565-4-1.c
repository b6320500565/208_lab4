#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int g[n],s[n],b[n],t[n],t3[n-2];
    if(n<3||n>1000)
        printf("worst");
    else
    {
        int max=0,min=t3[2],j,k,jmax,jmin;
        for(i=0; i<n; i++)
        {
            scanf("%d",&g[i]);
            scanf("%d",&s[i]);
            scanf("%d",&b[i]);
            t[i]=4*g[i]+2*s[i]+b[i];
            if(i>=2)
            {
                t3[i]=t[i-2]+t[i-1]+t[i];
                for(j=0;j<=n-2;j++)
                {
                    if(min>=t3[i])
                    {
                        jmin=i;
                        min=t3[i];
                    }
                    if(t3[i]>=max)
                    {
                        jmax=i;
                        max=t3[i];
                    }
                }
            }
        }
        printf("%d ",jmax-1);
        printf("%d",jmin-1);
    }
}
