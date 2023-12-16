#include <stdio.h>

void sorting()

{
    int i, j, t;
    int arr[5] = {2, 7, 3, 4, 1};

    for (i = 0; i <5; i++)
    {
        for (j = 0; j < 5 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                t = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = t;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }
}
int main()
{
    sorting();
}