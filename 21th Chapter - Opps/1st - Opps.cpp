#include<iostream>
using namespace std;

class student{
    string name;
    public:
    int age;
    bool gender;

    student(){
        cout<<"Default Constructor"<<endl;
    } //Default Consrtuctor
    student(string s, int a, int g){
       cout<<"Paramiterised Constructor"<<endl; 
       name = s; 
       age = a;
       gender = g;

    } // Paramentrised constructor


    student(student &a){
        name = a.name;
        age = a.age;
        gender = a.gender;
        cout<<"Copy Constructor"<<endl;
    } //Copy Constructor

    ~student(){
        cout<<"Destructor Called"<<endl;
    } //Destructor 

    void setname(string s){
        name = s;
    }
    

    void getname(){
        cout<<name<<endl;
    }

    bool operator == (student &a){
        if(name == a.name && age==a.age && gender==a.gender){
            return true;
        }else
        {
            return false;
        }
        
    }

    void PrintInfo(){
        cout<<"Name =";
        cout<<name<<endl;
        cout<<"Age =";
        cout<<age<<endl;
        cout<<"Gender =";
        cout<<gender<<endl;
    }

};



int main(){

    // student a;
    // a.name = "Ankit";
    // a.age = 19;
    // a.gender = 1;

    // student arr[2];

    // for(int i = 0; i < 2; i++)
    // {   
    //     string s;
    //     cout<<"Name =";
    //     cin>>s;
    //     arr[i].setname(s);
    //     cout<<"Age =";
    //     cin>>arr[i].age;
    //     cout<<"Gender =";
    //     cin>>arr[i].gender;
    // }
    // for(int i = 0; i < 2; i++)
    // {   
    //     cout<<i<<" is:";
    //     arr[i].PrintInfo();
    // }


    student ab("Ankit",19,0);
    // a.getname();
    // ab.PrintInfo();
    
    student sa;

    student c = ab;
    // cout<<" c Ends Here"<<endl;
    student sd(c);


    if(c==sa){
        cout<<"Both are Same"<<endl;
    }else{
        cout<<"Both are not Same "<<endl;
    }
    
    return 0;
}