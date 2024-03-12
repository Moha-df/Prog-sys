#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {

    pid_t pid = fork();

    if (pid < 0) {
        perror("fork");
        return 1;
    } 
    else if (pid == 0) {
        if (execvp(argv[0], argv) == -1) {
            perror("execvp");
            return 2;
        }
    }
    else {
        int status;
        waitpid(pid, &status, 0);

        if (WIFEXITED(status)) {
            printf("Mon fils s'est terminé avec le code : %d\n", WEXITSTATUS(status));
        }
    }

    return 0;
}
