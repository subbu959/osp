#include<stdio.h>
 int main()
{    
int ta=0,t,p;
    int n,bt[20],wt[20],tat[20],k[20],i,j;
    printf("Enter total number of processes(maximum 20):");
    scanf("%d",&n);
     printf("\nEnter Process Burst Time\n");
    for(i=0;i<n;i++)
    {
        printf("P[%d]:",i+1);
        scanf("%d",&bt[i]);
k[i]=i+1;
ta=ta+bt[i];
    }
for(i=0;i<n;i++){
for(j=0;j<n-1;j++){
 if(bt[j]>bt[j+1]){
    t=bt[j];
   bt[j]=bt[j+1];
   bt[j+1]=t;
    p=k[j];
k[j]=k[j+1];
k[j+1]=p;
}
}
}

wt[0]=0;   

    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++){
            wt[i]+=bt[j];
    }

}
float avgw=0,avgt=0,avg,av,th;
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        avgw=wt[i]+avgw;
avgt=tat[i]+avgt;
    }
avg=avgw/(float)n;
av=avgt/(float)n;
th=ta/(float)n;
for(i=0;i<n;i++){
for(j=0;j<n-1;j++){
 if(k[j]>k[j+1]){
    t=bt[j];
   bt[j]=bt[j+1];
   bt[j+1]=t;
    p=k[j];
k[j]=k[j+1];
k[j+1]=p;
p=wt[j];
wt[j]=wt[j+1];
wt[j+1]=p;
p=tat[j];
tat[j]=tat[j+1];
tat[j+1]=p;
}
}
}
 printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");
for(i=0;i<n;i++){
printf("\np[%d]\t\t %dms\t\t  %dms\t\t  %dms",k[i],bt[i],wt[i],tat[i]);
}
printf("\naverage waiting time is:%f ms\naverage turn around time is:%f ms\nthrough put:%f ms",avg,av,th);
}
/*Input and Output:
Enter total number of processes(maximum 20):3

Enter Process Burst Time
P[1]:27
P[2]:3
P[3]:3

Process         Burst Time      Waiting Time    Turnaround Time
p[1]             27ms             6ms             33ms
p[2]             3ms              0ms             3ms
p[3]             3ms              3ms             6ms
average waiting time is:3.000000 ms
average turn around time is:14.000000 ms
through put:11.000000 ms*/