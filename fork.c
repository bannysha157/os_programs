#include<stdio.h>
#include<unistd.h>
int main()
{
int n=10;
if(fork()==0)
printf("hi");
else
printf("bye");
}

