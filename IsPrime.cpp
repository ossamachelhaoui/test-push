#include <iostream>
using namespace std;

int main(){
   int n;

        cout<<"enter number :";
        cin>>n;

        if(n<=2 && n>0){
            
             cout<<"prime";

        }else if (n<0){

            cout<<"pleas enter number > 0";
        
        }else if(n%2==0){
            cout<<"not a prime";
        }else{
            cout<<"prime";
        }
         

}