#include <bits/stdc++.h>
using namespace std;

int main(){
    // Key Value
    // keys are unique 
    // Sorted by kesy in accending order
    // TC of map is log(n)
    map<string ,int> mpp;
    mpp["kartik"] = 18;
    mpp["dhruv"] = 14;
    mpp["sandeep"] = 13;
    mpp["tank"] = 89;

    if (mpp.empty())
    {
        cout << "Yes it is empty" << endl;
    }

    for (auto it : mpp){
        cout << it.first << " : " << it.second << endl;
    }

    for (auto it = mpp.begin() ; it != mpp.end(); it++){
        cout << it->first << " : " << it->second << endl;
    }
    

}