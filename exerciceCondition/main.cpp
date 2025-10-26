#include <iostream>

using namespace std;

int main()
{   /*
    Exercice 1 : Nombre positif ou négatif
    Écris un programme qui demande un nombre à l’utilisateur et affiche :
    “Positif” si le nombre > 0
    “Négatif” si le nombre < 0
    “Zéro” si le nombre = 0
    */

    cout << "TESTE SI POSITIVE OU NEGATIVE \n";
    cout << "------------------------------\n";
    int nombre(0);
    cout << "Veuillez entrer un nombre: \n" << endl;
    cin >> nombre;
    if(nombre > 0){
        cout << "Le nombre est positifs! \n";
    }
    else if(nombre < 0){
        cout << "le nombre est negative..\n";
    }
    else if(nombre == 0){
        cout << "le nombre est NUL \n";
    }
    else{
        cout << "Veuillez entrer un chiffre mais pas lettre\n";
    }
    return 0;
}
