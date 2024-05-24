#include<bits/stdc++.h>
using namespace std;

void factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
        cout<<fact<<endl;
    }
    
}

int main(){
    int n;
    cin>>n;
    factorial(n);
    return 0;
}

// 2nd method
// factorial(n) = n * factorial(n-1) 

#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n-1);
    
}

int main(){
    int n;
    cin>>n;
    cout<<factorial(n)<<factorial(n);
    return 0;
}