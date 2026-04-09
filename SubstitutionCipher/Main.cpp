//
// Created by Antek on 09.04.2026.
//

#include "Main.h"
#include <iostream>
using namespace std;

int main() {
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    string textToEncrypt;
    string decryptedText;
    string encryptedText;
    char foundLetterIdx;

    getline(cin,textToEncrypt);

    for (char c : textToEncrypt) {
        foundLetterIdx = alphabet.find(c);
        if (foundLetterIdx != string::npos) {
            encryptedText += key.at(foundLetterIdx);
            decryptedText += alphabet.at(foundLetterIdx);
        }
        else {
            encryptedText += c;
            decryptedText += c;
        }


    }
    cout << "Plain Text: " << textToEncrypt << endl;
    cout << "Encrypting..." << endl;
    cout << encryptedText << endl;
    cout << "Decrypting..." << endl;
    cout << decryptedText << endl;
return 0;
}