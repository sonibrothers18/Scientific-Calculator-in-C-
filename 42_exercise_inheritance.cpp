// ! Create 2 classes:
// !     1. SimpleCalculator:- Takes input of 2 numbers using a utility function and performs +,-,*,/
// !     2. ScientificCalculator:- Takes input of 2 numbers using a utility function and performs any four operations of your choice

// ! Question in gallery

#include<iostream>
#include<cmath> //including library
using namespace std;

class simpleCalculator{
    int a, b;
    public:
        void getDataSimple(){
            cout<<"Enter the value of a"<<endl;
            cin>>a;
            cout<<"Enter the value of b"<<endl;
            cin>>b;
        }

        void performOperationsSimple(){
            cout<<"The value of a+b is: "<<a+b<<endl;
            cout<<"The value of a-b is: "<<a-b<<endl;
            cout<<"The value of a*b is: "<<a*b<<endl;
            cout<<"The value of a/b is: "<<a/b<<endl;
        }
};

class scientificCalculator{
    int a, b;
    public:
        void getDataScientific(){
            cout<<"Enter the value of a"<<endl;
            cin>>a;
            cout<<"Enter the value of b"<<endl;
            cin>>b;
        }

        void performOperationsScientific(){
            cout<<"The value of cos(a) is: "<<cos(a)<<endl;
            cout<<"The value of cos("<<a<<") is: "<<cos(a)<<endl;
            cout<<"The value of sin(a) is: "<<sin(a)<<endl;
            cout<<"The value of exp(a) is: "<<exp(a)<<endl;
            cout<<"The value of tan(a) is: "<<tan(a)<<endl;
        }
};

class hybridCalculator : public simpleCalculator, public scientificCalculator{

};

int main(){
    
    hybridCalculator a;
    a.getDataSimple();
    a.performOperationsSimple();
    a.performOperationsScientific();

    return 0;
}