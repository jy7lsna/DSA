// BRUTE SOLUTION

// #include<bits/stdc++.h>
// using namespace std;

// vector<int> moveZeroes(vector<int> a, int n){
//     vector<int> temp;
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         if (a[i] != 0)
//         {
//             /* code */
//             temp.push_back(a[i]);
//         }
//     }

//     int nz = temp.size();
//     for (int i = 0; i < nz; i++)
//     {
//         /* code */
//         a[i] = temp[i];
//     }

//     for (int i = nz; i < n; i++)
//     {
//         /* code */
//         a[i] = 0;
//     }
// }

// int main(){
//     return 0;
// }

// OPTIMAL SOLUTION
// #include<bits/stdc++.h>
// using namespace std;

// vector<int> moveZeroes(vector<int> a, int n){
    
//     int j = -1;
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         if (a[i] == 0)
//         {
//             /* code */
//             j=i;
//             break;
//         }
        
//     }

//     if(j==-1) return a;

//     for (int i = j+1; i < n; i++)
//     {
//         /* code */
//         if (a[i]!=0)
//         {
//             /* code */
//             swap(a[i], a[j]);
//             j++;
//         }       
//     }

//     return a;
    
    
// }

// int main(){
//     return 0;
// }

// leetcode simplest ans

void moveZeroes(vector<int> &a, int n){
    int i=0;
    for (int j= 0; i < n; j++)
    {
        /* code */
        if (a[i]!=0)
        {
            /* code */
            swap(a[j], a[i]);
            i++;
        }
        
    }
    
}