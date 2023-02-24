#include <stdio.h>
#include <unistd.h>

int i = 0x12345678;

int main(void)
{
    int pid = fork();
    if(pid == 0)
    	printf("I am child process.The logical/virtical address of i is 0x%08x", &i);
    else
    	printf("I am father process.The logical/virtical address of i is 0x%08x", &i);        
    fflush(stdout);
    while(i);
    if(pid == 0)
        printf("The child process exits!");
    else
        printf("The father process exits!");
    return 0;
} 
