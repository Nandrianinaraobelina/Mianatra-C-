#include <iostream>

using namespace std;

int main()
{   /*
    Exercice 1 : Nombre positif ou n�gatif
    �cris un programme qui demande un nombre � l�utilisateur et affiche :
    �Positif� si le nombre > 0
    �N�gatif� si le nombre < 0
    �Z�ro� si le nombre = 0
    */

    cout << "TESTE SI POSITIVE OU NEGATIVE \n";
    cout << "------------------------------\n";
    int nombre(0);
    cout << "Veuillez entrer un nombre: \n" << endl;
    cin >> nombre;
    if(nombre > 0){
        cout << "Le nombre est positifs! \n" << endl;
    }
    else if(nombre < 0){
        cout << "le nombre est negative..\n" << endl;
    }
    else if(nombre == 0){
        cout << "le nombre est NUL \n" << endl;
    }
    else{
        cout << "Veuillez entrer un chiffre mais pas lettre\n";
    }
    cout << "------------------------------\n";
    return 0;
}
