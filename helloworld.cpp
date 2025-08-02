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



#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int>& arr, int target){
int start = 0;
int end = arr.size()-1;
while (start <= end){
    int mid = start + (end-start)/2;
    if (arr[mid] == target){
        return mid;
    }
    if(arr[start] <= arr[mid]){
        if(arr[start] <= target && target <= arr[mid]){
            end = mid -1;
        } else{
            start = mid + 1;
        }
    }
    else {
        if(arr[mid] <= target && target <= arr[end]){
            start = mid + 1;
        } else {
            end = mid - 1; 
        }

    }   
}
}
 
        

int main(){
    //  Search in Rotated Sorted Array
    vector<int> arr = {4,5,6,7,0,1,2};
int target = 3;
int result = binarysearch(arr, target);
cout << result << endl;
    
    return 0;
}


