#include <iostream>
using namespace std;


int main(){

    int day;
    int hour;
    int minut;
    int second;
    int totalsecond;
  

    cout<<"enter number of day : ";
    cin>>day;
    cout<<"enter number of hour : ";
    cin>>hour;
    cout<<"enter number of minut : ";
    cin>>minut;
    cout<<"enter number of second : ";
    cin>>second;

    totalsecond=(day*24*60*60)+(hour*60*60)+(minut*60)+second;
    cout<<"the total of second is :"<<totalsecond<<" "<<"second";

}