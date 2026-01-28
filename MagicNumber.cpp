#include <iostream>
using namespace std;

int main(){
    int favint, magnum;
    cout << "Please enter your favorite integer: ";
    cin >> favint;

    magnum = (favint * 2 + 10) / 2 - favint;

    cout << "Your magic number is... " << magnum << " !" << endl;

}