#include"header.h"
void main()
{
if(fork()==0)
{
printf("in child pid=%d ppid=%d", getpid,getppid());
sleep(8);
printf("in child pid=%d ppid=%d",getpid(),getppid());
}
else
    while(1);
}
