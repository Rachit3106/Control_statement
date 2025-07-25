/*
Name:-Rachit Deshpande
PRN:-24070123035
Batch:-A2
*/
#include <iostream>
using namespace std;

int main(){
   //1
   int n;
   cout << "Enter a number for pattern: ";
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "*" << " ";
        }cout << endl;
    }
    cout << endl;
    //2
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout << "*" << " ";
        }cout << endl;
    }
    cout << endl;
    //3
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            if(j>=n-i){
                cout << "*" << " ";
            } else {
                cout << "  ";
            }
        }cout<< endl;
    }
    cout << endl;
    //4
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout << " ";
        }
        for(int k=1; k<=i; k++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    //5
    int x=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << x << " ";
            x++;
        }
        cout << endl;
    }
}
/*
Output:-
Enter a number for pattern: 5
* 
* * 
* * * 
* * * *
* * * * *

* * * * *
* * * *
* * *
* *
*

        *
      * *
    * * *
  * * * *
* * * * *

    *
   * *
  * * *
 * * * *
* * * * *

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/