//#include<iostream>
//using namespace std;
//int main(){
//    int a=10;
//    int *aptr = &a;
//    cout<<aptr<<endl; 
//    cout<<*aptr<<endl;
//
//    cout<<a<<endl;
//    
//    *aptr=20;
//    cout<<a<<endl;
//
//    *aptr-=2;
//    cout<<a<<endl;
//
//    aptr++;
//    cout<<aptr<<endl; 
//    
//}
//


//Pointer in Array
//
//#include<iostream>
//using namespace std;
//int main(){
//    int arr[] = {10,20,30};
//    
//    int *ptr = arr;
//    //first way
//    for(int i =0 ; i<3; i++){
//        cout<<*ptr<<endl;
//        ptr++;
//    }
//
//    //Second way
//    for(int i=0; i<3; i++){
//        cout<<*(arr+i)<<endl;
//        
//    }
//     
//}

//Pointer to Pointer
//#include<iostream>
//using namespace std;
//int main(){
//    int a =10;
//    int *p = &a;
//    
//    int **q = &p;
//    
//    cout<<*q<<endl;
//    cout<<**q<<endl;
//
//}


// Pointer by functions
//#include<iostream>
//using namespace std;
//void swap(int *a, int *b){
//    int temp = *a;
//    *a=*b;
//    *b=temp;
//}
//
//int main(){
//    int a=10,b=20;
//    
//    swap(&a,&b);
//    cout<<a<<" "<<b;
//      
//}
//

// Passing ponters to function
// increment of value by refrence
// #include<iostream>
// using namespace std;
// void increment(int *a){
//     *a++;
// }
//
// int main(){
//     int a = 10;
//
//     cout<<a<<endl;
//     cout<<&a<<endl;
//     increment(&a);
//     cout<<a<<endl;
//     cout<<&a<<endl;
//
//     return 0;
// } 