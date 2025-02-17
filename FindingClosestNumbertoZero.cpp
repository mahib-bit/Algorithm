#include <bits/stdc++.h>
#include <algorithm>
#include<stdio.h>
using namespace std;

int main()
{
    int n;
    int arr[] = {4, -2, 5, -1, -3, 2, -4, 1};
    n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);
    int closest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (abs(arr[i]) < abs(closest) || abs(arr[i]) == abs(closest) && arr[i] > closest) //abs is absolute value
        closest = arr[i];
    }
    
    printf("The closest number to zero is: %d\n", closest);
    return 0;
}