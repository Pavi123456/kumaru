#include<stdio.h>
int main()
{
int num,a[50],count=0,i,k;
scanf("%d",&num);
for(i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<num;i++)
{
if(a[i]!='/0')
{
	count++;
}
}
k=count/2;
printf("%d",a[k]);

return 0;
}
