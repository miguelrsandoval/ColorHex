#include <iostream>

using std::string;
using std::cout;
using std::getline;
using std::endl;
using std::cin;

const int RGB_HEX_LENGTH = 7;

int main(){
    string input;
    do{
        cout << "Enter a color in hex format (#RRGGBB):";
        getline(cin, input);

        if( input.size() != RGB_HEX_LENGTH )
            cout << "Wrong size.\n";
        if( input[0] != '#')
            cout << "Needs to start with '#'\n";
        for(int i = 1; i <= RGB_HEX_LENGTH; i++){
            if(!isdigit(input[i]) && !(input[i] >= 65 && input[i] <= 70) && !(input[i] >= 97 && input[i] <= 102) )
                cout << "Needs to contain digit or letter a-f (upper or lower)";
        }
    }while( input.size() != RGB_HEX_LENGTH );

    cout << "Your hex color is: " << input << endl;

    return 0;
}