#include <iostream>
using namespace std;

void myFun(string name, int age, double cash, char money){
    cout << " enter your name \n";
    cin >> name;
    cout << " Enter your age \n";
    cin >> age;
    cout << "enter your cash u want in your life \n ";
    cin >> cash;
    cout << " enter your value of your cash \n";
    cin >> money;
    cout << " your money is: " << cash << money << "\n";
}
int main() {
    myFun("vincent", 22, 4444, '$');
    
    return 0;
}