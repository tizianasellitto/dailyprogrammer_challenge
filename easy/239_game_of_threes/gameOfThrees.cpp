/**********************************************************************
 * --------------------------------------------------------------------
 * Game of Threes
 * --------------------------------------------------------------------
 *
 * Distributed under the BSD 2-clause "Simplified" License.
 * (See accompanying file LICENSE or copy at http://opensource.org/licenses/BSD-2-Clause)
 *
 * File:    gameOfThrees.cpp
 * Author:	Tiziana Sellitto
 * Created:	2015.11.04
 * Description: Game of Threes
 *
 **********************************************************************/
#include <iostream>
using namespace std;

void gameOfThrees(int n){
    while (n != 1) {
        if (n % 3 == 0){
            cout << n  << " 0" << endl;
            n /= 3;
        }
        else if ((n+1) % 3 == 0){
            cout << n  << " 1" << endl;
            n = (n+1) / 3;
        }
        else{
            cout << n  << " -1" << endl;
            n = (n-1) / 3;
        }
    }
    if(n==1){
        cout << "1" << endl;
        return;
    }
}

int main(){
    cout << "Starting program ..." << endl;
    int n;
    
    cout << "Insert a number" << endl;
    cin >> n;
    gameOfThrees(n);
    cout << "Ending program ..." << endl;
    return 0;
}