#include<stdio.h>
#include<sys/wait.h>
int main(){
int p1,p2;
p1=fork();
if(p1==-1){
printf("Error");
return 0;
}
else{
printf("parent is %d\n",getpid());
printf("child is %d\n",getpid());
}
p2=fork();
printf("parent is %d\n",getpid());
printf("child is %d\n",getpid());
}
/*Input and Output:
parent is 31382
child is 31382
parent is 31382
child is 31382
parent is 31384
child is 31384
parent is 31383
child is 31383
parent is 31383
child is 31383
parent is 31385
child is 31385*/

