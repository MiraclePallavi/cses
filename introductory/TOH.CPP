#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, vector<vector<int>>&track,int srcStack, int destStack, int auxStack){
    if(n==1){
        track.push_back({srcStack,  destStack});
        return;
    }
    towerOfHanoi(n-1, track, srcStack,auxStack, destStack);
    track.push_back({srcStack, destStack});
    towerOfHanoi(n-1, track,auxStack,destStack, srcStack);

}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>track;
   int srcStack = 1;
    int auxStack = 2;
    int destStack = 3;
    towerOfHanoi(n, track,srcStack, destStack, auxStack);
    cout<<track.size()<<endl;
    for(auto ele: track){
        cout<<ele[0]<<" "<<ele[1]<<endl;
    }
    return 0;
}