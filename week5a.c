#include<stdio.h>
void main(){
int f,c,a[100],m[100],av[10],n[100],i,j,flag=0,p[20],k,t,l,r,i1;
printf("ENTER NO.OF PROCESSES:");
scanf("%d",&f);
printf("ENTER NO.OF RESOURCES:");
scanf("%d",&r);
t=f*r;
printf("Enter resources %d in pair\n",r);
for(i=0;i<t;i++){
printf("P[%d]:",i/3);
scanf("%d",&a[i]);
}
printf("Enter max allocation %d in pair\n",r);
for(i=0;i<t;i++){
printf("P[%d]:",i/3);
scanf("%d",&m[i]);
}
printf("Enter avaliable resourses:\n");
for(i=0;i<r;i++){
scanf("%d",&av[i]);
}
for(i=0;i<t;i++){
n[i]=m[i]-a[i];
}
j=0;
for(k=0;k<t;k=k+r){
for(i=0;i<t;i=i+r){
c=0;
for(l=0;l<r;l++){
if(n[i+l]>av[l]){
c=1;
}
}
if(c==0&&a[i]!=-1){
for(l=0;l<r;l++){
av[l]+=a[i+l];
}
flag++;
a[i]=-1;
printf("P[%d] has been executed\n",i/r);
p[j]=i/r;
j++;
}
}
}
if(flag<f){
printf("Dead lock occurs");
}
else{
printf("NO Dead lock occurs\n");
printf("sequence is:");
for(i=0;i<f;i++){
printf("P[%d],",p[i]);
}
printf("\nAvaliable resources:");
for(i=0;i<3;i++){
printf("%d,",av[i]);
}
printf("\n");
}
}
/*INPUT/OUTPUT:
 * ENTER NO.OF PROCESSES:5
 * ENTER NO.OF RESOURCES:3
 * Enter resources 3 in pair
 * P[0]:0
 * P[0]:1
 * P[0]:0
 * P[1]:2
 * P[1]:0
 * P[1]:0
 * P[2]:3
 * P[2]:0
 * P[2]:2
 * P[3]:2
 * P[3]:1
 * P[3]:1
 * P[4]:0
 * P[4]:0
 * P[4]:2
 * Enter max allocation 3 in pair
 * P[0]:7
 * P[0]:5
 * P[0]:2
 * P[1]:3
 * P[1]:2
 * P[1]:2
 * P[2]:9
 * P[2]:0
 * P[2]:2
 * P[3]:2
 * P[3]:2
 * P[3]:2
 * P[4]:4
 * P[4]:3
 * P[4]:3
 * Enter avaliable resourses:
 * 3
 * 3
 * 2
 * P[1] has been executed
 * P[3] has been executed
 * P[4] has been executed
 * P[0] has been executed
 * P[2] has been executed
 * NO Dead lock occurs
 * sequence is:P[1],P[3],P[4],P[0],P[2],
 * Avaliable resources:10,5,7,
 *
