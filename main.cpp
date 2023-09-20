#include <iostream>

const int RGB_HEX_LENGTH = 7;

int main(){
    std::string input;
    do{
        std::cout << "Enter a color in hex format (#RRGGBB):";
        std::getline(std::cin, input);

        if( input.size() != RGB_HEX_LENGTH )
            std::cout << "Wrong size.\n";
        if( input[0] != '#')
            std::cout << "Needs to start with '#'\n";
        for(int i = 1; i <= RGB_HEX_LENGTH; i++){
            if(!isdigit(input[i]) && !(input[i] >= 65 && input[i] <= 70) && !(input[i] >= 97 && input[i] <= 102) )
                std::cout << "Needs to contain digit or letter a-f (upper or lower)";
        }
    }while( input.size() != RGB_HEX_LENGTH );

    std::cout << "Your hex color is: " << input << std::endl;

    return 0;
}