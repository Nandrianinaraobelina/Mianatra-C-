#include <iostream>

using namespace std;

int main()
{
    //post-incrimentations:

    int nombre(2);
    nombre++;
    cout << "post-incrimentations: " <<  nombre<< endl;

    //----------------------------------------------
    cout << "-----------------------------------\n";

    //pre-incrimentation:

    int nombres(2);
    ++nombres;
    cout << "pre-incrimentations: " << nombres<< endl;

    //affectation de cette incrimentation
    cout << "-----------------------------------\n";

    //post-incrimentations:

    int a(4),b(5);
    b = a++;
    cout << "pre-incrimentations de b: " <<  b<< endl;

    //pre-incrimentation:

    cout << "-----------------------------------\n";

    int c(11),d(10);
    c = ++d;
    cout << "pre-incrimentations de b: " <<  c<< endl;


    return 0;
}
