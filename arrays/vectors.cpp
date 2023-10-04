#include<iostream>
#include<vector>
using namespace std;
// vectors practise program
//vectors-dynamic array
int main(){
    vector<int> aadya;
    vector<int> v(5);
    //to find length of the vector
    cout<<v.size();
    v.push_back(99);
    v.push_back(76);
    for(int i=0;i<5;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    for(int i=0;i<aadya.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;

}