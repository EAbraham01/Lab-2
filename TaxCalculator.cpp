#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const double taxRate = 0.075;
    double price, salesTax, total;

    cout << "Please enter the price of your item: ";
    cin >> price;

    salesTax = price * taxRate;
    total = price + salesTax;

    cout << "Original Price: " << price << endl;
    cout << "Sales Tax Amount : " << fixed << setprecision(2) << salesTax << endl;
    cout << "Final Total Cost: " << fixed << setprecision(2) << total << endl;
}