#include <stdio.h>
#define n 5
int a[n], f = -1, r = -1;

int display()
{
    int i = f;
    do
    {
        printf("%d\t", a[i]);
        i = (i + 1) % n;
    } while (i != (r + 1) % n);
}
int insertend(int val)
{
    if (r < 0)
    {
        f = r = 0;
        a[r] = val;
    }
    else if ((r + 1) % n == f)
    {
        printf("queue is full");
    } 
    else
    {
        r = (r + 1) % n;
        a[r] = val;
    }
} 

int firstdelete()
{
    if (f < 0)
    {
        printf("queue is empty");
    }
    else if (f == r)
    {
        f = r = -1;
    }
    else
    {
        f = (f + 1) % n;
    }
}

int main()
{
    insertend(10);
    insertend(20);
    insertend(30);
    insertend(40);
    insertend(50);
    firstdelete();
    insertend(60);
    display();
}