#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i =1; i<=n; i++){
        int val = i % 2 == 0 ? 1 : 0;

        //print i values for ith line
        for(int cnt = 1; cnt<=i; cnt++){
            cout<<val;
            val= 1-val; //updtaing value 0 and 1
        }
        cout<<endl;
    }
    return 0;
}
