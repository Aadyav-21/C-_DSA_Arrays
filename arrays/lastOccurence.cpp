#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];

    }
    cout<<"enter x:";
    int x;
    cin>>x;
    int occurence=-1;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            occurence=i;
        }
    }
    cout<<occurence<<endl;
}
//approach 2 can be if we start traversing our array from last we can get last occurence of an element