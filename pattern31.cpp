/*

   * 
  **
 ***
****
 ***
  ** 
   *

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of rows : "<<endl;
    cin>>n;

    int i=1;
    while(i<=n){
        int space = n-i;
        while(space){
            cout<<" ";
            space--;
        }

        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }

    i=n-1;
    while(i>=1){
        int space = n-i;
        while(space){
            cout<<" ";
            space--;
        }

        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i--;
    }
    return 0;
}