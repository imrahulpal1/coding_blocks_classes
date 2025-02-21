#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;

    // sort(v.begin(),v.end()); // for sorting array
    // sort(v.begin(),v.end(),greater<int>()); // reverse the array 

    vector<vector<int> >v2;
    vector<vector<int> >v3 = {
        {1,2,3,4},
        {5,6,7,8},
        {4,5,6,7}
    };
    cout<< v3.size()<<endl;
    cout<<v3[0].size()<<endl;

    int m= v3.size();
    int n=v3[0].size();

   



}