#include <bits/stdc++.h>
using namespace std;

int main(){
    // set stores unique values stored in accending order
    // givenn n elements tell me the number of unique elements
    set<int> st;
    int n;
    cin  >> n;
    int x;
    for (size_t i = 0; i < n; i++)
    {
        cin >> x ;
        st.insert(x);                 //since set containes unique value st.size() will give the answer

    }
    
    // set -> {1,2,5}
    // erase functionality

    st.erase(st.begin()); //set.erase(iterator) // st -> {2,5}

    st.insert(4);

    // st.erase(st.begin(),st.begin()+2); // -> {}
    // st.erase(startIterator, endIterator)

    st.insert(4);

    st.erase(4); // -> {}
//  st.erase(key)  

    set<int> s = {1,2,7,3,35};

    auto it = st.find(35) ;

    unordered_set<int> ut;

    ut.insert(1);
    ut.insert(2);
    ut.insert(7);
    ut.insert(5);
    // we dont know the order of the values stored.
    //time complexity => O(1) <= TC <= O(n)

    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    ms.insert(7);
    ms.insert(7);
    ms.insert(5);

    // ms = {1,1,1,2,2,2,5,7,7} accending sorted  
}