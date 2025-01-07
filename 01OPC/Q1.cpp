#include<bits/stdc++.h>


#define ll long long


using namespace std;


void solve(int L,int B,int H,int S){
    ll volumeCuboid = L*B*H;
    ll volumeCube = S*S*S;
    if( volumeCuboid < volumeCube)
        cout<<"CUBOID"<<endl;
    else if( volumeCuboid > volumeCube)
        cout<<"CUBE"<<endl;
    else   cout<<"EQUAL"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases;
    cin>>testcases;
    while (testcases--)
    {
        int L,B,H,S;
        cin>>L;
        cin>>B;
        cin>>H;
        cin>>S;
         solve(L,B,H,S);
    }
    
   
    return 0;
}