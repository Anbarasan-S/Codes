#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#include<string.h>
int max(int a,int b)
{
    return a>b?a:b;
}
int main()
{
    char s1[1000],s2[1000];
    scanf("%s %s",s1,s2);
    printf("%s %s",s1,s2);
    int len1=strlen(s1),len2=strlen(s2);
    int dp[1000][1000];
    int max_val=0;
    for(int i=0;i<1000;i++)
    {
        for(int j=0;j<1000;j++)
        {
            dp[i][j]=0;
        }
    }
    for(int i=0;i<len1;i++)
    {
        for(int j=0;j<len2;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
                printf("%d",dp[i][j]);
                if(max_val<dp[i][j])
                {
                    max_val=dp[i][j];
                }
            }
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    printf("%d",max_val);


}