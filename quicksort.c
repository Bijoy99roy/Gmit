#include<stdio.h>
    void swap(int *p,int *q)
    {
        int t;
        t=*p;
        *p=*q;
        *q=t;
    }
    int part(int a[],int low,int high)
    {
        int pivot,i,j;
         pivot=a[high];
        j=low-1;


        for(i=low;i<high;i++)
        {
            if(a[i]<pivot)
              {
                 j++;
            swap(&a[i],&a[j]);
              }
        }


    swap(&a[j+1],&a[high]);
        return j+1;
    }

    int qsort(int a[],int low,int high)
    {
        int k;
        if(low<high)
        {
          k=part(a,low,high);
        qsort(a,low,k-1);
        qsort(a,k+1,high);
        }

    }

int main()
{
    int a[20],i,j,n;
    printf("enter no of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    qsort(a,0,n-1);
    printf("sorted:\n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    return 0;
}


