#include <iostream>
using namespace std;
int main() {
    int num;

    cout << "Enter a number from 1 to 10 to get 2 x that number: ";
    cin >> num;

    switch (num) {
        case 1:
            cout << "2 x 1 = 2";
            break;
        case 2:
            cout << "2 x 2 = 4";
            break;
        case 3:
            cout << "2 x 3 = 6";
            break;
        case 4:
            cout << "2 x 4 = 8" ;
            break;
        case 5:
            cout << "2 x 5 = 10";
            break;
        case 6:
            cout << "2 x 6 = 12";
            break;
        case 7:
            cout << "2 x 7 = 14" ;
            break;
        case 8:
            cout << "2 x 8 = 16";
            break;
        case 9:
            cout << "2 x 9 = 18" ;
            break;
        case 10:
            cout << "2 x 10 = 20";
            break;
        default:
            cout << "Please enter a number between 1 and 10." ;
    }

   
}
