#include<stdio.h>
#include<conio.h>
void main()
{
int i,N[i],c=0,F,T;
printf("enter sum upto and no: of elements");
scanf("%d%d",&F,&T);
for(i=1;i<=T;i++)
{
scanf("%d",&N[i]);
}
for(i=1;i<=F;i++)
{
c=c+N[i];
}
printf("sum is %d",c);
getch();
}
