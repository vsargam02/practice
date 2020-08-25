#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i =2;i<=n-1;i++){
        if(n%i==0){
            return false;
        }
       
    }
    return true;
}
//write a function to print all prime numbers
void printPrime(int N){
    for (int i =2; i<=N;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
}


int main(){
    int n;
    cin>>n;

    printPrime(n);

    // if(isPrime(n)){
    //     cout<<n<<" is prime"<<endl;
    // }
    //     else{
    //         cout<<n<<" not prime"<<endl;
    //     }
    
    return 0;
}