#include<iostream>
#include<ctime>
using namespace std;
void PrintIntroduction(int Difficulty)
{
    cout << "\n\nYou are a secret agent breaking into a level  " << Difficulty << " secure server room...\n";
    std::cout << "You need to enter the correct codes to continue...\n\n" ;
}
bool PlayGame( int LevelDifficulty)
{
  
    PrintIntroduction(LevelDifficulty);
    //Declareing 3 codes
    const int CodeA = rand() % LevelDifficulty + LevelDifficulty ;
    const int CodeB = rand() % LevelDifficulty + LevelDifficulty ;
    const int CodeC = rand() % LevelDifficulty + LevelDifficulty ;

    int CodeSum =  CodeA + CodeB + CodeC;

    int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the codes : " ;
    std::cout << "\n+ The codes add up to : " << CodeSum ;
    std::cout << "\n+ The codes multiply to give : " << CodeProduct  << "\n" ;
    // std::cout << "\n";
    int GuessA, GuessB, GuessC;

    std::cin >> GuessA >> GuessB >> GuessC;

    std::cout << "You entered : " << GuessA << "  " << GuessB <<"  " << GuessC << "\n";

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // std::cout << "Your Guess Sum is : " << GuessSum << std::endl;
    // std::cout << "Your Guess Product is : " << GuessProduct << std::endl;

    if(GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\n***Well done agent! You have extracted a file! Keep going!***";
        return true;
    }
    else
    {
        std::cout << "\n***You entered the wrong code! Careful agetn! Try again!***\n";
        return false;
    }

}

int main()
{
    srand(time(NULL));

    int LevelDifficulty = 1;
    const int MaxDifficulty = 5;
    
    //Loop game unitl all levels are completed
    while (LevelDifficulty <= MaxDifficulty)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();   //Clears any erros
        std::cin.ignore();  //Discards the buffer

        if (bLevelComplete)
        {
            //Code to increase the difficulty level
            ++LevelDifficulty;
        }
    }

    std::cout << "\n***Great work agent! You got all the files! Now get out of there!***\n";
    return 0;
}