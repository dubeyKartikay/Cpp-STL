#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec;
    vec.push_back(0);
    vec.push_back(2);
    for (auto it : vec){
        cout << it << " ";
    }
    cout << endl;

    vector<int> vec2(4,0); // -> {0,0,0,0}
    vector<int> vec3(4,10);
    // copy vec 2 into a vector
    vector<int> vec4(vec2.begin(),vec2.end());
    //OR
    vector<int> vec5(vec2); 

    //define 10 X 20
    vector < vector <int> > vecct (10 , vector<int>(20,0));

    for (auto vctr : vecct){
        for (auto it : vctr){
            cout << it << " ";
        }

        cout << endl;
    }

}