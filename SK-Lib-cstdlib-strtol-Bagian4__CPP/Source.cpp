#include <cstdlib>
#include <iostream>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    char* end;

    cout << "312gfg" << " to Long Int with base-0 = " << strtol("312gfg", &end, 0) << endl;
    cout << "End String = " << end << endl << endl;

    cout << "0q15axtz" << " to Long Int with base-0 = " << strtol("0q15axtz", &end, 0) << endl;
    cout << "End String = " << end << endl << endl;

    cout << "33ffn" << " to Long Int with base-0 = " << strtol("33ffn", &end, 0) << endl;
    cout << "End String = ";

    _getch();
    return 0;
}