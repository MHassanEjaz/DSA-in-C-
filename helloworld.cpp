// #include<iostream>
// using namespace std;
// int main(){

// cout << "Hello World";
// cout << "Welcome to Git Hub";
// cout << "Let's Check";
// cout << "Add Some Further code";

// cout << "Hello World";
// cout << "Welcome to Git Hub";
// cout << "Let's Check";
// cout << "Add Some Further code";
// return 0;
// }



// #include<iostream>
// #include<vector>
// using namespace std;
// int binarysearch(vector<int> arr, int target){
// int start = 0;
// int end = arr.size()-1;
// while (start <= end){
//     int mid = start + end/2;
//     if (target > arr[mid]){
//         start = mid +1;
//     }
//     else if(target < arr[mid]){
//         end = mid -1;
//     }
//     else{
//         return mid;
//     }
// }
// return -1;
// }

// with recursion
// int recbinarysearch(vector<int> arr, int target, int start, int end){
// if (start <= end){
//     int mid = start + (end-start)/2;
//     if (target > arr[mid]){
//         return recbinarysearch(arr, target, mid+1, end);
//     }
//     else if(target < arr[mid]){
//         return recbinarysearch(arr, target, start, mid-1);
//     }
//     else{
//         return mid;
//     }
// }
// return -1;
// }

// int main(){
// // Binary Search
// vector<int> arr = {-1,0,3,4,5,9,12};
// int target = 3;
// cout << recbinarysearch(arr, target) << endl;
// return 0;
// }


//  Search in Rotated Sorted Array
// #include<iostream>
// #include<vector>
// using namespace std;
// int binarysearch(vector<int>& arr, int target){
// int start = 0;
// int end = arr.size()-1;
// while (start <= end){
//     int mid = start + (end-start)/2;
//     if (arr[mid] == target){
//         return mid;
//     }
//     if(arr[start] <= arr[mid]){
//         if(arr[start] <= target && target <= arr[mid]){
//             end = mid -1;
//         } else{
//             start = mid + 1;
//         }
//     }
//     else {
//         if(arr[mid] <= target && target <= arr[end]){
//             start = mid + 1;
//         } else {
//             end = mid - 1; 
//         }

//     }   
// }
// }
 
        

// int main(){
//     //  Search in Rotated Sorted Array
//     vector<int> arr = {4,5,6,7,0,1,2};
// int target = 3;
// int result = binarysearch(arr, target);
// cout << result << endl;
    
//     return 0;
// }



//  peak Index in Mountain Array
// #include<iostream>
// #include<vector>
// using namespace std;
// int peakindexmountainarray(vector<int>& arr){
//     int start = 1;
//     int end = arr.size()-2;
//     while (start < end){
//         int mid = start + (end-start)/2;
//         if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
//             return mid;
//         } else if( arr[mid-1] < arr[mid]){
//             start = mid + 1;
//         } else {
//             end = mid - 1;
//         }
//         }
//         return -1;
//     }


// int main(){ 
//     vector<int> arr = {4,5,6,8,9,3,2};
//     int result = peakindexmountainarray(arr);
//     cout << result << endl;
    
//     return 0;
// }




// Single Element in Sorted Array
// #include<iostream>
// #include<vector>
// using namespace std;
// int singleelementinsortedarray(vector<int>& arr){
//     int n = arr.size();
//     if(n==1) return arr[0];
// int start = 1;
// int end = arr.size()-2;
//     while (start <= end){
//         int mid = start + (end-start)/2;
//         if(mid == 0 && arr[0] != arr[1]) return arr[mid];
//         if(mid == n-1 && arr[n-1] != arr[n-2]) return arr[mid];
//         if(arr[mid-1] != arr[mid] && arr[mid] != arr[mid+1]) return arr[mid];
//         if(mid % 2 == 0){
//             if(arr[mid-1] == arr[mid]){
//                 end = mid - 1;
//             } else {
//                 start = mid + 1;
//             }
//         } else {
//             if(arr[mid-1] == arr[mid]){
//                 start = mid + 1;
//             } else {
//                 end = mid - 1;
//             }
//         }
//         return -1;
//     }
// }
// int main(){
//     vector<int> arr = {1,1,2,3,3,4,4,5,5};
//     int result = singleelementinsortedarray(arr);
//     cout << result << endl;

//  return 0;
// }



// // Book Allocation Problem
// #include<iostream>
// #include<vector>
// using namespace std;
// bool isvalid(vector<int>& arr, int n, int m, int maxallowedpages){
//     int std = 1;
//     int pages = 0;
//     for (int i=0;i<n;i++){
//         if(arr[i] > maxallowedpages){
//             return false;
//         }

//         if(pages + arr[i] <= maxallowedpages){
//             pages += arr[i];
//         } else {
//             std++;
//             pages = arr[i];
//         }
//     }
//     return std > m ? false : true;
// }
// int allocatebook(vector<int>& arr, int n, int m){
//     if (m>n){
//         return -1;
//     }
//     int sum = 0;
//     for(int i=0;i<n;i++){
//         sum += arr[i];
//     }
//     int start =0;
//     int end = sum;
//     int ans = -1;
//     while(start <= end){
//         int mid = start + (end - start)/2;
//         if(isvalid(arr, n, m, mid)){
//             ans = mid;
//             end = mid - 1;
//         } else {
//             start = mid + 1;
//         }
//     }
// }


// int main(){
//     vector<int> arr = {2,1,3,4};
//     int n = 4, m = 5;
//     cout << allocatebook(arr, n, m);
//  return 0;
// }





// Painters Partition Problem
// #include<iostream>
// #include<vector>
// using namespace std;
// bool ispossible(vector<int>& arr, int n, int m, int maxallowedtime){
//     int painters = 1;
//     int time = 0;
//     for (int i=0;i<n;i++){
//         if (arr[i] > maxallowedtime) return false;
//         if(time + arr[i] <= maxallowedtime){
//             time += arr[i];
//         } else {
//             painters++;
//             time = arr[i];
//         }

        
//     }
//     return painters <= m;
// }
// int mintimetopaint(vector<int>& arr, int n, int m){
//     int sum = 0;
//     int maxvalue = INT32_MIN;
//     for(int i=0;i<n;i++){
//         sum += arr[i];
//         maxvalue = max(maxvalue, arr[i]);
//     }
//     int start = maxvalue;
//     int end = sum;
//     int ans = -1;
//     while(start <= end){
//         int mid = start + (end - start)/2;
//         if(ispossible(arr, n, m, mid)){  // left
//             ans = mid;
//             end = mid - 1;
//         } else {   // right
//             start = mid + 1;
//         }
//     }
//     return ans;
// }


// int main(){
//     vector<int> arr = {40,30,10,20};
//     int n = 4, m = 5;
//     cout << mintimetopaint(arr, n, m);
//  return 0;
// }







// Aggressive Cows Problem
// #include<iostream>
// #include<vector>
// #include<algorithm> // for sort
// using namespace std;

// bool isPossible(vector<int>& arr, int n, int c, int minAllowedDistance) {
//     int cows = 1;
//     int lastStallPosition = arr[0];

//     for (int i = 1; i < n; i++) {
//         if (arr[i] - lastStallPosition >= minAllowedDistance) {
//             cows++;
//             lastStallPosition = arr[i];
//         }
//         if (cows == c) {
//             return true;
//         }
//     }
//     return false;
// }

// int getDistance(vector<int>& arr, int n, int c) {
//     sort(arr.begin(), arr.end()); // Fix typo

//     int start = 1;
//     int end = arr[n - 1] - arr[0]; // max - min
//     int ans = -1;

//     while (start <= end) {
//         int mid = start + (end - start) / 2;

//         if (isPossible(arr, n, c, mid)) {
//             ans = mid;       // try for a bigger distance
//             start = mid + 1;
//         } else {
//             end = mid - 1;   // reduce distance
//         }
//     }

//     return ans;
// }

// int main() {
//     int n = 5;
//     int c = 3;
//     vector<int> arr = {1, 2, 8, 4, 9};

//     cout << "Largest minimum distance: " << getDistance(arr, n, c) << endl;

//     return 0;
// }



// Stack Data Structure
#include<iostream>
#include<vector>
using namespace std;
int main(){


    return 0;
}

    





