#include<stdio.h>
#include<stdlib.h>

void main()
{
int *fp,n,sum=0;
printf("Enter how many Numbers??\n");
scanf("%d",&n);
fp=(int *)calloc(n,sizeof(int));
for(int i=0;i<n;i++)
{
scanf("%d",fp+i);
}
for(int i=0;i<n;i++)
{
sum=sum+*(fp+i);
}
printf("Sum:%d\n",sum);
free(fp);
}
