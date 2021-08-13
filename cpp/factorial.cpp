#include <iostream>

using namespace std;

int main(){

    short num, x;

    cout << "Enter a number: ";
    cin >> num;

    x = 0;
    short mult = 1;

    while (num > x){
        /*cout << num << endl;*/
        mult *= num;
        num--;
        /*cout << mult << endl;*/
    }

    cout << "The factorial of the number entered is: " << mult << endl;

}