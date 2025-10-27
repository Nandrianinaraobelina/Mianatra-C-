#include <iostream>

int main()
{
    std::cout << "\nBOUCLE WHILE\n" << std::endl;
    int age(-1);
    while (age < 0 || age == 0)
    {
        std::cout <<"\nVeuillez entrer votre age:\n"<<std::endl;
        std::cin >>age;
    }

    std::cout <<"\n ok...Votre age est bien: "<<age<<"ans" << std::endl;
    std::cout <<"\n" << std::endl;
    
    return 0;
}
