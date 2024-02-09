Exercice 1

Voir fichier cp-sys.c

Question 

1. Dans : man 2 open , soit la page open(2)
2. Dans : man 2 chmod , soit la page chmod(2)
3. L'appel a open retournera -1
4. les permissions par défaut seront utilisées

Exercice 2

Voir fichier cp_std.c

Question 

1. Dans : man 3 fopen , soit la page fopen(3)
2. Un nouveau fichier sera crees
3. La constante EOF est utilisée pour indiquer la fin de fichier (End Of File) 

Exercice 3

   Entre autre le temps d'execution de cp_std est beaucoup plus longue que celle de cp_sys

   Voir cp_sys.c

Question

1.  | Temps `cp_std` (ms) |
    |:----------------:|
    | 0,239s |

    |Taille du buffer (octets) | Temps `cp_sys` (ms) |
    |:----------------:|:--------------:|
    |  1               |   1m30,207s    |
    |  8               |   0m10,877s    |
    |  16              |    0m5,637s    |
    |  256             |    0m0,408s    |
    |  512             |    0m0,206s    |
    |  1024            |    0m0,117s    |
    |  2048            |    0m0,077s    |
    |  4096            |    0m0,052s    |
    |  8192            |    0m0,045s    |

2.

