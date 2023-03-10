// C program to illustrate
// dup2 function in atomic operation

#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>

int main()
{
        int file_desc = open("iwin.txt",O_WRONLY | O_APPEND);

        // here the newfd is the file descriptor of stdout (i.e. 1)
        dup2(file_desc, 1) ;

        // All the printf statements will be written in the file
        // "iwin.txt"
        printf("I will be printed in the file iwin.txt\n");

return 0;
}