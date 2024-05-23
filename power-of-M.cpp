#include <iostream>
using namespace std;


int main(){

    int n;
    int m;
    int result=1;
    cout<<"enter n :";
    cin>>n;
    cout<<"enter m :";
    cin>>m;

    for (int i=0 ; i<m ; i++ ){
       result=result*n; 
    }

     cout<<result<<endl;

}