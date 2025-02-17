#include <stdio.h>
int main()
{
    int T;
    int t;
    printf("Enter number of cases :");
    scanf("%d", &T);
    for (t = 0; t < T; t++)
    {
        int N;
        printf("Enter number of students :");
        scanf("%d", &N);

        int speed[N];

        printf("Enter the speed for %d students :",N);

        for (int i = 0; i < N; i++)
        {
            scanf("%d", &speed[i]);
        }

        int max = speed[0];

        for (int i = 1; i < N; i++)
        {
            if (speed[i] > max)
            {
                max = speed[i];
            }
        }
        printf("Case %d: %d\n", t + 1, max);
    }
}