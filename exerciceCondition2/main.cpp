#include <iostream>

using namespace std;

int main()
{
    /*
    Exercice 2 : �ge et autorisation
    Demande l��ge d�un utilisateur et affiche :
    �Mineur� si < 18 ans
    �Majeur� si >= 18 ans
    ��ge invalide� si l��ge est < 0
    */
    cout << "Age et autorisation\n" << endl;

    int ageUtilisateur;
    cout << "Veuillez entrer votre age: ";
    cin >> ageUtilisateur;

    if (ageUtilisateur < 0)
    {
        cout << "Age invalide ! L�age ne peut pas etre negatif.\n";
    }
    else if (ageUtilisateur < 18)
    {
        cout << "Cette personne est MINEURE (< 18 ans).\n";
    }
    else
    {
        cout << "Cette personne est MAJEURE (>= 18 ans).\n";
    }

    cout << "FIN DU PROGRAMME\n";
    return 0;
}
