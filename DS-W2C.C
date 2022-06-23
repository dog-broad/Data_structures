#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 int i, j, n, temp, a[100];
 clrscr();
 printf("Enter no of elements: ");
 scanf("%d", &n);
 printf("Enter %d elemts: ", n);
 for(i=0; i<n; i++)
  scanf("%d", &a[i]);
 for(i=0; i<n-1; i++)
 {
  for(j=i+1; j<n; j++)
  {
   if(a[i] > a[j])
   {
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
   }
  }
 }
 printf("\nSorted List: ");
 for(i=0; i<n; i++)
	printf("%d  ", a[i]);
 getch();
}