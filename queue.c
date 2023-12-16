#include <stdio.h>
#define n 5
int a[n], f = -1, r = -1;


int display()
{
    if (r != -1)
    {
        for (int i = f; i <= r; i++)
        {
            printf("%d ", a[i]);
        }
    }
}


int insertEnd(int val)
{
    if (r >= n - 1)
    {
        printf("queue is full");
    }
    else if (f < 0)
    {
        f = r = 0;
        a[r] = val;
    }
    else
    {
        r++;
        a[r] = val;
    }
}


int firstdelete()
{
    if (f == r)
    {
        if (f != -1)
        {
            f = -1;
            r = -1;
        }
        else if (f = r = -1)
        {
            printf("queue is full");
        }
    }
    else if (f < 0)
    {
        f = r = -1;
    }
    else
    {
        f++;
    }
}

int main()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);
    firstdelete();
    display();
}