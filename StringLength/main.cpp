#include <iostream>
using namespace std;

int main() {
    string str;

    cout << "String:";
    cin>>str;


    int length = 0;

    // Iterate over each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }

    cout << "String Length = " << length;



    return 0;
}
