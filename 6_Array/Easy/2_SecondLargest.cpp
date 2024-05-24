#include<bits/stdc++.h>
using namespace std;

void secondLargest(vector<int> &a, int n){
    int largest = a[i];
    int slargest = -1;
    for(int i=0; in; i++){
        if (a[i]>largest)
        {
            /* code */
            slargest = largest;
            largest = a[i];
        }
        else if(a[i]<largest && a[i]>slargest){
            slargest = a[i];
        }
    }
    return slargest;
}

void secondSmallest(vector<int> &a, int n){
    int smallest = a[i];
    int ssmallest = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        /* code */
        if (a[i]<smallest)
        {
            /* code */
            ssmallest = smallest;
            smallest = a[i];
        }
        else if(a[i] != smallest && a[i]<ssmallest){
            ssmallest = a[i];
        }
    }
    return ssmalest;
}

vector<int> getSecondOrderElements
(int n, vector<int> &a){
int slargest = secondLargest(a, n);
int ssmallest = secondSmallest(a, n);
return slargest, ssmallest; 
}