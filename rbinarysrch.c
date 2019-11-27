#include<stdio.h>
int bisrch(int a[],int l,int h,int key)
{
    int low,high,mid;
    low=l;
    high=h;

        if(l==h)
        {
            if(a[l]==key)
                return l;
            else
                return -1;
        }
        mid=(l+h)/2;
        if(a[mid]==key)
            {
                return mid;

            }
        else if(key>a[mid])
            return (a,mid+1,h,key);
        else
            return (a,l,mid-1,key);

    return -1;
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
    if(f==-1)
        printf(" no not found");
    else
        printf("available");
    return 0;
}

output:
Enter the no of elements:7
Enter the elements:1
2
3
4
5
6
7
Enter the no you want to find:2
available
