#include<stdio.h>
int main()
{
    int a[14]={4,7,44,47,74,77,444,447,474,477,777,747,774,744};
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=0;i<13;i++)
    {
    {
    if(n%a[i]==0) 
    printf("YES\n");
    break;   
    }   
    }  
    printf("NO\n");
}