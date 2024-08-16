#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, char *argv[]) {
    printf("Hello World (pid:%d)\n", (int) getpid());
    int rc = fork();
    if (rc < 0) { //Fork Failed; exit
        fprintf(stderr, "Fork Failed\n");
        exit(1);
    } else if (rc == 0) { //Child Process
        sleep(10); //child sleep for 1 sec. = dies before parent
        printf("Hello, I am child (pid:%d)\n", (int) getpid());
    } else { //Parent Process
        sleep(5); //child sleep for 2 sec. = dies after child
        printf("Hello, I am parent of %d (pid:%d)\n", rc, (int) getpid());
    }
}