#include<unistd.h>
main(){
char *args[]={"/bin/cal","-s","-j",(char *)0};
execv("/bin/cal",args);
}

