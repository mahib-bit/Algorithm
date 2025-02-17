#include<stdio.h>
int main()
{   
    int N,K,flag=0;
    printf("Enter number of player:");
    scanf("%d",&N);
    int arr[N];
    printf("Enter the minimum score:");
    scanf("%d",&K);
    printf("Enter the players score:");
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);

        if(arr[i]>=K)
        {
            flag++;
        }
    }
    printf("%d",flag);
}