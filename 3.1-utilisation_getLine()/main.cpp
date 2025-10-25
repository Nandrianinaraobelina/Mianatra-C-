#include <iostream>
#include <string>
//using namespace std;

int main()
{
    std::cout <<"quel age avez_vous?"  << std::endl;
    int ageUtilisateur (0);
    std::cin >> ageUtilisateur;

    std::cin.ignore();

    std::cout << "quel est votre nom? \n ";
    std::string nomUtilisateur("");
    getline(std::cin, nomUtilisateur);


    std::cout <<"je m appelle: " <<nomUtilisateur << " et j ai : "<<ageUtilisateur << "ans"<<std::endl;



    return 0;
}
