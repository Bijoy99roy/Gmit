#include<stdio.h>
int i,j,k,n,dist[10][10];
void floydWarshell ()
{
 for(k=0;k<n;k++)
  for(i=0;i<n;i++)
   for(j=0;j<n;j++)
    if(dist[i][k]+dist[k][j]<dist[i][j])
     dist[i][j]=dist[i][k]+dist[k][j];
}
int main()
{
  int i,j;
  printf("enter no of vertices :");
  scanf("%d",&n);
  printf("\n");
  for(i=0;i<n;i++)
  for(j=0;j<n;j++)
   {

    scanf("%d",&dist[i][j]);
   }
 floydWarshell();
 printf (" \n\n shortest distances between every pair of vertices \n");
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
   printf("%d\t",dist[i][j]);
  printf("\n");
 }
 return 0;
}

output:
    enter no of vertices :4

5
7
3
8
2
9
99
54
23
67
12
4
9
1
0
34


 shortest distances between every pair of vertices
5       7       3       7
2       9       5       9
7       5       4       4
3       1       0       4
