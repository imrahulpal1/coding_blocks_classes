#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++){
       cin>>v[i];
   }
   vector<int>ans;
   int nul=1;
   for(int i=0;i<n;i++){
     
      for(int j=0;j<n;j++){
        if(i!=j)
          nul=nul*v[j];
      }
      
   }
  
    return 0;
}