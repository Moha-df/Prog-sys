## Exercice 1 

Voir fork1.c

1. Avec waitpid avant les print du pere.
2. En enlevant waitpid wexitstatus on laisse le processus fils en zombie.
3. On peut terminer le processus pere directement avec exit(0) apres ces print cela laissera le processus fils orphelin.

## Exercice 2

Voir fork2.c

1. L'ordre d'affichage des codes des processus fils dans le père sera aléatoire
2. Cela s'explique par le fait que l'ordonnancement des processus est géré par le système d'exploitation, et il n'y a aucune garantie sur l'ordre dans lequel les processus se terminent

## Exercice 3

Voir run.c

1. execvp(argv[1], argv + 1)

2. le processus fils renvoie le code 1 (=`EXIT_FAILURE`)  si il y a un echec de l'exécution de la commande spécifiée
 ou quelle est non trouvée ou encore quil y a une erreur de segmentation / violation de mémoire