/*
Name:- Rachit Deshpande
PRN:-24070123035
Batch:-A2
*/
#include <iostream>
using namespace std;

int main(){
    string pass,input;
    cout << "Use 8 characters with minimum 1 (uppercase, lowercase, digit, special character)" << endl;
    cout << "Enter the password for lock: ";
    cin >> pass;
    cout << "You have 3 attempts to enter the correct password." << endl;
    for(int i=1;i<=3;i++){
        cout<< "Enter the password for checking: ";
        cin >> input;
        if(input==pass){
            cout << "Access Granted" << endl;
            return 0;
        } else {
            cout << i <<" attempts are done"<< endl;
            if(i==3){
                cout << "Access Denied, too many attempts!" << endl;
                cout << "Try Again after 24 Hours System is closing"<< endl;
                return 0;
            }
        }
    }
}
/*
Output:-
1)Use 8 characters with minimum 1 (uppercase, lowercase, digit, special character)
Enter the password for lock: 01232@
You have 3 attempts to enter the correct password.
Enter the password for checking: 01223
1 attempts are done
Enter the password for checking: 13332
2 attempts are done
Enter the password for checking: 1232
3 attempts are done
Access Denied, too many attempts!
Try Again after 24 Hours System is closing
2)Use 8 characters with minimum 1 (uppercase, lowercase, digit, special character)
Enter the password for lock: 01232@
You have 3 attempts to enter the correct password.
Enter the password for checking: 01222
1 attempts are done
Enter the password for checking: 01232@
Access Granted
*/