 #include <iostream>
#include <string>
#include "task2.h"
using namespace std;

int main(){
    Rational func1(36,12);
    Rational func2(560,3);
    auto s = func1.Add(func1, func2);
    std::cout << "nod numerator: " << s.numerator()<< endl << "nod denominator: " << s.denominator() << std::endl;
}
