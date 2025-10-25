#include <iostream>
#include <string>

using namespace std;

int main()
{
    int number(150);
    int age = 23;
    double pi(3.14);
    char lettre ('A');
    string anarana("Nandrianina");
    //string nom("hery");

    cout<< " affichage type entier: ";
    cout<<number;
    cout<<"\n affichage type bol: ";
    cout<<pi;
    cout<<"\n affichage type char: ";
    cout<<lettre;
    cout<<"\n affichage type string: ";
    cout<<anarana;
    cout<<"\n \n";

    cout<<"Mon nom est: " <<anarana <<" et mon QI est " <<number<<endl;

    cout<<"\n \n";


    int& nom(age);
    cout<<"mon nom est: " << " " <<nom << " et j ai: "  << " " <<age<<endl;


    return 0;
}
