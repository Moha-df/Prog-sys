#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {

    pid_t pid;
    pid = fork();

    if (pid < 0) {
        fprintf(stderr, "Erreur lors du fork\n");
        return 1;
    } else if (pid == 0) { // Code executer dans le processus fils
        printf("Je suis le processus fils. Mon PID est %d. Le PID de mon père est %d.\n", getpid(), getppid());
        return getpid() % 10;
    } else {               // Code executer dans le processus parents
        int status;
        waitpid(pid, &status, 0); // On att que le fils ce termine
        printf("Je suis le processus père. Mon PID est %d. Le PID de mon fils est %d.\n", getpid(), pid);
        printf("Le code de retour du fils est : %d\n", WEXITSTATUS(status)); // Avec la macro wexitstatus on recupere la valeur de retour du proc fils
    }

    return 0;
}