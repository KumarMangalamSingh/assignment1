#include<iostream>
using namespace std;
int main(){
    int arr[100],n,i,max,min;
    cout<<"Enter n:";
    cin>>n;
    for(i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    max=arr[0];
    min=arr[0];
    for(i=0;i<=n-1;i++){
    if(min>arr[i]){
        min=arr[i];
  
    }
     if(max<arr[i]){
        max=arr[i];
        
    }  
    }
printf("max elemnet=%d",max);
printf("\nmin elemnt=%d",min);    
    return 0;
    }
