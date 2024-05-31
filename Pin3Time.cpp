#include <iostream>
using namespace std;

int main(){
 int pin;
 int conter=0;

    cout<<"enter pin :";
    cin>>pin;
    if (pin==1234){

        cout<<"welcome"<<endl;

    }else if (pin!=1234){

        for (int i=conter ; i<2 ; i++){

            cout<<"enter pin :";
            cin>>pin;

            if (pin==1234){
                cout<<"welcome"<<endl;
                break;
            }
                conter++;

            if (conter==2){
                cout<<"your card is blocked !"<<endl;
            }        
        }
    }
  
}