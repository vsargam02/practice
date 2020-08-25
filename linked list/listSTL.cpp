#include<iostream>
#include<list>
using namespace std;

int main(){
    //create a list
    list<int> l;

    //initialize
    list<string> l2{"apple","guava","mango","banana"};
    //insert at the tail
    l2.push_back("pineapple");

    //sort
    l2.sort();

    //reverse
    l2.reverse();

    //pop_front
    cout<<l2.front()<<endl;
    l2.pop_front();

    //add to the front the list
    l2.push_front("kiwi");
    cout<<l2.back()<<endl;
    l2.pop_back();


    //iterate over the list and print the data
    for(auto it =l2.begin(); it!=l2.end(); it++){
        cout<<(*it)<<" -> ";
    }
    cout<<endl;

    for(auto s:l2){
        cout<<s<<"-->";
    }

    //some more functions in the list
    l2.push_back("orange");
    l2.push_back("guava");
    for(string s:l2){
        cout<<s<<"-->";
    }
    cout<<endl;
    //remove a fruit
    string f;
    //cin>>f;
    //l2.remove(f);

    for(string s:l2){
        cout<<s<<"-->";
    }

    //erase one or more elements
    auto it = l2.begin();
    it++;
    it++;
    l2.erase(it);

    for(string s:l2){
        cout<<s<<"-->";
    }
    cout<<endl;

    //we can insert element in the list
    it = l2.begin();
    it++;
    l2.insert(it,"fruitjuice");

    for(string s:l2){
        cout<<s<<"-->";
    }
     





    return 0;
}