
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    // sort(a.begin(),a.end());
    
    // int sumS=0,sumD=0;
    // for(int i=n-1;i>=0;i-=2)
    // {
    //     sumS=sumS+a[i];
    // }
    // for(int i=n-2;i>=0;i-=2)
    // {
    //     sumD=sumD+a[i];
    // }
    // cout<<sumS<<" "<<sumD;
     
     int s1=0; 
     int s2=0;

     bool serejaTurn =true;
     int lo=0;
     int hi=n-1;
     while(lo<=hi){
     if(serejaTurn){
        if(v[lo]> v[hi]){
            s1+=v[lo];
            lo++;
        }else{
            s1+=v[hi];
            hi--;
        }
        serejaTurn = false;
     }else{
        if(v[lo]>v[hi]){
            s2+=v[lo];
            lo++;
        }else{
            s2+=v[hi];
            hi--;
        }
        serejaTurn =true;
     }

     }
     cout<< s1 <<" "<<s2 <<endl;


}