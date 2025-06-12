#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

// Function to convert a character to Morse code
string charToMorse(char c) {
    // Morse code mapping
    unordered_map<char, string> morseCode = {
        {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."},
        {'E', "."}, {'F', "..-."}, {'G', "--."}, {'H', "...."},
        {'I', ".."}, {'J', ".---"}, {'K', "-.-"}, {'L', ".-.."},
        {'M', "--"}, {'N', "-."}, {'O', "---"}, {'P', ".--."},
        {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
        {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"},
        {'Y', "-.--"}, {'Z', "--.."},
        {'0', "-----"}, {'1', ".----"}, {'2', "..---"}, {'3', "...--"},
        {'4', "....-"}, {'5', "....."}, {'6', "-...."}, {'7', "--..."},
        {'8', "---.."}, {'9', "----."},
        {' ', "/"} // Use '/' to represent space
    };

    // Convert to uppercase to match keys in the map
    c = toupper(c);
    return morseCode[c];
}

int main() {
    string message;
    
    cout << "Enter a message to convert to Morse code: ";
    getline(cin, message); // Get the entire line as input

    cout << "Morse Code Translation: ";
    for (char c : message) {
        cout << charToMorse(c) << " ";
    }
    cout << endl;

    return 0;
}
