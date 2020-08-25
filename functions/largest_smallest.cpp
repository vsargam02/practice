#include<iostream>
using namespace std;

int main(){
    int n ,key;
    cin>>n;
    int a[1000];

    for (int i=0; i<n; i++){
        cin>>a[i];
    }

    int INT_MAX;
    int INT_MIN;

    int largest =  INT_MAX;
    int smallest =  INT_MIN;

    for (int i=0; i<n; i++){

        if(a[i]>largest){
            smallest=a[i];
        }
        if(a[i]<smallest){
            largest=a[i];
        }

        // largest = max(largest,a[i]);
        // smallest = max(smallest,a[i]);
    }

    cout<<"largest" <<largest<<endl;
    cout<<"smallest" <<smallest<<endl;

    return 0;
}