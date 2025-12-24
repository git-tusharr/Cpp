// #include <iostream>
// using namespace std;

// int main() {
//     int n;

//     // Ask the user for the number of terms in the Fibonacci series
//     cout << "Enter the number of terms: ";
//     cin >> n;

//     int first = 0, second = 1, next;

//     cout << "Fibonacci Series: " << first << " " << second << " ";
//     // Generate the Fibonacci series
//     for (int i = 3; i <= n; ++i) {
//         next = first + second;
//         cout<< next << " ";

//         first = second;
//         second = next;
//     }

//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    // Loop to calculate sum
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;

    return 0;
}
