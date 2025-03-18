#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
}
