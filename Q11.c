#include<stdio.h>
int main() 
{ int i, size;
    printf("enter size of an array: ");
    scanf("%d", &size);
    int a[size];
    printf("enter elements of array:");
    for(i=0;i<size;i++)
    {
        scanf("%d", &a[i]);
    }
    printf(" EVEN ARRAYS :\n");
    for (i=0;i<size;i++)
    {
        if(a[i]>=0)
        {
            if(a[i]%2==0) printf("%d\n",a[i]);
        }
    }
     printf(" ODD ARRAYS :\n");
    for (i=0;i<size;i++)
    {
        if(a[i]>=0)
        {
            if(a[i]%2==1) printf("%d\n",a[i]);
        }
    }
  return 0;
}
