#include <iostream>
using namespace std;


int main(){

    int n;
    int result=0;
    cout<<"enter n :";
    cin>>n;

    for (int i=0; i<=n ; i++){

        if (i%2!=0){
            result+=i;
        }
     
    }
     cout<<result<<endl;

}