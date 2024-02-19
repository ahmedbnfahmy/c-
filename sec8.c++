#include <iostream>
#include <climits>
#include <vector>
using namespace std;




//  usd 100 cent
//  quarter 25 cent
//  dime 10 cent
//  nickle 5 cent
//  peny 1 cent
//  150 cent = 1 doller + 2 quarter


int main (){

     string outPutMsg = "please enter the amount in cents! ";

     float userInput{0};
     cout << outPutMsg;
     cin >> userInput;

     const int doller{100},quarter{25},dime{10},nickle{5},penny{1};
     int dollerAmount{0},quarterAmount{0},dimeAmount{0},nickleAmount{0},pennyAmount{0},balance{};

    dollerAmount = userInput/doller; // 95/100 = 0.95
    cout << dollerAmount << endl;
    balance = userInput -(dollerAmount*doller); // 95 -(0.95*100) = 95 .. int ignoring decimal numbers 0.22313 to 0
    cout << " dollers :" << dollerAmount << endl;
    cout << " dollers :" << balance << endl;

    quarterAmount = balance/quarter; // 95/25 = 3.2
    cout << " qa :" << quarterAmount << endl;
    balance -= quarterAmount*quarter;

    cout << " quarters :" << quarterAmount << endl;

    nickleAmount = balance/nickle;
    balance -= nickleAmount*nickle ;
    
    cout << " nickles:" << nickleAmount << endl;


    
    

    

    





    return 0;
}