#include <iostream>
#include <string>
using namespace std;

class Cat{
public:
    Cat() = delete;
    Cat(const string& name){
        name_ = name;
    }
    string GetName() const{
        return name_;
    }
private:
    string name_;
};

class Witch{
public:
    Witch(const string& catName) : cat_(catName){};
private:
    Cat cat_;
};

int main(){
    return 0;
}
