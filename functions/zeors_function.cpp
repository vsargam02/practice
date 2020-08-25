#include<iostream>
using namespace std;

//for finding zeros dived by 5,5^2... and take floor value 
int findZeros(int n){
     int ans = 0;
     for(int D=5; n/D>=1; D=D*5){
         ans +=n/D;
     }
     return ans;

}

int main(){
    long long int n;
    cin>>n;

    cout<<findZeros(n)<<endl;

    return 0;
}