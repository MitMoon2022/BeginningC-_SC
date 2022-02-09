// Section 8 Challenge
/*
	For this program I will be using US dollars and cents.
	
    Write a program that asks the user to enter the following:
	An integer representing the number of cents 
    	
	You may assume that the number of cents entered is greater than or equal to zero
    
	The program should then display how to provide that change to the user.
	
	In the US:
		1 dollar is 100 cents
		1 quarter is 25 cents
		1 dime is 10 cents
		1 nickel is 5 cents, and
		1 penny is 1 cent.
		
	Here is a sample run:
	
	Enter an amount in cents :  92
	
	You can provide this change as follows:
	dollars    : 0
	quarters : 3
	dimes     : 1
	nickels   : 1
	pennies  : 2
	
	Feel free to use your own currency system.
	Also, think of how you might solve the problem using the modulo operator.

	Have fun and test your program!!

*/
#include <iostream>

using namespace std;

int main() {

	//Define the const value you may used.
	const int US_dollar {100};
	const int US_quarter {25};
	const int US_dime {10};
	const int US_nickel {5};
	const int US_penny {1};

	cout<<"Enter an amount in cents: ";
	int amount {0};
	cin>>amount;
	cout<<endl;
	cout<<"---------------------------------------"<<endl;
	cout<<"You can provide this change as follows:"<<endl;
	int dollars {0};
	dollars = amount / US_dollar;
	cout<<"dollars    : "<<dollars<<endl;

	int change {0};
	change = amount % US_dollar;
	//cout<<change<<endl;

	int quarters {0};
	quarters = change / US_quarter;
	cout<<"quarter	   : "<<quarters<<endl;

	change = change % US_quarter;
	//cout<<change<<endl;
	int dime {0};
	dime = change / US_dime;
	cout<<"dime       : "<<dime<<endl;

	change = change % US_dime;
	//cout<<change<<endl;
	int nickel {0};
	nickel = change / US_nickel;
	cout<<"nickel     : "<<nickel<<endl;

	change = change % US_nickel;

	int penny {0};
	penny = change / US_penny;
	cout<<"penny      : "<<penny<<endl;

	cout<<"------------------------------------------------"<<endl;



    cout << endl;
    return 0;
}


