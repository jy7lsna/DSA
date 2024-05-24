#include<bits/stdc++.h>
using namespace std;

void leftRotate(vector<int> &a, int n, int d){
    int temp[d];

    for (int i = 0; i < d; i++)
    {
        /* code */
        temp[i] = a[i];
    }

    for (int i = d; i < n; i++)
    {
        /* code */
        a[i-d] = a[i];
    }

    for (int i = n-d; i < n; i++)
    {
        /* code */
        a[i] = temp[i-(n-d)];
    }
    
    
    
}

int main(){
    return 0;
}