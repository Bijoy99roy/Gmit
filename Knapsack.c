#include<stdio.h>
void merge(float arr[],int l,int m,int r)
{
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
    float L[n1],R[n2];
    for(i=0;i<n1;i++)
        L[i]=arr[l+i];
    for(j=0;j<n2;j++)
        R[j]=arr[m+1+j];
    i=0;
    j=0;
    k=l;
    while(i<n1&&j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            i++;
        }
        else
        {
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=L[i];
        i++;
        k++;
    }
   while(j<n2)
    {
        arr[k]=R[j];
        j++;
        k++;
    }
}

void mergeSort(float arr[],int l,int r)
{
    if(l<r)
    {
        int m=l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}
int main()
{
    int numberOfObjects,i,j,n;
    float pw[20],x[20],arr[20],profit[20],weight[20],sackValue,xiwi = 0;

    printf("Number of objects:");
    scanf("%d",&n);

    printf("Enter sackValue: ");
    scanf("%f",&sackValue);

    printf("Enter profit and weight:\n");
    printf("profit\tweight\n");
    for(i=0;i<n;i++)
    {
        scanf("%f%f",&profit[i],&weight[i]);

    }
    printf("P/W ratio:\n");
    for(i=0;i<n;i++)
    {
        pw[i]=profit[i]/weight[i];

    }

    for(i=0;i<n;i++)
    {
        arr[i]=pw[i];
        printf("%f   ",pw[i]);
    }


    mergeSort(arr,0,n-1);

    for(i=0;i<n;i++)
    {

        printf("\n%f ",arr[i]);
    }

    for(i=0;i<n;i++)
    {

        printf("\nw:%f ",weight[i]);
    }

    float val;
    int p=0;
    for(i=n-1;i>=0;i--)
    {
            val=arr[i];
            for(j=0;j<n;j++)
            {
                if(val==pw[j])
                {
                if(weight[j]<sackValue)
                {
                        p++;
                        sackValue-=weight[j];
                        x[j]=1;
                    }
                    else if(weight[j]>sackValue)
                    {
                        p++;
                        x[j]=sackValue/weight[j];
                        sackValue=0;
                    }
                    else if(sackValue==0)
                    {
                        p++;
                        x[j]=0;
                    }
                    break;
                }
            }
    }
    for(i=0;i<n;i++)
    {
        printf("\nx:%f",x[i]);
    }

    printf("\nValue of xiwi:");
    for(i=0;i<n;i++)
    {
     xiwi=xiwi+(x[i]*weight[i]);
    }
    printf("%f",xiwi);
    printf("\n%d",p);

}
