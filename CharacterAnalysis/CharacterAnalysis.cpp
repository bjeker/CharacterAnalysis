// Ryan Bieker, CS 3060 001, Chapter 10 Programming Challenges, due 4/19/2022, 
//read stext file and counts uppercase, lowercase, and digits in the file

#include <iostream>
#include <fstream>

using namespace std;

void analysis(ifstream& text);

int main()
{
    ifstream text("text.txt");

    analysis(text);

    text.close();
}

void analysis(ifstream& text)
{
    char character;
    int upper = 0;
    int lower = 0;
    int digits = 0;

    //check for uppercase, lowercase, and digits in text file
    while (text)
    {
        text.get(character);

        if (isupper(character))
        {
            upper++;
        }
        else if (islower(character))
        {
            lower++;
        }
        else if (isdigit(character))
        {
            digits++;
        }
    }

    //print out numbers
    cout << "Uppercase characters: " << upper << endl;
    cout << "Lowercase characters: " << lower << endl;
    cout << "Digits: " << digits << endl;
}
