#include <iostream>
#include <climits>
#include <vector>
// a preprocessor directive in C and C++. It tells the compiler to include the contents of a file in the source code.
// <iostream> this is the file that we want to include in the source code 

using namespace std;

// directive tells the compiler that you want to use all names from the std namespace without prefixing them. 
// It effectively imports all names from the std namespace into the current scope, allowing you to access them directly.

int main(){
    // cout << "hello world!" << endl;
    // int x {0};
    // cout << "enter x val" << endl;
    // cin >> x;
    // int y {0};
    // cout << "enter y val" << endl;
    // cin >> y;
    // int xy {x*y};
    // cout << xy << sizeof(int) <<endl;  // 64  in this machine 
    // sizeof(x);



    // ########################################################### Arrays & Vectors ############################################################################

        // its compound dataType or dataStructure, - collection of elements 

        vector <int> vector1;
        vector <int> vector2;

        vector1.push_back(10);
        vector1.push_back(20);                          
        // cout << vector1.at(0) << endl;
        // cout << vector1.at(1) << endl;
        // cout << vector1.size() << endl;


        vector2.push_back(100);
        vector2.push_back(200);
        // cout << vector2.at(0) << endl;
        // cout << vector2.at(1) << endl;
        // cout << vector2.size() << endl;

        vector <vector<int>> vector_2d;

            //[10,20] ,[100,200]

            vector_2d.push_back({vector1});
            vector_2d.push_back({vector2});

        // cout << vector_2d.at(1).at(0) << endl;

        // cout << vector1; 
        for (int i =0; i<vector1.size();++i){
            cout << " " << vector1[i] << endl;
        }


    return 0;




}   
