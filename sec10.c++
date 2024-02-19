



// ###################################################### encryptingMsg || decryptingMsg ######################################################

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;


int main (){
    string helloMsg {"Hi,please enter E : for encrypting or D : for decrypting a secret messege"};
    string secMsg {"enter your secret messege"};
    string encryptingMsg {" Encrypting msg now "};
    string decryptingMsg {" Decrypting msg now "};
    string encryptedMsg {};
    string codedMsg {"abcdefghklmnopqrstuvwxyz"};
    string cipher   {"mnopqrstuvwxyzabcdefghkl"};
    string decryptedMsg {};
    
    cout << helloMsg << endl;
    char answer {};
    cin >> answer; 
    cin.ignore(); // Ignore the newline character left in the input buffer
    string originalMsg {}; // fahmy
    if (answer == 'E'||answer == 'e'){
        cout << secMsg << endl;
        getline(cin , originalMsg); // this method to get all msg you input it if you dont the well get the first word 
                // cout << codedMsg.length() <<endl; // .length return acutal numbers not index 
                // cout << answer <<endl;
        if(originalMsg.length()){
                cout << "hi" <<endl;
            for (size_t i {0};i < originalMsg.length();++i){
                char originalMsgLetter = originalMsg[i];
                cout << originalMsgLetter <<endl;
                size_t index {codedMsg.find(originalMsgLetter)};
                if(index+1){
                    encryptedMsg.push_back(cipher[index]);
                }else encryptedMsg.push_back(originalMsgLetter);
            };
        cout << originalMsg <<endl;
        cout << encryptingMsg <<endl;
        cout << encryptedMsg << endl;
        };
    } else if (answer == 'D'||answer == 'd'){
            cout << secMsg << endl;
            getline(cin , originalMsg);
            if(originalMsg.length()){
            for (size_t i {0};i < originalMsg.length();++i){
                char originalMsgLetter = originalMsg[i];
                cout << originalMsgLetter <<endl;
                size_t index {cipher.find(originalMsgLetter)};
                if(index+1){
                    decryptedMsg.push_back(codedMsg[index]);
                }else decryptedMsg.push_back(originalMsgLetter);
            };
            cout << originalMsg <<endl;
            cout << decryptingMsg <<endl;
            cout << decryptedMsg << endl;
        };
    } else cout << "wrong answer please enter a vlaid letter"<<endl;

    return 0; 
    };
    