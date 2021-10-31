#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char s[]="anbu dhoni fan";
    char*tok=strtok(s," ");
    while(tok)   
    {
        printf("%s",tok);
        tok=strtok(NULL," ");
    }
}