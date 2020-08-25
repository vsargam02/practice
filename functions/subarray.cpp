#include<iostream>
using namespace std;

//SUBARRAY

// int main(){
//     int n;
//     cin>>n;
//     int a[1000];

//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     for(int i=0;i<n;i++){
//         for(int j=1; j<n;j++){
//             for(int k = i; k<=j;k++){
//                 cout<<a[k]<<",";
//             }
//             cout<<endl;
//         }
//     }
//     return 0;
// }



//SUM OF SUBARRAY LARGEST

// int main(){
//     int n;
//     cin>>n;
//     int maximunSum=0;
//     int currentSum=0;
//     int left =-1;
//     int right = -1;
//     int a[1000];

//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     for(int i=0;i<n;i++){
//         for(int j=1; j<n;j++){

//             currentSum=0;
//             for(int k = i; k<=j;k++){
//                 currentSum+=a[k]; 
//             }
//             if(currentSum>maximunSum){
//                 maximunSum=currentSum;
//                 left =i;
//                 right = j;
//             }
           
//         }
         
//     }
//     cout<<"maximun sum is"<<maximunSum<<endl;

//     for(int k =left; k<=right;k++){
//         cout<<a[k]<<',';
//     }
   
//     return 0;
// }

//OPTIMIZED VERSION

int main(){
    int n;
    cin>>n;
    int cumSum[1000]={0};
    int maximunSum=0;
    int currentSum=0;
    int left =-1;
    int right = -1;
    int a[1000];
    

    cin>>a[0];
    cumSum[0]=a[0];

    for(int i=1;i<n;i++){
        cin>>a[i];
        cumSum[i] =cumSum[i-1] +a[i];
    }

    for(int i=0;i<n;i++){
        for(int j=1; j<n;j++){

            currentSum=0;

            currentSum = cumSum[j]-cumSum[i-1];
            if(currentSum>maximunSum){
                maximunSum=currentSum;
                left =i;
                right = j;
            }
           
        }
         
    }
    cout<<"maximun sum is"<<maximunSum<<endl;

    for(int k =left; k<=right;k++){
        cout<<a[k]<<',';
    }
   
    return 0;
}

