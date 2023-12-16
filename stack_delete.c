#include <stdio.h>
#define n 5
int a[n], top = -1;

int display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d\t", a[i]);
    }
}
int insertEnd(int val)
{
    if (top >= n - 1)
    {
        printf("stack is full\n");
    }
    else
    {
        top++;
        a[top] = val;
    }
}
int deleteend()
{
    if (top == -1)
    {
        printf("Stack is empty.......\n");
    }
    else
    {
        top--;
    }
}


int insertfirst(int val)
{
    int j,k;
    if(top==-1)
    {
        top++;
        a[top]=val;
    }
    else if(top>=4)
    {
        printf("\nStack is already full");
    }
    else{
        top++;
        k=top-1;

        for(int i=top;i>0;i--)
        {
            a[i]=a[k];
            k--;
        }
        a[0]=val;
    }
    
}
int firstdelete(int val)
{
    int j=1;

    if(top==-1)
    {
        printf("\nStack is already empty");
    }
    
    else{
       for(int i=0;i<=top;i++)
       {
            a[i]=a[j];
            j++;
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
    }*/

    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);
    deleteend();
    insertfirst(11);
    firstdelete(22);
    display();
}