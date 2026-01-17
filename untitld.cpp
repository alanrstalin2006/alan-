#include <stdio.h>

int main() {
   
   int a[100],large,small,n,i;
   printf("enter the size of the array:  ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
	   printf("enter the element in a[%d]:  ",i+1);
	   scanf("%d",&a[i]);
	}
  large = a[0];
    small = a[0];
    for ( i = 1; i < n; i++) {
        if (a[i] > large) {
            large = a[i];
        }
        if (a[i] < small) {
            small = a[i];
		}
	}
 printf("\n largest element is %d",large);
 printf("\n smallest element is %d",small);

}
