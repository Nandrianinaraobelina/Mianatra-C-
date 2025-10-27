#include <iostream>

int main()
{
    std::cout << "\n Utilisation ET(&&) OU(||) NON(!) \n" << std::endl;
    
    //utilisation ET na &&
    int nombre(0);
    bool adulte(true);
    int numberKild(0);
    int numbreYoung(0);
    int numberKildVaovao(0);
    int numbreYoungVaovao(0);

    std::cout << "\n ----------------------------------------- \n" << std::endl;
    std::cout << "\n FAMPIASANA ET sy BOOLEAN: \n" << std::endl;
    std::cout << "\n ----------------------------------------- \n" << std::endl;

    std::cout << "\n veuillez entrer un nombre: \n" << std::endl;
    std::cin >> nombre;
    if (adulte == true and nombre >= 2)
    {
        std::cout << "ok...." << std::endl;
    }
    else if (nombre < 2)
    {
        std::cout << "pas ok.... " << std::endl;
    }

    std::cout << "\n ----------------------------------------- \n" << std::endl;
    std::cout << "\n FAMPIASANA ILAY || : \n" << std::endl;
    std::cout << "\n ----------------------------------------- \n" << std::endl;

    //Fampiasana ailay || no eto
    std::cout << "\n veuillez entrer un nombre KILD et YOUNGS: \n" << std::endl;
    std::cin >> numberKild;
    std::cin >> numbreYoung;
    if (numberKild == 4 || numbreYoung == 3)
    {
        std::cout << " \n c'est VRAI \n" << std::endl;
    }
    else
    {
        std::cout << "\n verifier bien ... \n" << std::endl;
    }
    std::cout << "\n ----------------------------------------- \n" << std::endl;
    std::cout << "\n FAMPIASANA NA / AND / ET: \n" << std::endl;
    std::cout << "\n ----------------------------------------- \n" << std::endl;
    //fampiasana ilay non na !
    
    std::cout << "\n veuillez entrer un nombre KILD et YOUNGS: \n" << std::endl;
    std::cin >> numberKildVaovao;
    std::cin >> numbreYoungVaovao;
    if (numberKildVaovao == 4 || numbreYoungVaovao == 3)
    {
        std::cout << " \n c'est VRAI \n" << std::endl;
    }
    else if(!numberKildVaovao == 0 || !numbreYoungVaovao == 0)
    {
        std::cout << "\n verifier bien ooo... \n" << std::endl;
    }
    return 0;
}
