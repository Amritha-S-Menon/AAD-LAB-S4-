#include<stdio.h>
#define INF 1000
int vertex[10];

int A[10][10];
int closed[10];
int n;

int main()
{
int i,k, j ,p,q;
printf("enter the no: of nodes :");
scanf("%d",&n);
printf("enter the adjcency matrix \n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
scanf("%d",&A[i][j]);
}
}


//void shortpath(int cost[][],

for(k=1;k<=n;k++)
{
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
p= A[i][k]+A[k][j];
q= A[i][j];

if(p>q)

	A[i][j]=q;
else
	A[i][j]=p;
}
}
}


printf("\n\nshortest path: \n");

for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
printf("%d\t",A[i][j]);
}
printf("\n");
}

}




