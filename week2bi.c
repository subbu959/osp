//WRITER
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
char *phrase ="Stuff this in your pipe and smoke it";
int main()
{ 	int fd1; 
fd1=open("mypipe",O_WRONLY);
write(fd1,phrase,strlen(phrase)+1);
close (fd1);
}
//READER
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
int main ()
{
int fd1;
char buf [100];
fd1=open("mypipe",O_RDONLY);
read(fd1,buf,100);
printf("%s\n",buf);
close(fd1);
}	
/*Input and Output:
�hF*/

