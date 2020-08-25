#include<iostream>
using namespace std;

void printABC(int n){

    for (int i= 1; i <=n; i++){
        int cnt_alphabets = n-i+1;
        char alphabet = 'A';

        for(int j=1 ; j<=cnt_alphabets; j++){
            cout<<alphabet;
            alphabet = alphabet+1;
        }
        cout<<endl;
    }

}

int main(){
    int n;
    cin>>n;
    printABC(n);

    return 0 ;
}