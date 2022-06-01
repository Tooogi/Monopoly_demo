#include <algorithm>
#include <iostream>
#include <cstdlib>

int main() {

   std::string fields[] = {"Go", "Old Kent Road", "Whitechapel Road", "Kingscross Station", "Coventry Street", "Piccadilly", "Bond Street", "Oxford Street", "Myfair", "Fleet Street", "Trafalgar Square", "Strand", "Bow Street", "Whitehall", "Pall Mall", "Euston Road"};

    for(std::string spaces : fields)

    std::cout << spaces << std::endl;


    int roll;
    int sides = 6;

    srand(time(NULL));
    roll = rand() % sides + 1;

    std::cout << "Dice: " << roll << std::endl;

    return 0;
}