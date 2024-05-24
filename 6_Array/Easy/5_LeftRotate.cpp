#include<bits/stdc++.h>
using namespace std;

void rotateArray(vector<int> &arr, int n){
    int temp = arr[0];
    for (int i = 0; i < n; i++)
    {
        /* code */
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    return arr;
}

int main(){
    return 0;
}