#include<iostream>
#include<string>
using namespace std;

int maine(){
    int x= 10;
    cout<< &x <<endl;

    int y =11;
    cout<<&y<<endl;

    //it does'n work for the character

    char ch='A';
    //using explicit typecasting from char * to void*
    cout<<(void *)&ch <<endl;

    //Pointers
    int *xptr;
    xptr = &x;

    cout<<&x<<endl;
    cout<<xptr<<endl;

    return 0;
}