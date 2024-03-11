## Exercice 1 

Voir fork1.c

1. Avec waitpid avant les print du pere.
2. En enlevant waitpid wexitstatus on laisse le processus fils en zombie.
3. On peut terminer le processus pere directement avec exit(0) apres ces print cela laissera le processus fils orphelin.

## Exercice 2