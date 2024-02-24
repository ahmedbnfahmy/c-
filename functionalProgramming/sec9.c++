#include <iostream>
#include <climits>
#include <vector>
using namespace std;


int main (){

    string welcomeMsg {"Please Enter your choice "};
    string unKnownMsg {"Unknowen selection please try again "};
    vector<string> optionsDisplayed {"P : Print","A : Add a num","S : Smallest Number", "L : Largest Number ","Q : Quit"};
    // switch case only work with int or enum or char 
    // enum Options {P,p,A,a,M,m,S,s,L,l,Q,q};
     
    vector<int> numberList {};
    vector<char> arrbrakkits {'[',']'};
    bool live {true};
    while(live){
        
        for (int i {0};i < optionsDisplayed.size(); ++i){   // loop on index so its int 
            cout << optionsDisplayed[i] << endl;
        };
        cout <<  welcomeMsg << endl;
        char clientChoice {0};
        cin >> clientChoice;


    switch (clientChoice){

        case 'p' :
        case 'P' : {
            if (numberList.size()){
                for(int i {0},j {0}; i < arrbrakkits.size();++i){
                    cout << arrbrakkits[i];
                    if(i == arrbrakkits.size()){
                        ++j;
                        break;
                        };
                for (; j < numberList.size();++j){

                    cout << numberList[j];
                    if( j < numberList.size()-1){
                       cout << ',';
                    };
                };
                };
                cout << endl;
            }
            else cout << "[]"<< " Empty List" <<endl;
            break;
        } 

        case 'a' : 
        case 'A' : {
            int numToAdd;
            cout << "Enter a number to add: ";
            cin >> numToAdd;
            numberList.push_back(numToAdd);
            cout << numToAdd << " is added" << endl;
            break;
        } 
        case 's' :
        case 'S' : {
            int smallestNum {0};
            for (int num1 :numberList){
                for (int num2 :numberList){
                    if (num1>num2){
                    num1=num2;
                    smallestNum=num2;
                    };
                };
            };
            cout << "the smallest is : " << smallestNum <<endl;
            break;
        } 
        case 'l' :
        case 'L' : {
            int largestNum {0};
            for (int num1 :numberList){
                for (int num2 :numberList){
                    if (num1<num2){
                    num1=num2;
                    largestNum=num2;
                    };
                };
            };
            cout << "the smallest is : " << largestNum <<endl;
            break;
        } 
        case 'q' :
        case 'Q' : {
            live = false;
            cout << "Bye Bye Kambora!"<<endl; 
            break;
        };
        default : cout << "not an option"<<endl;
        break;
    };

    }

    

    return 0;
}


