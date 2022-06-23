//Quick Sort

#include<stdio.h>

void quick_sort(int a[], int, int);

int main()
{
    int n, i, a[100];
    printf("Enter No. of elements: ");
    scanf("%d", &n);
    printf("Enter the %d elements: ", n);

    //take array elements
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    //call sorting function
    quick_sort(a, 0, n-1);

    //print sorted list
    printf("Sorted list: ");
    for(i=0; i<n; i++)
        printf("%d", a[i]);

    return 0;
}


void quick_sort(int a[100], int low, int high)
{
    int p, i, j, temp;
    printf("here");
    if(low<high)
    {
        p = i = low;
        j = high;
        while(i<j)
        {
            while((a[i]<=a[p]) && i<high)
                i++;
            while(a[j]>a[p])
                j++;
            if(i<j)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        temp = a[j];
        a[j] = a[p];
        a[p] = temp;
        quick_sort(a, low, j-1);
        quick_sort(a, j+1, high);
    }
}
