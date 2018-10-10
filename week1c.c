#include<unistd.h>
main(){
execl("/bin/ls","/bin/ls","-r","-t","-l",(char *)0);
}
/*Input and Output:
total 112
-rw-r--r--. 1 17121a05h2 domain users  182 Jul  5 14:43 \
-rw-r--r--. 1 17121a05h2 domain users    0 Jul  5 15:16 a
-rw-r--r--. 1 17121a05h2 domain users  275 Jul  5 16:05 1.cpp
-rw-r--r--. 1 17121a05h2 domain users 2933 Jul 12 16:08 double.c
-rw-r--r--. 1 17121a05h2 domain users  283 Jul 13 12:47 1sss.py
-rw-r--r--. 1 17121a05h2 domain users  209 Jul 15 14:41 vi
-rw-r--r--. 1 17121a05h2 domain users  101 Jul 15 15:34 os4.c
-rw-r--r--. 1 17121a05h2 domain users  227 Jul 15 15:59 0s5.c
-rw-r--r--. 1 17121a05h2 domain users  943 Jul 18 14:41 week2os.c
-rw-r--r--. 1 17121a05h2 domain users 1267 Jul 18 16:22 week2.c
-rw-r--r--. 1 17121a05h2 domain users  312 Jul 19 16:41 fi.c
-rw-r--r--. 1 17121a05h2 domain users    0 Jul 26 16:35 1b.py
-rw-r--r--. 1 17121a05h2 domain users  893 Jul 31 15:38 queuqlinked.c
-rw-r--r--. 1 17121a05h2 domain users  716 Jul 31 16:18 stack.c
-rw-r--r--. 1 17121a05h2 domain users  781 Jul 31 16:25 queue.c
-rw-r--r--. 1 17121a05h2 domain users  916 Jul 31 16:36 singlestack.c
-rw-r--r--. 1 17121a05h2 domain users  695 Jul 31 16:37 week5a.c
-rw-r--r--. 1 17121a05h2 domain users 2176 Aug  1 15:56 week2c.c
-rw-r--r--. 1 17121a05h2 domain users 1374 Aug  1 16:23 tem.c
-rw-r--r--. 1 17121a05h2 domain users 1594 Aug  1 16:28 week2b.c
drwxr-xr-x. 3 17121a05h2 domain users 4096 Aug  1 16:31 d
-rw-r--r--. 1 17121a05h2 domain users  336 Aug  2 14:37 1.c
-rw-r--r--. 1 17121a05h2 domain users   70 Aug  2 15:57 2.c
-rw-r--r--. 1 17121a05h2 domain users 2793 Aug  3 09:38 doubleci.c
-rw-r--r--. 1 17121a05h2 domain users 2332 Aug  3 09:49 single.c
-rw-r--r--. 1 17121a05h2 domain users  125 Aug  3 09:50 os1.c
-rw-r--r--. 1 17121a05h2 domain users  273 Aug  3 09:52 os2.c
-rw-r--r--. 1 17121a05h2 domain users   82 Aug  3 09:53 os3.c
-rwxr-xr-x. 1 17121a05h2 domain users 4758 Aug  3 09:53 a.out*/