#include<iostream>
#include<algorithm>
using namespace std;


//define a comparater function
bool compare(int a ,int b){
    return a>b;
}

int main(){
    int n,key;
    cin>>n;
    int a[1000];

    for (int i = 0; i<n ; i++){
        cin>>a[i];

    }
    //sort an array using a sort() function, more efficient
    sort(a,a+n,compare);

    for(int i = 0;i<n; i++){
        cout<<a[i] <<",";
    }

    return 0;
}
