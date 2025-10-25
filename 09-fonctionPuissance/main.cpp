#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a(0),b(0);

    cout <<"calcul puissance avec pow(): \n\n";

    cout <<"-------------------------------------------------------\n\n";
    cout << "Donnez une valeur pour a : "; //On demande le premier nombre
    cin >> a;

    cout << "La valeur de b est: ";
    cin >> b;
    cout <<"-------------------------------------------------------\n\n";

    int resultats(pow(a,b));
    cout << "La resultats de a^b est: " << resultats <<"\n";

    cout <<"-------------------------------------------------------\n\n";

    return 0;
}
