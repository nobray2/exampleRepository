#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    bool winYet = false;

    cout << "Welcome to Tic Tac Toe! Press any key to start" << endl;

    string lineOne = " 1|2|3 \n 4|5|6 \n 7|8|9 ";

    cout << lineOne << endl;

    while (winYet != true) {
        cout << "Enter the numbered position you would like to take" << endl;

        char playerPos = '0';
        int compPos = '0';

        cin >> playerPos;
        
        if (lineOne.find(playerPos) != string::npos) {
            lineOne.replace(lineOne.find(playerPos), 1, "X");

        }
        else {
            cout << "You already went there" << endl;
        }

        compPos = (rand() % 9) + 1;
        string compChar = to_string(compPos);
        if (lineOne.find(compChar) != string::npos) {
            lineOne.replace(lineOne.find(compChar), 1, "O");
            cout << lineOne << endl;
        }

        
    }

    return 0;







}