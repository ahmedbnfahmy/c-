#include <iostream>
#include <climits>
#include <vector>
#include <cctype>
using namespace std;





// functions prototupes 

void displayOptions (const vector<string> optionsDisplayed);
char clientChoiceToUpperCase (char &clientChoice);
void print (vector<int> &numberList,vector<char> &arrbrakkits);
void addNumbersToList (vector<int> &numberList);
void getSmallestNum (int &smallestNum,vector<int> &numberList);
void getLargestNum (int &smallestNum,vector<int> &numberList);
void getMeanNum (float &meanNum,vector<int> &numberList);


int main (){

    string welcomeMsg {"Please Enter your choice "};
    string unKnownMsg {"Unknowen selection please try again "};
    vector<string> optionsDisplayed {"P : Print","A : Add a num","S : Smallest Number", "L : Largest Number ","M : Mean Number ","Q : Quit"};
    // switch case only work with int or enum or char 
     
    vector<int> numberList {};
    vector<char> arrbrakkits {'[',']'};
    bool live {true};
    while(live){
        displayOptions(optionsDisplayed);
        cout <<  welcomeMsg << endl;
        char clientChoice {0};
        clientChoiceToUpperCase (clientChoice);

    switch (clientChoice){
        case 'P' : 
                print (numberList,arrbrakkits);break;
        case 'A' : 
                addNumbersToList (numberList);break;
        case 'S' : {
            int smallestNum {};
            getSmallestNum (smallestNum,numberList);
            break;
        } 
        case 'L' : {
            int largestNum {};
            getLargestNum (largestNum,numberList);
            break;
        } 
        case 'M' : {
            float meanNum {0.0};
            getMeanNum (meanNum,numberList);
            break;
        } 
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


void displayOptions (const vector<string> optionsDisplayed)
{
    for (int i {0};i < optionsDisplayed.size(); ++i){   // loop on index so its int 
            cout << optionsDisplayed[i] << endl;
            
    };
}

char clientChoiceToUpperCase (char &clientChoice)
{
    cin >> clientChoice;
    clientChoice=toupper(clientChoice);
    return clientChoice;
}

void print (vector<int> &numberList,vector<char> &arrbrakkits)
{
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
            
}
void addNumbersToList (vector<int> &numberList)
{
    int numToAdd;
    cout << "Enter a number to add: ";
    cin >> numToAdd;
    numberList.push_back(numToAdd);
    cout << numToAdd << " is added" << endl;
}

void getSmallestNum (int &smallestNum,vector<int> &numberList)
{
    for (int num1 :numberList){
                for (int num2 :numberList){
                    if (num1>num2){
                    num1=num2;
                    smallestNum=num2;
                    };
                };
    };
    cout << "the smallest is : " << smallestNum <<endl;
}

void getLargestNum (int &largestNum,vector<int> &numberList)
{
    for (int num1 :numberList){
                for (int num2 :numberList){
                    if (num1<num2){
                    num1=num2;
                    largestNum=num2;
                    };
                };
            };
            cout << "the largest is : " << largestNum <<endl;
}
 void getMeanNum (float &meanNum,vector<int> &numberList) //[1,2,3,4,5]
{
    if(numberList.size()){

    float mean={0.0};
    for (auto i :numberList){
         mean += i;
    };
    meanNum=mean/numberList.size();
    cout<< meanNum;
    } 
    else cout << "the list is empty! please enter a numbers first "<<endl;
}