#include <stdio.h>
int linear()
{
    int a[10], n, b, i, x = 0;
    printf("how many number enter in list: ");
    scanf("%d", &n);
    printf("\n enter the number in list:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n Enter the number search  list: ");
    scanf("%d", &b);
    for (i = 0; i < n; i++)
    {
        if (b == a[i])
        {
            x++;
        }
    }
    if (x > 0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}

int main()
{
    linear();
}