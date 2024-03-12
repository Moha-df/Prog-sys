#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

    int n = atoi(argv[1]);
    int i;

    for (i = 0; i < n; i++) {

        pid_t pid = fork();

        if (pid < 0) {
            perror("fork");
            return 1;
        } else if (pid == 0) {
            printf("Fils %d avec PID %d cree\n", i, getpid());
            return i;
        }
    }
    
    // Parent proc
    //sleep(0.01);
    int status;
    pid_t fils_pid;
    while ((fils_pid = wait(&status)) > 0) {
        printf("Fils avec PID %d exit avec statut %d\n", fils_pid, WEXITSTATUS(status));
    }

    return 0;
}
