#include<iostream>
using namespace std;

int main(){
    int n ,key;
    cin>>n;
    int a[1000];
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    //ask for the element we want to search
    cout<<"enter the element you want to Search: ";
    cin >>key ;

    //find out the index of that elemnt by tracerse
    //Linear Search Algorithim
    int i;
    for( i=0; i<=n-1; i++){
        if(a[i]==key){
            cout<<key<<"found at"<<i<<" index";
            break;
        }
    }
    if (i==n){

        cout<<key<<"is not present "<<endl;
    }

    return 0 ;


}