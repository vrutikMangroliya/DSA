#include <stdio.h>
#define n 5
int a[n], top = -1;

int display()
{
    {
        for (int i = 0; i <= top; i++)
            printf("%d ", a[i]);
    }
    printf("\n ");
}
int insertend(int val)
{
    if (top >= n - 1)
    {
        printf("stack is full....\n");
    }
    else
    {
        a[++top] = val;
    }
}

int delete()
{
    if (top < 0)
    {
        printf("stack is empty\n");
    }
    else
    {
        top--;
    }
}

int main()
{
    insertend(10);
    insertend(20);
    insertend(30);
    delete ();

    display();
}