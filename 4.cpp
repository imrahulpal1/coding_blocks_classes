// w a p to generate all the pairs present in an array
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-2;i++){
        for(int j=i+1;j<=n;j++){
            cout<<arr[i]<<" "<<arr[j]<<"  ";
        }
        cout<<endl;
    }
    cout<< endl;

    return 0;
}