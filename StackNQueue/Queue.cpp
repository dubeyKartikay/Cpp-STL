#include<bits/stdc++.h>
using namespace std;
int main(){
    //first in first out
    queue<int> tq;
    tq.push(1);
    tq.push(2);
    tq.push(45);
    tq.push(4);
    tq.push(9);

    cout << tq.front()<< endl;
}