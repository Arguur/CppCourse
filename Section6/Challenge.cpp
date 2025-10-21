#include <iostream>

using namespace std;

int main()  {
    int small_rooms{0};
    int large_rooms{0};
    double price_per_small_room{25.0};
    double price_per_large_room{35.0};
    int valid_days{30};

    cout << "Hello, welcome to  Frank's Carpet cleaning service" << endl;
    cout << "\nHow many small rooms would you like cleaned? " << endl;
    cin >> small_rooms;
    cout << "How many large rooms would you like cleaned? " << endl;
    cin >> large_rooms;

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms << endl;
    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;
    cout << "cost: $" << (small_rooms * price_per_small_room + large_rooms * price_per_large_room) << endl;
    cout << "Tax: $" << (small_rooms * price_per_small_room + large_rooms * price_per_large_room) * 0.06 << endl;
    cout << "======================================" << endl;
    cout << "Total estimate: $" << (small_rooms * price_per_small_room + large_rooms * price_per_large_room) * 1.06 << endl;
    cout << "This estimate is valid for " << valid_days << " days" << endl;

   return 0;
}