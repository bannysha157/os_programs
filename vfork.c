#include<stdio.h>
int main()
{
int a=5,b=6,c;
c=vfork();
if(c==0) //vfork==0  //child process
{
a=a+b;
b=b-2;
printf("%d..%d\n",a,b);
exit(0); //we use exit system call in child process
}
else
{
wait(0); //we use wait system call in parent system call
printf("%d",a+b);
}
}

