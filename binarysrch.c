#include<stdio.h>
int bisrch(int a[],int l,int h,int key)
{
    int low,high,mid;
    low=l;
    high=h;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
            {
                return mid;
                break;
            }
        else if(key>a[mid])
            low=mid+1;
        else
            high=mid-1;

    }
    return 0;
}
int main()
{
    int a[20],i,j,n,c,f;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the no you want to find:");
    scanf("%d",&c);
    f = bisrch(a,0,n,c);
    if(f==0)
        printf(" no not found");
    else
        printf("available");
    return 0;
}

output:
    Enter the no of elements:6
Enter the elements:1
2
3
4
5
6
Enter the no you want to find:5
available
