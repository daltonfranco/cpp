#include <iostream>

using namespace std;

int main(){

    int old,conclusion;
    float wage;

    cout << "Enter your years old: ";
    cin >> old;

    cout << "Enter your wage: ";
    cin >> wage;

    if (old > 21 & wage < 1200.00){
        cout << "You will receive the Moradia Popular"  << endl;
    }else{
        cout << "You willn`t receive the Moradia Popular" << endl;
    }

}