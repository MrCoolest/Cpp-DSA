#include<iostream>
using namespace std;

class A{
    public:
    int a;
        void funcA(){
        cout<<"This is FuncA"<<endl;
        }
    private:
    int b;
        void funcB(){
            cout<<"this is FuncB"<<endl;
        }
    protected:
    int c;
        void funcC(){
            cout<<"This is FuncC"<<endl;
        }
};




int main(){
    A obj;
    obj.funcA();
    // obj.funcB();
}