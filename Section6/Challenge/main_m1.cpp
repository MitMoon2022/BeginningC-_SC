
// Section 6
// Challenge

/* 
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;

int main() {
    cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
    cout << "\nHow many small rooms would you like cleaned? ";
    
    int number_of_small_rooms {0};
    cin >> number_of_small_rooms;
    //cout << number_of_small_rooms<<endl;

    cout << "How many large rooms would you like cleaned? ";
    int number_of_large_rooms {0};
    cin >> number_of_large_rooms;

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << number_of_small_rooms <<endl;
    cout << "Number of large rooms: " << number_of_large_rooms <<endl;

    const double  price_per_Sroom {25.0};
    const double  price_per_Lroom {35.0};
    const double sales_tax {0.06};
    const int estimate_expiry {30}; // days

    cout << "Price of small room: $" << price_per_Sroom <<endl;
    cout << "Price of large room: $" << price_per_Lroom <<endl;

    //Calculation of small room
    double Psmall_room;
    double Plarge_room;
    
    Psmall_room = price_per_Sroom * number_of_small_rooms;
    Plarge_room = price_per_Lroom * number_of_large_rooms;

    double total_cost;

    total_cost = Psmall_room + Plarge_room;
    cout << "Cost :$" << total_cost <<endl;

    double tax_amt;

    tax_amt = sales_tax * total_cost;
    cout << "Tax: $"<< tax_amt <<endl;
    cout <<"==================================="<<endl;
    cout <<"Total estimate: $"<< total_cost + tax_amt << endl;
    cout <<"This estimate is valid for "<<estimate_expiry<< " days."<<endl;
//----------------------------------------------------------------------------
    cout << endl;
    return 0;
}

