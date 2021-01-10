#include<iostream>

int main()
{
    std::cout << "Hello World!\n";
    std::cout << "You are a secret agent breaking into a secure server room";
    std::cout << std::endl;
    std::cout << "You need to enter the correct codes to continue..." << std::endl;
    
    //Declareing 3 codes
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    int CodeSum =  CodeA + CodeB + CodeC;

    int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the codes : " << std::endl;
    std::cout << "+ The codes add up to : " << CodeSum << std::endl;
    std::cout << "+ The codes multiply to give : " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;

    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    std::cout << "You entered : " << GuessA << "  " << GuessB <<"  " << GuessC << std::endl;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // std::cout << "Your Guess Sum is : " << GuessSum << std::endl;
    // std::cout << "Your Guess Product is : " << GuessProduct << std::endl;

    if(GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "You Win!";
    }
    else
    {
        std::cout << "You Lose!";
    }
    
    return 0;
}