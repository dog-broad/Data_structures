#include<stdio.h>
#include<conio.h>

void main()
{
 int i,j, n, a[50], temp;
 clrscr();
 printf("Enter no of elements: ");
 scanf("%d", &n);
 printf("Enter %d elemts: ", n);
 for(i=0; i<n; i++)
  scanf("%d", &a[i]);
 for(i=0; i<n; i++)
 {
  for(j=0; j<n-i-1; j++)
  {
   if(a[j] > a[j+1])
   {
    temp = a[j];
    a[j] = a[j+1];
    a[j+1] = temp;
   }
  }
 }
 printf("\nSorted Lsit; ");
 for(i=0; i<n; i++)
  printf("%d  ", a[i]);
 getch();
}