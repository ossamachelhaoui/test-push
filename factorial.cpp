#include <iostream>
using namespace std;


int main(){

    int n;
    int result=1;
    cout<<"enter n :";
    cin>>n;

    for (int i=n; i>=1 ; i--){

       result=result*i;
        
     
    }
     cout<<result<<endl;

}