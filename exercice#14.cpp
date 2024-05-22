#include <iostream>
using namespace std;


int main(){

    int x;
    int y;
    int a;

      cout<<"enter the number 1 :"<<endl;
      cin>>x;
      cout<<"enter the number 2 :"<<endl;
      cin>>y;
 
      
      a=x;
      x=y;
      y=a;

      cout<<x<<endl;
      cout<<y<<endl;
      return 0;


}