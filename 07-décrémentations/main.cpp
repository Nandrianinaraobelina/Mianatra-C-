#include <iostream>

using namespace std;

int main()
{
        //post-decrementations:

    int nombre(2);
    nombre--;
    cout << "post-decrementations: " <<  nombre<< endl;

    //----------------------------------------------
    cout << "-----------------------------------\n";

    //pre-decrementation:

    int nombres(2);
    --nombres;
    cout << "pre-decrementations: " << nombres<< endl;

    //affectation de cette decrementation
    cout << "-----------------------------------\n";

    //post-decrementations:

    int a(4),b(5);
    b = a--;
    cout << "post-decrementations de b: " <<  b<< endl;

    //pre-incrimentation:

    cout << "-----------------------------------\n";

    int c(11),d(10);
    c = --d;
    cout << "pre-decrementations de c: " <<  c<< endl;
    return 0;
}
