#include <time.h>
#include <sys/stat.h>
#include <stdio.h>
#include<unistd.h>
void main(){
struct stat status;
    FILE *fp;
stat("reader.c",&status);
if (status.st_mode& S_IREAD)
printf("You have read permission.\n");
if (status.st_mode& S_IWRITE)
printf("You have write permission.\n");
}
/*Input and Output:
You have read permission.
You have write permission.*/

