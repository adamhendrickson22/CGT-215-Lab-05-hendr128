#include <iostream>
#include <string>
#include <vector>

using namespace std;

char decipher_char(char);

int main()
{
    cout << "Input text to cypher: ";

    // Get the user's input line
    string input;
    getline(cin, input);

    // For each character, decipher it and push it to the resulting vector
    string result;
    for (char c : input)
    {
        result.push_back(decipher_char(c));
    }

    // Print the resulting message
    cout << "Encoded Message: \"" << result << "\"";
}

/*
 * Helper to decipher a char according to the lab handout
 */
char decipher_char(char c)
{
    vector<char> cipher = { 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' };

    if (c >= 65 && c <= 90) // c is a capital letter
    {
        return cipher[c - 65];
    }
    else if (c >= 97 && c <= 122) // c is a lowercase letter
    {
        c -= 32; // Converts it to a capital letter
        c = cipher[c - 65]; // Sets c to the char in the cipher at slot upperCaseLetter - 65
        return c + 32; // Convert it back to lowercase
    }
    else // c is not a letter
    {
        return c;
    }
}