/*
Name: RAchit Deshpande
PRN:-24070123035
Batch:-A2
*/
#include <iostream>
using namespace std;

int main(){
    string pass="01232@";
    string input;
    do{
        cout<<"Enter the password: ";
        cin >> input;
        if(input==pass){
            cout << "Access Granted" << endl;
            break;
        } else {
            cout << "Wrong Password, Try Again!" << endl;
        }
    }while(input != pass);
    return 0;
}
/*
Output:-
Enter the password: 1232
Wrong Password, Try Again!
Enter the password: 01232
Access Granted
*/