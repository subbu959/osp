#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(){
fork();
fork();
printf("Hello World!\n");
return 0;
}
/*Input and Output:
Hello World!
Hello World!
Hello World!
Hello World!*/

