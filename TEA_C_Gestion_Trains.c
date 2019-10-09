#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// cd "C:\Users\Utiisateur\Documents\Centrale Lille\#Electifs d'intégration\Système de Transport Autonome (STA)\Travail"

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
   printf("0 - Affichage du RBC");
    return 0;
}