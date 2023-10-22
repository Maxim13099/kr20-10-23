#pragma once
#include <iostream>
class Rational{
private:
    int numerator_;
    int denominator_;
    static int gcd(int a, int b){
        while(a != b){
            if(a > b){
                a = a - b;
            }
            else if(b > a){
                b = b - a;
            }
        }
        return a;
    }
public:
    Rational();
    Rational(int numerator);
    Rational(int numerator, int denominator);
    static Rational Add(const Rational& a,const Rational& b){
        int aNumerator = a.numerator_;
        int aDenominator = a.denominator_;
        int bNumerator = b.numerator_;
        int bDenominator = b.denominator_;
        if (a.denominator_ == 1){
            aNumerator = b.denominator_ * a.numerator_;
            aDenominator = b.denominator_ * a.denominator_;
        }
        if (b.denominator_ == 1){
            bNumerator = a.denominator_ * b.numerator_;
            bDenominator = a.denominator_ * b.denominator_;
        }
        int firstParam = a.gcd(aNumerator, bNumerator);
        int secondParam = a.gcd(aDenominator, bDenominator);
        Rational obj{firstParam, secondParam};
        return obj;
    }
    int numerator() const;
    int denominator() const;
};
#define TASK2_H
