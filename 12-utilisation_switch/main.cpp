#include <iostream>

using namespace std;

int main()
{
    int animaux(0);
    cout << "veuillez entrer ici le nombre d'animaux\n";
    cin >> animaux;
    switch(animaux)
    {
    case 0:
        cout << "O animal\n" <<endl;
        break;
    case 1:

        cout << "Il y a une animal\n"<< endl;
        break;
    case 2:

        cout << "Il y a deux animaux\n" << endl;
        break;

    default:
        cout <<"entrer valeur positive";
    }

    return 0;
}
