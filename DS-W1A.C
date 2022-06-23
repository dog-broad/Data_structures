#include<stdio.h>
#include<conio.h>

void main()
{
 int i, j, n, key, a[100], flag = 0;
 clrscr();
 printf("Enter no of elements: ");
 scanf("%d", &n);
 printf("Enter %d elemts: ", n);
 for(i=0; i<n; i++)
  scanf("%d", &a[i]);
 printf("Key element to search: ");

 scanf("%d", &key);
 for(i=0; i<n; i++)
 {
  if(a[i] == key)
  {
   flag = 1;
   printf("Key %d found at index a[%d]", key, i);
  }
 }
 if(flag == 0)
  printf("\nKey element not found");
 getch();
}

