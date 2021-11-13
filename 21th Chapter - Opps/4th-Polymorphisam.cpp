// // Function Overloading
// #include<iostream>
// using namespace std;

// class hello{
//     public:
//     void func(){
//         cout<<"This is Function without Parametter"<<endl;
//     }
//     void func(int x){
//         cout<<"This is Function with one int Parametter"<<endl;
//     }
//     void func(double x){
//         cout<<"This is Function with one double Parameter"<<endl;
//     }
//     void func(int x, int y){
//         cout<<"This is Function with two int Parametter"<<endl;
//     }
// };

// int main(){
//     hello obj;
//     obj.func();
//     obj.func(33);
//     obj.func(4.6);
//     obj.func(3,5);
// }


// // Operator Overloading 
// #include<iostream>
// using namespace std;

// class A{
//     private:
//     int real;
//     int img;

//     public:
//     void func(int r=0, int i=0){
//         real = r;
//         img = i;
//     }

//     A operator +(A const &obj){
//         A res;
//         res.real = real + obj.real;
//         res.img = img + obj.img;
//         return res;
//     }

//     void display(){
//         cout << real<<" + i"<<img<<endl;
//     }

// };

// int main(){
//     A c1,c2;
//     c1.func(20,30);
//     c2.func(40,60);
//     A c3 = c1 + c2;
//     c3.display();
//     return 0;
// }

// Vritual function
// #include<iostream>
// using namespace std;

// class base{
// public:
//     virtual void print(){
//         cout<<"This Sentence from Print function of base class"<<endl;
//     }
//     void display(){
//         cout<<"This Sentence from Display function of base Class"<<endl;
//     }
// };

// class drived: public base{
// public:
//     void print(){
//         cout<<"This Sentence from Print function of drived class"<<endl;
//     }
//     void display(){
//         cout<<"This Sentence from Display function of drived Class"<<endl;
//     }
// };

// int main(){
//     base *b;
//     drived d;

//     b = &d;

//     b -> print();
//     b -> display();
//     return 0;
// }