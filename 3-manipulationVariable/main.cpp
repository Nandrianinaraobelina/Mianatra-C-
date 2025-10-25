#include <iostream>
#include <string>

//using namespace std;  NDAO TSY AMPESAINA ITY HOE FA ATAO ENY AMBANY

int main()
{
    std::cout <<"quel age avez_vous? \n";
    int ageUtilisateur(0);
    std::cin >> ageUtilisateur;
    std::cout <<"j ai: " << ageUtilisateur <<" ans" << std::endl;

    //-----------------------------------------------

    std::cout <<"\n quel est votre nom? \n";
    std::string nomUtilisateur("");
    std::cin >> nomUtilisateur;
    std::cout <<"Je m appelle: " << nomUtilisateur << std::endl;

    //-----------------------------------------------

    return 0;
}
