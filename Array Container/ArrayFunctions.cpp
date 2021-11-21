#include<bits/stdc++.h>
using namespace std;
int main(){
    array<int,5> arra; //declaring like like return a class while int arr[5] return a int*
    arra.fill(5);      // array class has handy functions
    


    //interators
    //begin()->points to the first element
    //,end()-> points to the address of last + 1 element
    //,rbegin() -> oints to the address of last element
    //,rend()-> points right before the first element

    array<int,5> arr = {1,23,45,6};

    for ( auto it = arr.begin(); it!=arr.end(); it++ ){
        cout << *it << " ";
        
    }
    cout << endl;

    for ( auto it = arr.rbegin() ; it!=arr.rend() ;it++ ){       // print arry in reverse
        cout << *it << " ";

    }
    cout << endl;

    for (auto it : arr){         // for each loop
        cout << it << endl;
    }

    

    cout<< arr.back() << endl;
    cout<< arr.front() << endl;
    cout<< arr.size() << endl;
    cout << arr.at(0) <<endl;
 }