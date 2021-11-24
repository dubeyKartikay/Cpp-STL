#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main (){
    //Last in First out
    //tc is O(1)
    stack<int> st;
    //pop
    //top
    //size
    //empty
    //push and emplace

    st.push(2);
    st.push(3);
    st.push(7);
    st.push(9);
    st.push(20);
  //Always check st.empty() before using st.top 
    cout << st.top() << endl << flush;
    st.pop();
    cout << st.top()<< endl;
    st.pop();
    cout << st.top() << endl;
}