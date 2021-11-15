/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>  
#include <vector>  
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
    string a[7] = {"I", "Work", "Task", "Love", "You"};
    
    cout << "Masukkan Kalimat : "; getline(cin, a[5]);
    
    for_each(a[5].begin(), a[5].end(), [](char & c) {
        c = ::tolower(c);
    });
        
    stringstream X(a[5]);
        
    while (getline(X, a[6], ' ')) {  
        if (a[6] == "aku") cout << a[0] << " ";
        if (a[6] == "mengerjakan") cout << a[1] << " ";
        if (a[6] == "tugas") cout << a[2] << " ";
        if (a[6] == "suka") cout << a[3] << " ";
        if (a[6] == "kamu") cout << a[4] << " ";
    }
        
    cout << endl << endl;
    
    return 0;
}
