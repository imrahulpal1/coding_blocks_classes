#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int temp=a[lo];
        a[lo]=a[hi];
        a[hi]=temp;
        lo++;
        hi--;

        
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}