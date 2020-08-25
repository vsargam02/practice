#include<iostream>
using namespace std;


//pass by reference using pointers
void increment(int *aptr){
    *aptr =*aptr+1;
    cout<<"inside function"<<*aptr<<endl;
}
int main(){
    int a = 10;
    increment(&a);
    cout<<"inside main :"<<a;
    return 0;
}



// void increment(int a){
//     a =a+1;
//     cout<<"inside function"<<a<<endl;
// }
// int main(){
//     int a = 10;
//     increment(a);
//     cout<<"inside main :"<<a;
//     return 0;
// }