#include <stdio.h>
#define n 5
int a[n], f = -1, r = -1;

int display()
{
    for (int i = f; i <= r; i++)
    {
        printf("%d\t", a[i]);
    }
}

int insertend(int val)
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
        printf("Queue Is Empty...\n");
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

int insertfirst(int val)
{
    if (f < 0)
    {
        f = r = 0;
        a[f] = val;
    }
    else
    {
        f--;
        a[f] = val;
    }
}

int deleteend()
{
    if (r < 0)
    {
        printf("queue is full");
    }
    else if (r == f)
    {
        f = r = -1;
    }
    else
    {
        r--;
    }
}

int main()
{
    insertend(10);
    insertend(20);
    insertend(30);
    insertend(40);
    insertfirst(50);
    deleteend();
    //firstdelete();

    display();
}