#include <iostream>

using namespace std;

int main () {
    
    cout << "Enter an ammount of cents: ";
    int cents {};
    cin >> cents;

    cout << "You can provide this change as follows: " << endl;
    cout << "Dolars: " << cents / 100 << endl;
    cents %= 100;
    cout << "Quarters: " << cents / 25 << endl;
    cents %= 25;
    cout << "Dimes: " << cents / 10 << endl;
    cents %= 10;   
    cout << "Nickels: " << cents / 5 << endl;
    cents %= 5;
    cout << "Pennies: " << cents << endl;
  
    return 0;
}