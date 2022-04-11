#include"header.h"
void main()
{
if(fork()==0)
{
printf("in child pid=%d ppid=%d\n", getpid,getppid());
sleep(10);
printf("in child pid=%d ppid=%d\n",getpid(),getppid());
}
else
 sleep(6);
}

