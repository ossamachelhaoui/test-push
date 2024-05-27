#include <iostream>
using namespace std;

int main(){
   int n;
   int result=0;

    for (int i=1 ; i>0 ; i++ ){

        cout<<"enter number :";
        cin>>n;

        if (n<0){
            break;  
        }

        result+=n;
    }
        cout<<"result ="<<result;
}