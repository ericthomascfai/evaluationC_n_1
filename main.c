#include <stdio.h>

int main() {

/***************************************Exercice n°1********************************/
int choix=0;
    int age=0;
while(choix!=5) {
    printf("Veuillez choisir un ingrédient\n");
    printf("1-Tomate\n");
    printf("2-Fromage\n");
    printf("3-Jambon\n");
    printf("4-Champignon\n");
    printf("5-Fin\n");
    scanf("%d",&choix);
    switch (choix) {
        case 1:
            printf("Vous avez ajouté l'ingrédient tomate\n");
            break;
        case 2:
            printf("Vous avez ajouté l'ingrédient fromage\n");
            break;
        case 3:
            printf("Vous avez ajouté l'ingrédient jambon\n");
            break;
        case 4:
            printf("Vous avez ajouté l'ingrédient champignon\n");
            break;

    }
}
/************************************Exercice n°2*************************************/

while(age>=0) {
    printf("Veuillez saisir l'age du spectateur\n");
    scanf("%d", &age);
    if (age>=0&&age < 3) {
        printf("Billet gratuit\n");
    } else if (age >= 3 && age <= 12) {
        printf("Cout du billet 10 euros\n");
    } else if (age > 12) {
        printf("Cout du billet 15 euros \n");
    }
    }
/*********************************Exercice n°3*****************************************/
    int choixv=0;
    while(1) {
        printf("Veuillez choisir un ingrédient\n");
        printf("1-Tomate\n");
        printf("2-Fromage\n");
        printf("3-Jambon\n");
        printf("4-Champignon\n");
        printf("5-Fin\n");
        scanf("%d",&choixv);
        switch (choixv) {
            case 1:
                printf("Vous avez ajouté l'ingrédient tomate\n");
                break;
            case 2:
                printf("Vous avez ajouté l'ingrédient fromage\n");
                break;
            case 3:
                printf("Vous avez ajouté l'ingrédient jambon\n");
                break;
            case 4:
                printf("Vous avez ajouté l'ingrédient champignon\n");
                break;



        }
        if(choixv==5)
        break;
    }
    int agev=0;
    while(1) {
        printf("Veuillez saisir l'age du spectateur\n");
        scanf("%d", &agev);
        if (agev>=0&&agev < 3) {
            printf("Billet gratuit\n");
        } else if (agev >= 3 && agev <= 12) {
            printf("Cout du billet 10 euros\n");
        } else if (agev > 12) {
            printf("Cout du billet 15 euros \n");
        }
        else
            break;
    }
    /****************************Exercice n°4*****************************************/
    enum alien_colors {green=15,yellow=5,red=1};
    int nbpoints;
    printf("Veuillez saisir le nombre points\n");
    scanf("%d",&nbpoints);
    if(nbpoints==green)
    {
        printf("Vous avez abattu un alien vert\n");
    } else
    if(nbpoints==yellow)
    {
        printf("Vous avez abattu un alien jaune\n");
    }
    else
    if(nbpoints==red)
    {
        printf("Vous avez abattu un alien rouge\n");
    }


    /************************Exercice n°5******************************************/
    for(int i=0;i<10;i++)
    {
        if(i==3||i==5)
        {
            continue;
        }
        printf("%d\n",i);
    }


}


