#include <iostream>
#include <string>
#include "mat.hpp"

using namespace std;
using namespace ariel;
int main(){
    cout << "Hello , this will take argument until you press X" << endl;
    while (true){
        cout << "To exit insert X" << endl;
        cout << "To continue anything exclude X" << endl;
        char stat;
        cin >> stat;
        if (stat == 'X'){
            cout << "Bye 💗 !" << endl;
            return 1;
        }

        cout << "Enter colums number :" << endl;
        int x;
        cin >> x;

        cout << "Enter rows number :" << endl;
        int y;
        cin >> y;

        cout << "Enter first symbol :" << endl;
        char a;
        cin >> a;

        cout << "Enter second symbol :" << endl;
        char b;
        cin >> b;

        cout << "This is your carpet !" << endl;

        cout << ariel::mat(x,y,a,b) << endl;

    }
    return 0;
}