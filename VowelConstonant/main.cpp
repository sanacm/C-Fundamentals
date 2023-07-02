#include <iostream>
using namespace std;

int main() {

    char character;
    bool isLowercaseVowel, isUppercaseVowel;


    cout << "Hello, World!\nCheck Vowel or a Consonant\nEnter an alphabet: ";
    cin>>character;

    // evaluates to 1 (true) if c is a lowercase vowel
    isLowercaseVowel = (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u');

    // evaluates to 1 (true) if c is an uppercase vowel
    isUppercaseVowel = (character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U');

    if(!isalpha(character)){
        printf("Error! Non-alphabetic character.");

    }
    else if (isLowercaseVowel || isUppercaseVowel){

        cout << character << " is a vowel.";

    }

    else{
        cout << character << " is a consonant.";

    }



















    return 0;
}
