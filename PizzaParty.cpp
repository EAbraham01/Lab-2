#include <iostream>
using namespace std;

int main(){
    int people, slicesPerPizza, slicesPerPerson, boxes, leftover, additionalSlices;
    
    cout << "Number of people attending party: ";
    cin >> people;

    cout << "Number of slices per pizza: ";
    cin >> slicesPerPizza;

    cout << "How many slices will each person eat: ";
    cin >> slicesPerPerson;

    boxes = (people * slicesPerPerson) / slicesPerPizza;

    if ((people * slicesPerPerson) % slicesPerPizza != 0){
        boxes++;
    }

    leftover = (boxes * slicesPerPizza) % (people * slicesPerPerson);

    cout << "You will need to order " << boxes << " pizzas." << endl;
    cout << "There will be " << leftover << " leftover slices." << endl;
    
    //Challenge
    additionalSlices = 0;
    
    if (leftover != 0){
        boxes -= 1;
        additionalSlices = slicesPerPizza - leftover;
    };
    
    cout << boxes << " full pizzas will be eaten and " << additionalSlices << " additional slices will be needed." << endl;
    
    


}