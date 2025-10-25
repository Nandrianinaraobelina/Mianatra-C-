#include <iostream>
#include <math.h>

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




    return 0;
}
