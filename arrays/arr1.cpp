 #include<iostream>
 using namespace std;
 int main(){
    int arr[]={1,2,3,4};
    int brr[]={1,5,6,7};
    //cout<<arr[1]<<sizeof(arr);
    int size=sizeof(brr)/sizeof(brr[0]);
    for(int i=0;i<size;i++){
       // cout<<arr[size]<<" "<<endl;
    }
    // for each loop
    for (int ele:arr){
        cout<<ele<<endl;
     }
     //taking input from user
     char vowels[5];
     for(int i=0;i<5;i++){
        cin>>vowels[i];

     }
     
 }     