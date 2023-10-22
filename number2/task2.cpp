#include "task2.h"

    Rational::Rational(){
        numerator_ = 0;
        denominator_ = 1;
    }
    Rational::Rational(int numerator){
        numerator_ = numerator;
        denominator_ = 1;
    }
    Rational::Rational(int numerator, int denominator){
        numerator_ = numerator;
        denominator_ =  denominator;
    }
    int Rational::numerator() const{
        return numerator_;
    }
    int Rational::denominator() const{
        return denominator_;
    }
