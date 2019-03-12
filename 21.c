#include <stdio.h>
#include <stdlib.h>
int cmp(const void* a, const void* b)
{
return *((int*)a) - *((int*)b);
}
int array[100];
int main()
{
int n,i,ModeNumber,num,p,tempmn,tempnum;
while(scanf("%d",&n)==1)
{
for(i=0;i<n;i++)
scanf("%d",&array[i]);
qsort(array,n,sizeof(int),cmp);
ModeNumber = array[0];
num = 1;
p = 0;
tempmn = array[0];
tempnum = 1;
while(p<n)
{
p++;
while(p<n&&array[p]==array[p-1])
{
p++;
tempnum++;
}
if(tempnum > num)
{
ModeNumber = tempmn;
num = tempnum;
}
if(p<n)
{
tempnum = 1;
tempmn = array[p];
}
}
printf("%d %d\n",ModeNumber,num);
}
}

