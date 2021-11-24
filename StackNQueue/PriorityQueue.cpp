#include<bits/stdc++.h>
using namespace std;
int main(){
    // Stores Maximun element at the top
    // TC is O(log(n))
    priority_queue<int> pq;
    pq.push(3);    
    pq.push(7);    
    pq.push(13);    
    pq.push(23);    
    pq.push(1);

    cout << pq.top()<<endl;



}