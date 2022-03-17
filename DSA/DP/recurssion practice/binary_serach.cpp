// #include <bits/stdc++.h>
// #include <stdio.h>
// using namespace std;


// class Solution {
// public:
    
    
    
//     int binarySearch(int *arr, int s, int e, int target){
//         if(s>e){
//             return -1;
//         }
//         int mid = s+(e-s)/2;
//         if(arr[mid] == target){
//             return mid;
//         }
//         if(arr[mid]>k){
//             return binarySearch(arr, s, mid -1, target)
//         }
//        else{
//             return binarySearch(arr, mid +1, e, target)
//         }
//     }
//     int search(vector<int>& nums, int target) {
        
        
//     }
// };
// bool bi(int *arr, int s, int e, int val)
// {
//     if (s > e)
//     {
//         return false;
//     }
//     int mid = s + (e - s) / 2;
//     if (val == arr[mid])
//     {
//         return true;
//     }

//     if (arr[mid] < val)
//     {
//         return bi(arr, mid + 1, e, val);
//     }
//     else if (arr[mid > val])
//     {
//         return bi(arr, s, mid - 1, val);
//     }
// }

// int main()
// {
//     int n = 5;
//     int arr[n] = {1, 2, 3, 4, 5};
//     int val = 10;
//     int s = 0;
//     int e = 4;
//     bool ans = bi(arr, s, e, val);
//     if (ans)
//     {
//         cout << "YES";
//     }
//     else
//     {
//         cout << "NO";
//     }

//     return 0;
// }

