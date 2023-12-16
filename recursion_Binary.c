#include <stdio.h>

int arr[20] = {1,5,3,4,6,9,2,5,8,12}, a = 0, b = 0;

int binary_search(int n, int min, int max)
{
    int mid;
    mid = (max + min) / 2;

    if (mid >= 0 && mid < 11)
    {

        if (a == mid)
        {
            b++;
            if (b > 3)
            {
                return -1;
            }
        }

        if (n == arr[mid])
        {
            return 1;
        }
        else if (n > arr[mid])
        {
            min = mid + 1;

            a = mid;
            mid = (max + min) / 2;
            return binary_search(n, min, max);
        }
        else if (n < arr[mid])
        {
            max = mid - 1;

            a = mid;
            mid = (max + min) / 2;
            return binary_search(n, min, max);
        }
    }
    else
    {
        return -1;
    }
}

int main()
{
    int i, k, j, mid, min, max, x, result;

    printf("Enter digit To find in array ");
    scanf("%d", &x);

    for (i = 0; i <= 9; i++)
    {
        for (j = 9; j >= i + 1; j--)
        {
            if (arr[i] > arr[j])
            {
                arr[j] = arr[i] + arr[j]; // b = a + b
                arr[i] = arr[j] - arr[i]; // a = b - a
                arr[j] = arr[j] - arr[i]; // b = b - a
            }
        }
    }
    for (i = 0; i <= 9; i++)
    {
        printf("%d ", arr[i]);
    }
    min = 0;
    max = 9;

    result = binary_search(x, min, max);

    if (result == 1)
    {
        printf(" \n%d is present in an Array", x);
    }
    else if (result == -1)
    {
        printf(" \n%d is not present in Array", x);
    }
    return 0;
}