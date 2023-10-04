#include<iostream>
using namespace std;
int main(){
    int n , max=0 ;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    cout<<"enter the elements of the array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;

}