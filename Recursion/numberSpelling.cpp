#include<iostream>
using namespace std;


//number of spelling

char words[][10]={"zero", "one", "two","three","four","five","six","seven","eight","nine"};

void printSpellings(int n){
    //base case
    if(n==0){
        return ;
    }
    //rec case first print the spellings of(204)
    //after recursive call starting printing spellings
    printSpellings(n/10);
    int digit = n % 10;
    cout<< words[digit]<<" ";
    return;
}


int main(){
    int n;
    cin>>n;
    printSpellings(n);

}