#include <iostream>
int main(){

enum Months{Jan,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};

Months bestMonth;

bestMonth = Apr;

if(bestMonth==Apr){
    std::cout<<"Bcoz its my birtday month";
}
return 0;

}