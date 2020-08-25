#include<iostream>
using namespace std;

int main(){
    //allocation + deallocation=complier
    int b[100]={0};
    cout<<sizeof(b)<<endl;
    cout<<b<<endl; //symbol table
    //here b cannot be overwritten,b is a part of read only memory


    //dynamic allocation (on the fly)
    int n;
    int *a=new int[n]{0};
    cout<<sizeof(a)<<endl;
    cout<<a<<endl; //variable a that is created inside the static memory-->overwriiten
    //a = new char[30];

    //no change
    for(int i=0;i<n;i++){
        cin>>a[i];
        cout<<a[i]<<" ";

    }
    //freeup the space
    delete [] a;

    return 0;

}