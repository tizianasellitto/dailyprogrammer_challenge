/**********************************************************************
 * --------------------------------------------------------------------
 * Consonants and Vowels
 * --------------------------------------------------------------------
 *
 * Distributed under the BSD 2-clause "Simplified" License.
 * (See accompanying file LICENSE or copy at http://opensource.org/licenses/BSD-2-Clause)
 *
 * File:    consonantsAndVowels.cpp
 * Author:  Tiziana Sellitto
 * Created: 2015.11.09
 * Description: Consonants and Vowels
 *
 **********************************************************************/
#include <iostream>
#include <string>
using namespace std;

const string consonants("bcdfghjklmnpqrstvwxyz");
const string vowels("aeiou");

void consonantsAndVowels(string str){
    for (int i = 0; i < str.size(); i++){
        switch (str[i]) {
            case 'c':
                str[i] = consonants[rand() % consonants.size()];
                break;
            case 'C':
                str[i] = consonants[rand() % consonants.size()];
                str[i]  = toupper(str[i]);
                break;
            case 'v':
                str[i] = vowels[rand() % vowels.size()];
                break;
            case 'V':
                str[i] = vowels[rand() % vowels.size()];
                str[i]  = toupper(str[i]);
                break;
            default:
                cout << "Character " << str[i] << " is not valid" << endl;
                return;
        }
    }
    cout << "Word: " << str << endl;
}

int main(){
    cout << "Starting program ..." << endl;
    string word;
    cout << "Insert a string of c and v" << endl;
    cin >> word;
    consonantsAndVowels(word);
    cout << "Ending program ..." << endl;
    return 0;
}