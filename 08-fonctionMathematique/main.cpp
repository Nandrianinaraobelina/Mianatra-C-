#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //RACINE CARRE: mampiasa ny atao hoe ==> sqrt()
    double nombre;
    cout <<"Entrer la valeur: ";
    cin >> nombre;
    double resultats = sqrt(nombre);
    //---------------------------------------------------------------------
    cout << "La racine de nombre " <<nombre<< "est: "<< resultats << endl;

    //utilisation sin,cos,tan
    double sinus;
    cout << "Entrer la valeur de sinus: \n";
    cin >> sinus;
    double solution = sin(sinus);
    cout << "sinus de " <<sinus<< " est: "<< solution <<"\n";

     double cosinus;
    cout << "Entrer la valeur de cosinus : \n";
    cin >> cosinus;
    double solutions = cos(cosinus);
    cout << "sinus de " <<cosinus<< " est: "<< solutions <<"\n";

     double tangente;
    cout << "Entrer la valeur tangente : \n";
    cin >> tangente;
    double solutionn = tan(tangente);
    cout << "sinus de " <<tangente << " est: \n"<< solutionn;
    return 0;
}
