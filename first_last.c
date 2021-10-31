#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    scanf("%d",&num);
    int temp=num,count=0,first,last,value=0;
    long digit=1;
    while(temp>9)
    {
        temp=temp/10;
        digit*=10;
    }
    first=num/digit;
    last=num%10;
    value=value*10+last;
    digit/=10;
    while(digit>=10)
    {
        value=value*10+((num/digit)%10);
        digit/=10;
    }
    value=value*10+first;
    printf("%d",value);
}