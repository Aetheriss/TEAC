#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct RBC {
    int n = 100; //Définit la taille d'une ligne ici fixée à 100
    char[n][6] no_train;
    int Localisation [n];
    int EOA[n] ;
} RBC ;

// a. L’enregistrement d’un train dans le RBC,
void saveTrain(Ttrainsline * enstrains);

// b. La suppression d’un train d’un RBC,
void delTrain(Ttrainsline * enstrains);

// c. La mise à jour de la position du train,
void majTrain(Ttrainsline * enstrains, double newPos);

// d. La lecture de la fin d’autorisation de mouvement d’un train,
int readEndAuthTrain(Ttrainsline * enstrains);

// e. La mise à jour de la fin d’autorisation de mouvement d’un train.
void majEndAuthTrain(Ttrainsline * enstrains);




int main()
{
    int choixMenu;
    
    printf("1 - Ajouter un train au RBC\n");
    printf("2 - Suppresion d'un train au RBC\n");
    printf("3 - Mise à jour de la position du train\n");
    printf("4 - Lecture de la fin d'authorisation de mouvement du train\n");
    printf("5 - Mise à jour de la fin d'authorisation de mouvement du train\n");

  scanf("%d", &choixMenu);
  
  printf("\n");
  
  switch (choixMenu)
  {
    case 1:
       saveTrain(Ttrainsline * enstrains);
       break;
    case 2:
       delTrain(Ttrainsline * enstrains);
       break;
    case 3:
       majTrain(Ttrainsline * enstrains, double newPos);
       break;
    case 4:
       readEndAuthTrain(Ttrainsline * enstrains);
       break;
    default:
       printf("Vous n'avez pas rentre un nombre correct. Vous ne mangerez rien du tout !");
       break;
  }
  

    return 0;

}
