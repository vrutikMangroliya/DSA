#include <stdio.h>
#include <stdlib.h>
void merge(int a[], int l, int mid, int h)
{
    int b[10];
    int i = l, j = mid + 1, k = l;
    while (i <= mid && j <= h)
    {
        if (a[i] < a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }
    while (i <= mid)
        b[k++] = a[i++];

    while (j <= h)
        b[k++] = a[j++];

    for (i = l; i <= h; i++)
        a[i] = b[i];
}
int mergesort(int a[], int l, int h)
{
    int mid;
    if (l < h)
    {
        mid = (l + h) / 2;
        mergesort(a, l, mid);
        mergesort(a, mid + 1, h);
        merge(a, l, mid, h);
    }
}
int main()
{
    int a[10] = {63, 52, 60, 45, 49, 33, 51, 19, 14, 50};
    int n = 10, i;

    printf("before sorting array is:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    mergesort(a, 0, n - 1);
    printf("\n after sorting array is:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}