#include <iostream>

using namespace std;

int main()
{
    //------------------------------------------------------

    int a(10),b(5),resultat(0);
    resultat = a + b;
    cout << "la resultats a + b est: " << resultat << endl;
    resultat = a * b;
    cout << "la resultats  a * b est: " << resultat << endl;
    resultat = a / b;
    cout << "la resultats  a / b est: " << resultat << endl;
    resultat = a % b;
    cout << "la resultats   a % b est: " << resultat << endl;
    resultat = a - b;
    cout << "la resultats  a - b est: " << resultat << endl;


    //------------------------------------------------------

    int e(2), f(4), g(5), h; //Quelques variables
    h = ((e+f) * g ) - g; //Un calcul compliqué !

    cout <<"resultats est: " <<h<<endl;
    //------------------------------------------------------


    cout << "entrer une valeur:  ==> " << endl;
    int nombre1(0),nombre2(0),resultats(0);
    cin >> nombre1 << endl;
    cin >> nombre2 << endl;
    resultats = nombre1 + nombre2;
    cout <<"La solutions est: " <<resultats <<endl;


    return 0;
}
