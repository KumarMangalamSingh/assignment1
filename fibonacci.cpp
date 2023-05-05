#include<iostream>
using namespace std;
int fibo(int n){
     int a=0,b=1,c;
    if(n==0){
        return 0;
    }
for(int i=2;i<=n-1;i++){
    c=a+b;
    a=b;
    b=c;
   }

return b;
 }
 int main(){
    int n,fab;
    cout<<"enter n:";
    cin>>n;
    fab=fibo(n);
    printf("%d",fab);
    return 0;
 }
   
