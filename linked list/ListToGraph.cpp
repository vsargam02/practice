#include<iostream>
#include<list>
using namespace std;

int main(){
    //list of create a graph data structure
    list<pair<int,int> >  *l;  //dynamic list (l is pointer the array list)
    int n;
    cin>>n;

    l =new list<pair<int,int> >[n];
    
    int e; // no of edges
    cin>>e;
    for(int i=0; i<e; i++){
        int x,y,wt;
        cin>>x>>y>>wt;
        l[x].push_back(make_pair(y,wt));
        l[y].push_back(make_pair(x,wt));

    }

    //print the linked list
    for(int i=0; i<n; i++){
        //print every linked list
        cout<<"linked list"<<i<<"->";
        for(auto xp:l[i]){
            cout<<"("<<xp.first<<","<<xp.second<<"),";

        }
        cout<<endl;
    }

}

// 3 3  vertices , edges
// 0 1 4  0 -vertix, 1- connectd, 4 - length
// 0 2 3
// 1 2 4

//ouput
// linked list0->(1.4),(2.3),
// linked list1->(0.4),(2.4),
// linked list2->(0.3),(1.4),