#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){

    string stringlength;
    cout<<"Enter the number of inches \n";
    getline(cin,stringlength);
    float inches = 0;
    float yards = 0;
    stringstream(stringlength) >> inches;
    cout<<"You entered "<<inches<<"\n";
    yards=inches/36;
    cout<<"The no of yards is "<<yards<<"\n";
    return 0;
}