#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &a, int n){
    int i=0;
    for (int j = 1; i < n; j++)
    {
        /* code */
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
    
}

int main(){
    return 0;
}