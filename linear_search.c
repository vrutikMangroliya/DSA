#include <stdio.h>

int main()
{
    int a[10] = {12,10,20,25,60}, i;

    for (i = 0; i <5; i++)
    {
        if (a[i]==25)
        {
            printf("%d\t", i);
        }
    }
    return 0;
}