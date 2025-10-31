#include <iostream>
using namespace std;


int ajouterDeux(int donneRecu)
   {
     int valeur(donneRecu + 2);
    return valeur;
   }

int main ()
{
    int a(2),b(2);

    cout << "valeur de a est " << a << endl;
    cout << "valeur de b est " << b << endl;
    
    b = ajouterDeux(a);

    
    cout << "valeur de a est " << a << endl;
    cout << "valeur de b est " << b << endl;
}



// #include <iostream>
// #include <cmath>

// using namespace std;

// int addition(int a ,int b)
// {
//     int solution(a+b);
//     return solution;
// }
// int multiplication(int a,int b,int c)
// {
//     int resultats(a*b*c);
//     return resultats;
// }
// int puissance(int a,int b)
// {
//     int resultPuissance(pow(a,b));
//     return resultPuissance;
// }
// int main()
// {
//     int a(0),b(0),c(0);
//     cout << "CALCUL ADDITION ET MULTPLICATION: \n" << endl;
//     cout << "entrer la valeur de A: " << endl;
//     cin >> a;
//     cout << "entrer la valeur de B: " << endl;
//     cin >> b;
//     cout << "entrer la valeur de C: " << endl;
//     cin >> c;
    
//     int resultatsAddition = addition(a,b);
//     int resultatsMultiplication = multiplication(a,b,c);
//     int resultatsPuissance = puissance(a,b);
    
//     cout << "addition de a + b = : " << resultatsAddition<< endl;
//     cout << "multiplication de a  * b * c =  " << resultatsMultiplication<< endl;
//     cout << "puissance de  a ^ b  =  " << resultatsPuissance<< endl;
// }