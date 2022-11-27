#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int t[n][2];
    for(int i=0;i<n;i++){
        cin>>t[i][0]>>t[i][1];   //read the position and the height of the i'th tree
    }
    if(n<=2)
    {
     cout<<n;
     return 0;
    }     // if the number of trees<= 2 woodcutters can cut all the trees
    int s=2;                          // if the number of trees> 2 woodcutters can cut the first and the last tree
    for(int i=1;i<n-1;i++){        //this loop is to check the others trees
        if(t[i][0]-t[i][1]>t[i-1][0]){s++;}  //check if we can cut the tree and fell it to the left
        else if(t[i][0]+t[i][1]<t[i+1][0]){t[i][0]=t[i][0]+t[i][1];s++;} //check if we can cut the tree and fell it to the right. if yes change the current position of the tree to the last cordinate after feling it dowbn
    }
    cout<<s;
        }
