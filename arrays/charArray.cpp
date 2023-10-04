#include<iostream>
using namespace std;
bool palindrome(char a[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(a[s]!=a[e])return 0;
        else{
            s++;
            e--;
        }
    }
    return 1;
}
void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}
int len(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char array[12];
    //cout<<"enter the size of the array"<<endl;
    cin>>array;
    cout<<array<<endl;
    //length of string
    cout<<len(array);

}