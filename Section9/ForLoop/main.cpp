// Section 9
// For Loop
#include <iostream>
#include <vector>

using namespace std;

// To comment block of code :   Ctrl + k + c
// To uncomment block of code:  Ctrl + K + u

int main() {

    // for (int i{1} ; i <=10 ; ++i)
    //     cout << i << endl;
        
//    for (int i{1} ; i <=10 ; i+=2)
//        cout << i << endl;

//    for (int i {10}; i > 0; --i)
//        cout << i << endl;
//    cout << "Blastoff!" << endl;

//    for (int i{10}; i<=100; i+=10) {
//        if (i % 15 == 0)      //only divisable by 15.
//            cout << i << endl;
//    }

//    for (int i{1}, j{5} ; i<=5 ; ++i, ++j)
//        cout << i << " + " << j << " = " << (i+j) << endl;

//    for ( int i{1}; i<=100; ++i) {
//        cout << i;
//        if (i % 5 ==0)
//            cout << endl;
//        else 
//            cout << " ";
//    }

//  for ( int i{1}; i<=100; ++i) {
//        cout << i << ( (i % 10 ==0) ? "\n" : " ");
//    }
      

   vector<int> nums { 10,20,30,40,50};
   cout<<"vector nums.size() is : "<<nums.size()<<endl;
   for (unsigned i{0}; i< nums.size(); ++i)
       cout << nums[i] << endl;
    

    cout << endl;
    return 0;
}


