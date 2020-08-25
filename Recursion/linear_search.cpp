#include<iostream>
using namespace std;

void allOcc(int *a, int i, int n,int key){
    if(i==n){
        return ;
    }
    if(i==key){
        cout<<i<<",";
    }
    allOcc(a,i+1,n,key);
}

int lastOcc(int *a, int n, int key){
    //base case
    if(n==0){
        return -1;
    }
    //recursion case
    int i = lastOcc(a+1,n-1,key);
        if(i==-1){
            if(a[0]==key){
                return 0;
            }
            else{
                return -1;
            }
        }
        //otherwise if i returned by subproblem is not -1
        return i+1;
    
}

int firstOcc(int *a, int n, int key){
    if(n==0){
        return -1;
    }
    //rec case
    if(a[0]==key){
        return 0;
    }

    //recursive call on smaller part
    int i = firstOcc(a+1,n-1,key);
    if(i==-1){
        return -1;
    }
    return i+1;

 }
    int main(){
        int arr[]={1,2,3,4,5,6,7,8,9,7,3};
        int key = 7;
        int n = sizeof(arr)/sizeof(int);
        cout<<firstOcc(arr,n,key)<<endl;
        cout<<lastOcc(arr,n,key)<<endl;
        allOcc(arr,0,n,key);
        return 0;
    }