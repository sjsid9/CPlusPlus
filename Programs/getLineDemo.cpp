#include <iostream>
#include <string>
using namespace std;
int main(){
    
    string userName;
    cout<<"What's ur name ? \n";
    getline(cin,userName);
    cout<<"Hello "<<userName<<"\n";

    return 0;
}