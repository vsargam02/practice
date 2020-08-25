#include<iostream>
using namespace std;

void spiralprint(int a[][1000],int m,int n){
    int startRow = 0;
    int startCol = 0;
    int endRow = m-1;
    int endCol = n-1;

    while(startRow <=endRow and startCol<=endCol){
        for(int i = startCol; i<=endCol; i++){
            cout<<a[startRow][i]<<" ";
        }
        startRow ++;
        for(int i = startRow; i<=endRow; i++){
            cout<<a[i][endCol]<<" ";
        }
        endCol --;

        //bottom row
        if(endRow>startRow){
        for(int i=endCol; i>=startCol; i--){
            cout<< a[endRow][i]<<" ";
        
        }
        endRow--;
        }

        //start col
        if(endCol>startRow){
         for(int i=endRow; i>=startCol; i--){
            cout<< a[endRow][i]<<" ";
        }
        endCol--;
        }
    }

}
int main(){
    int a[1000][1000]={0};
    int m,n;
    cin>>m>>n;

    //iterate over the array
    int val =1;

    for(int row=0; row<=m-1; row++){
        for(int col=0; col<=n-1; col++){
            a[row][col] = val;
            val = val+1;
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
   spiralprint(a,m,n);


    return 0 ;
    }