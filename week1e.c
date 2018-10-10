#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>
int main(){
if(fork()==0)
printf("Hello from child\n");
else{
printf("hello from parent\n");
wait(NULL);
printf("child is terminated\n");
}
printf("bye\n");
return 0;
}
/*Input and Output:
hello from parent
Hello from child
bye
child is terminated
bye*/
