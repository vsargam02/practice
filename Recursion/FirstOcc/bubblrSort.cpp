#include<iostream>
using namespace std;

//bublesort ecursively
void bubble_sort(int a[], int n){
    //base case
    if(n==1){
        return ;
    }

    //rec case
    //afte you have moved the largest element in the current part to the end of the array by pairwise swapping
    for(int j=0; j<n-1; j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
    }
    //sort the first n-1 elements
    bubble_sort(a,n-1);
}

void bubble_sort_recursive(int a[],int j,int n){
    //base case
    if(n==1){
        return;
    }
    if(j==n-1){
        //single pass of the current array has end
        return bubble_sort_recursive(a,0,n-1); // starting from index 0 and goes to n-1

    } 
    //rec case
    if(a[j]>a[j+1]){
        swap(a[j],a[j+1]);
    }
    bubble_sort_recursive(a,j+1,n);
    return;
}

//main
int main(){
    int a[]={5,4,3,1,2};
    int n =5;
}