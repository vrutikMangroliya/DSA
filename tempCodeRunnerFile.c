#include<stdio.h>

int arr[40] = {1,5,3,4,2,6,10,8,9,16,11,14};

int b_search(int n,int min,int max)
{
    int mid;    
    min = arr[0];
    max = arr[11];                                           
                                                        
    mid = min+(max - min) / 2;                            
                                                        
    if (n == mid)                                       
    {                                                   
            return 1;                                    
    }
    else if (n > mid)
    {
        min = mid;
        return b_search(n,min,max);
    }
    else if (n < mid)
    {
        max = mid;
        return b_search(n,min,max);
    }
    else 
    {
        return -1;
    }
}

int main()
{
    int i, k, j, mid, min, max, x, result;

    printf("Enter Which Digit You Want To Find In Array  ");
    scanf("%d",&x);
    
    for (i = 0; i < 9; i++)
    {
        for (j = 9; j >= i+1; j--)
        {
            if (arr[i] > arr[j])
            {
                arr[j] = arr[i] + arr[j]; // b = a + b
                arr[i] = arr[j] - arr[i]; // a = b - a
                arr[j] = arr[j] - arr[i]; // b = b - a
            }
        }
    }
    for (i = 0; i < 12; i++)
    {
        printf("%d ", arr[i]);
    }

    

    result = b_search(x,min,max);

    if(result == 1)
    {
        printf("\n\t\t %d is present in an Array",x);
    }
    else if(result = -1)
    {
        printf("%d is not present in Array",x);
    }

    return 0;



}