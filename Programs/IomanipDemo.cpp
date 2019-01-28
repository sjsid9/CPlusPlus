#include <iomanip>
#include <iostream>
using namespace std;
int main(){

    cout<<"Text Without any formatting\n";
    cout<<"Ints"<<"Floats"<<"Doubles"<<"\n\n";
    cout<<"The text with setw(10)"<<"\n";
    cout<<"Ints"<<setw(10)<<"Floats"<<setw(10)<<"Doubles"<<setw(10)<<"\n\n";
    cout<<"The text with tabs"<<"\n";
    cout<<"Ints\t"<<"Floats\t"<<"Doubles\t"<<"\n";

}