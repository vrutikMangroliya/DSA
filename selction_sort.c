#include <stdio.h>

void sorting()

{
    int i, j, t;
    int arr[5] = {2, 7, 3, 4, 1};

    for (i = 0; i < 5 ; i++)
    {
        for (j = i+1; j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                t = arr[i];
                arr[i] = arr[j];
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