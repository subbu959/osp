#include<stdio.h>
 int main()
{
    int t,pk,n,bt[20],wt[20],k[20],tat[20],avwt=0,avtat=0,i,j,pri[20],temp,pos,tho=0,th;
    printf("Enter total number of processes(maximum 20):");
    scanf("%d",&n);
     printf("\nEnter Process Burst Time and priority\n");
    for(i=0;i<n;i++)
    {
        printf("P[%d]:",i+1);
        scanf("%d",&bt[i]);
        printf("priority[%d]:",i+1);
        scanf("%d",&pri[i]);
        k[i]=i+1;
tho=tho+bt[i];
    }
    for(i=0;i<n;i++)
    {
         pos=i;
         for(j=i+1;j<n;j++)
         {
             if(pri[j]<pri[pos])
                 pos=j;
         }
         temp=pri[i];
         pri[i]=pri[pos];
         pri[pos]=temp;

         temp=k[i];
         k[i]=k[pos];
         k[pos]=temp;

         temp=bt[i];
         bt[i]=bt[pos];
         bt[pos]=temp;
    }

     wt[0]=0;    
     for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
    }
     for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        avwt+=wt[i];
        avtat+=tat[i];
  }
     avwt/=i;
     avtat/=i;
for(i=0;i<n;i++){
for(j=0;j<n-1;j++){
 if(k[j]>k[j+1]){
    t=bt[j];
   bt[j]=bt[j+1];
   bt[j+1]=t;
    pk=k[j];
k[j]=k[j+1];
k[j+1]=pk;
pk=wt[j];
wt[j]=wt[j+1];
wt[j+1]=pk;
pk=tat[j];
tat[j]=tat[j+1];
tat[j+1]=pk;
}
}
}
th=tho/n;
 printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");
for(i=0;i<n;i++){
printf("\np[%d]\t\t%d\t\t%d\t\t %d",k[i],bt[i],wt[i],tat[i]);
}
    printf("\n\nAverage Waiting Time:%d",avwt);
    printf("\nAverage Turnaround Time:%d",avtat);
printf("\nthrough put:%d",th);
     return 0;
}
/*Input and Ouput:
Enter total number of processes(maximum 20):3

Enter Process Burst Time and priority
P[1]:27
priority[1]:2
P[2]:3
priority[2]:3
P[3]:3
priority[3]:1

Process         Burst Time      Waiting Time    Turnaround Time
p[1]            27              3                30
p[2]            3               30               33
p[3]            3               0                3

Average Waiting Time:11
Average Turnaround Time:22
through put:11*/
