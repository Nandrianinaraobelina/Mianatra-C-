#include <iostream>

int main()
{
    std::cout << "\n\nFAMPIASANA BOUCLE WHILE (exemple COMPTER)........\n\n" << std::endl;
    int nombreCompter(1);.
    int table(2);
    int resultats;
    
    while (nombreCompter  <=  10)
    {
        std::cout <<nombreCompter<< std::endl;
        // nombreCompter = nombreCompter + 1;
        nombreCompter++;
    }
    
    std::cout << "\n\nFAMPIASANA BOUCLE FOR (exemple TABLE) \n" << std::endl;
    for (int i = 0; i < 11 ; i++)
    {
        resultats=i*table;
        std::cout <<table  << " x "<< i << " = " << resultats << std::endl;
    }
    return 0;
}
