#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    // int target=6;
    // int sum=0;
    
    int count =0;
        vector<int> v(n);
     for(int i=0;i<n;i++){
        cin>>v[i];
    }
    // for(int i=0;i<=n-2;i++){
    //     for(int j=i+1;j<=n-1;j++){
    //     sum=v[i]+v[j];
    // if(sum==target)
    //    count++;
    //     }
        
    // }
    // cout<<count<<" ";


    int target;
    cin>> target;
    int sum=0;
    int i=0,j=n-1;
    while(i<j){
        sum=v[i]+v[j];
        if(sum==target){
            count++;
            i++;
            j--;
        }else if(sum>target){
            j--;
        }else{
            i++;
        }
    }
    cout<<count<<endl;
    return 0;
    

}
