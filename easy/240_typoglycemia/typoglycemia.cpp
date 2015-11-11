/**********************************************************************
 * --------------------------------------------------------------------
 * Typoglycemia
 * --------------------------------------------------------------------
 *
 * Distributed under the BSD 2-clause "Simplified" License.
 * (See accompanying file LICENSE or copy at http://opensource.org/licenses/BSD-2-Clause)
 *
 * File:    typoglycemia.cpp
 * Author:  Tiziana Sellitto
 * Created: 2015.11.10
 * Description: Typoglycemia
 *
 **********************************************************************/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void typoglycemy(string str){
    string returnedString;
    string tmp;
    int i=0;
    while (str[i])
    {
        if (ispunct(str[i]) || isspace(str[i])){
            if(tmp.size() > 3){
                random_shuffle(tmp.begin()+1, tmp.end()-1);
            }
            returnedString += tmp;
            tmp = "";
            returnedString += str[i];
            i++;
        }
        else{
            tmp = tmp + str[i];
            i++;
        }
    }
    cout << returnedString << endl;
}

int main(){
    cout << "Starting program ..." << endl;
    string sentence;
    cout << "Insert a sentence" << endl;
    getline (cin, sentence);
    if(sentence.size()>3)
        typoglycemy(sentence);
    else
        cout << sentence << endl;
    cout << "Ending program ..." << endl;
    return 0;
}