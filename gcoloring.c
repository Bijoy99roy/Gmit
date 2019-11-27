 #include<stdio.h>
#include<conio.h>
int x[50],g[50][50],n,i,j,m;
void next_value(int k)
{
                while(1)
{
                                x[k]=(x[k]+1)%(m+1);
if(x[k]==0)
return;
for(j=1;j<=n;j++)
{
if(g[k][j]!=0&&(x[k]==x[j]))
break;
}
if(j==n+1)
return;
}
}
void coloring(int k)
{
                do
   {
next_value(k);
if(x[k]==0)
return;
if(k==n)
{
for(i=1;i<=n;i++)
                                printf("vertex %d = color No. %d\t",i,x[i]);
printf("\n");
}
else
coloring(k+1);
}while(k<n+1);
}
void main()
{
int e,k,l;
printf("Enter no. of vertices : ");
scanf("%d",&n);
printf("Enter no. of edges : ");
scanf("%d",&e);
m=n-1;
printf("\nThe maximum possible colours that can be assigned are: %d\n",m);
for(i=0;i<=n;i++)
for(j=0;j<=n;j++)
g[i][j]=0;
printf("Enter u and v of an edge\n");
for(i=1;i<=e;i++)
{
printf("\nfor egde %d\n",i);
scanf(" %d %d",&k,&l);
g[k][l]=1;
g[l][k]=1;
}
for(i=0;i<=n;i++)
                x[i]=0;
printf("\nThe colouring possibilities are:\n");
                coloring(1);
getch();
}



Enter no. of vertices : 4
Enter no. of edges : 5

The maximum possible colours that can be assigned are: 3
Enter u and v of an edge

for egde 1
0 1

for egde 2
1 2

for egde 3
1 3

for egde 4
2 3

for egde 5
3 0

The colouring possibilities are:
vertex 1 = color No. 1  vertex 2 = color No. 2  vertex 3 = color No. 3  vertex 4 = color No. 1
vertex 1 = color No. 1  vertex 2 = color No. 2  vertex 3 = color No. 3  vertex 4 = color No. 2
vertex 1 = color No. 1  vertex 2 = color No. 2  vertex 3 = color No. 3  vertex 4 = color No. 3
vertex 1 = color No. 1  vertex 2 = color No. 3  vertex 3 = color No. 2  vertex 4 = color No. 1
vertex 1 = color No. 1  vertex 2 = color No. 3  vertex 3 = color No. 2  vertex 4 = color No. 2
vertex 1 = color No. 1  vertex 2 = color No. 3  vertex 3 = color No. 2  vertex 4 = color No. 3
vertex 1 = color No. 2  vertex 2 = color No. 1  vertex 3 = color No. 3  vertex 4 = color No. 1
vertex 1 = color No. 2  vertex 2 = color No. 1  vertex 3 = color No. 3  vertex 4 = color No. 2
vertex 1 = color No. 2  vertex 2 = color No. 1  vertex 3 = color No. 3  vertex 4 = color No. 3
vertex 1 = color No. 2  vertex 2 = color No. 3  vertex 3 = color No. 1  vertex 4 = color No. 1
vertex 1 = color No. 2  vertex 2 = color No. 3  vertex 3 = color No. 1  vertex 4 = color No. 2
vertex 1 = color No. 2  vertex 2 = color No. 3  vertex 3 = color No. 1  vertex 4 = color No. 3
vertex 1 = color No. 3  vertex 2 = color No. 1  vertex 3 = color No. 2  vertex 4 = color No. 1
vertex 1 = color No. 3  vertex 2 = color No. 1  vertex 3 = color No. 2  vertex 4 = color No. 2
vertex 1 = color No. 3  vertex 2 = color No. 1  vertex 3 = color No. 2  vertex 4 = color No. 3
vertex 1 = color No. 3  vertex 2 = color No. 2  vertex 3 = color No. 1  vertex 4 = color No. 1
vertex 1 = color No. 3  vertex 2 = color No. 2  vertex 3 = color No. 1  vertex 4 = color No. 2
vertex 1 = color No. 3  vertex 2 = color No. 2  vertex 3 = color No. 1  vertex 4 = color No. 3

