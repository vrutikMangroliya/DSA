#include <stdio.h>
#define n 5
int arr[5], top = -1, b[5];

int display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insertend(int val)
{
    if (top >= n - 1)
    {
        printf("STACK IS FULL");
    }
    else
    {
        top++;
        arr[top] = val;
    }
}

int deleteend()
{
    if (top == -1)
    {
        printf("STACK IS EMPTY");
    }
    else
    {
        top--;
    }
}

int insertfirst(int val)
{
    int a, b;
    if (top == -1)
    {
        top++;
        arr[top] = val;
    }
    else if (top >= 4)
    {
        printf("STACK IS FULL");
    }
    else
    {
        top++;
        b = top - 1;

        for (int i = top; i > 0; i--)
        {
            arr[i] = arr[b];
            b--;
        }
        arr[0] = val;
    }
}

int deletefirst()
{
    int a = 1;

    if (top == -1)
    {
        printf("SSTACK IS EMPTY");
    }

    else
    {
        for (int i = 0; i <= top; i++)
        {
            arr[i] = arr[a];
            a++;
        }
    }
    top--;
}

int main()
{
    int x;

    /* printf("enter 1 to insertEnd \n");
     printf("enter 2 to delete \n");
     printf("enter 3 to display \n");
     printf("enter 0 to Exit \n");
     scanf("%d", &x);

     switch (x)
     {
     case 1:
         insertEnd(x);
         break;

     case 2:
         delete ();
         break;
     case 3:
         display();
         break;
     case 0:
         exit();
         break;
     defult:


     }*/

    insertfirst(10);
    insertfirst(20);
    insertfirst(50);
    insertend(30);
    deletefirst();

    printf("\n");
    display();
    return 0;
}