#include<stdio.h>
void main() 
{
int m=0,m1=0,m2=0,p,count=0,i;
printf("enter the memory capacity:");
scanf("%d",&m);
printf("enter the no of processes:");
scanf("%d",&p);
for(i=0;i<p;i++)
{
printf("\nenter memory req for process%d: ",i+1);
scanf("%d",&m1);
count=count+m1;
if(m1<=m)
{
if(count==m)
printf("there is no further memory remaining:");
printf("the memory allocated for process%d is: %d ",i+1,m1);
m2=m-m1;
printf("\nremaining memory is: %d",m2);
m=m2;
}
else
{
printf("memory is not allocated for process%d",i+1);
}
printf("\nexternal fragmentation for this process is:%d",m2);
}
}
/*Input and Output:
enter the memory capacity:500
enter the no of processes:5

enter memory req for process1: 20
the memory allocated for process1 is: 20
remaining memory is: 480
external fragmentation for this process is:480
enter memory req for process2: 300
the memory allocated for process2 is: 300
remaining memory is: 180
external fragmentation for this process is:180
enter memory req for process3: 30
the memory allocated for process3 is: 30
remaining memory is: 150
external fragmentation for this process is:150
enter memory req for process4: 70
the memory allocated for process4 is: 70
remaining memory is: 80
external fragmentation for this process is:80
enter memory req for process5: 100
memory is not allocated for process5
external fragmentation for this process is:80*/


