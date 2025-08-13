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
// with vector
// #include<iostream>
// #include<vector>
// using namespace std;
// class Stack {
// vector<int> v;
// public:
// void push(int val){
//     v.push_back(val);
// }

// void pop(){
//     v.pop_back();
// }

// int top(){
//     return v[v.size()-1];
// }

// bool isempty(){
//     return v.size() == 0;
// }

// };
// int main(){
// Stack s;
// s.push(10);
// s.push(20);
// s.push(30);
// while(!s.isempty()){
//     cout << s.top() << " ";
//     s.pop();
// }
// cout << endl;

    


//     return 0;
// }

    
//  with STL
// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;
// int main(){
//     stack<int> s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     while(!s.empty()){
//         cout << s.top() << " ";
//         s.pop();
//     }
//     cout << endl;

//     return 0;
// }





// Basic Stack Implementation
// #include <iostream>
// using namespace std;

// const int MAX = 10; // stack capacity
// int arr[MAX];
// int top = -1; // stack starts empty

// bool isFull() {
//     return top == MAX - 1;
// }

// bool isEmpty() {
//     return top == -1;
// }

// void push(int val) {
//     if (isFull()) {
//         cout << "Stack Overflow.\n";
//     } else {
//         arr[++top] = val; // increment first, then insert
//         cout << val << " pushed.\n";
//     }
// }

// int pop() {
//     if (isEmpty()) {
//         cout << "Stack Underflow.\n";
//         return -1; // return an invalid value
//     } else {
//         return arr[top--]; // return value, then decrement top
//     }
// }

// int main() {
//     push(10);
//     push(20);
//     push(30);

//     cout << "Popped: " << pop() << endl;
//     cout << "Popped: " << pop() << endl;
//     cout << "Popped: " << pop() << endl;
//     cout << "Popped: " << pop() << endl; // underflow

//     return 0;
// }


//  with class
// #include <iostream>
// using namespace std;


// class Stack {
// protected:
//     int* stackarray;
//     int maxsize;
//     int top;

// public:
//     Stack(int size) {
//         stackarray = new int[size];
//         maxsize = size;
//         top = -1;
//     }

//     virtual void push(int val) = 0; // pure virtual
//     virtual int pop() = 0;          // pure virtual

//     virtual ~Stack() {
//         delete[] stackarray;
//     }
// };


// class mystack : public Stack {
// public:
//     mystack(int size) : Stack(size) {}

    
//     void push(int val) override {
//         if (full()) {
//             cout << "Stack Overflow.\n";
//         } else {
//             stackarray[++top] = val;
//             cout << val << " pushed.\n";
//         }
//     }

    
//     int pop() override {
//         if (empty()) {
//             cout << "Stack Underflow.\n";
//             return -1;
//         } else {
//             return stackarray[top--];
//         }
//     }

   
//     bool full() {
//         return top == maxsize - 1;
//     }

    
//     bool empty() {
//         return top == -1;
//     }

    
//     int size() {
//         return top + 1;
//     }

   
//     int peek() {
//         if (empty()) {
//             cout << "Stack is empty.\n";
//             return -1;
//         }
//         return stackarray[top];
//     }

   
//     void display() {
//         if (empty()) {
//             cout << "Stack is empty.\n";
//         } else {
//             cout << "Stack elements (top to bottom): ";
//             for (int i = top; i >= 0; i--) {
//                 cout << stackarray[i] << " ";
//             }
//             cout << endl;
//         }
//     }

 
//     void countEvenOdd() {
//         int evenCount = 0, oddCount = 0;
//         for (int i = 0; i <= top; i++) {
//             if (stackarray[i] % 2 == 0)
//                 evenCount++;
//             else
//                 oddCount++;
//         }
//         cout << "Even numbers: " << evenCount << endl;
//         cout << "Odd numbers: " << oddCount << endl;
//     }

//     int SumOfOddNumbers() {
//         int sum = 0;
//         for (int i = 0; i <= top; i++) {
//             if (stackarray[i] % 2 != 0)
//                 sum += stackarray[i];
//         }
//         return sum;
//     }
// };

// int main() {
//     mystack s(5);

//     s.push(10);
//     s.push(15);
//     s.push(20);
//     s.push(25);
//     s.push(30);
//     s.push(35); // overflow

//     s.display();
//     cout << "Top element: " << s.peek() << endl;
//     cout << "Current size: " << s.size() << endl;

//     s.countEvenOdd();
//     cout << "Sum of odd numbers: " << s.SumOfOddNumbers() << endl;

//     cout << "Popped: " << s.pop() << endl;
//     s.display();

//     return 0;
// }


// reverse string with simple array
// #include <iostream>
// using namespace std;

// string reverseString(string str) {
//     int start = 0;
//     int end = str.length() - 1;
//     while (start < end) {
//         swap(str[start], str[end]);
//         start++;
//         end--;
//     }
//     return str;
// }

// int main() {
//     string str = "kishan";
//     string result = reverseString(str);
//     cout << result << endl; // Output: nahsik
//     return 0;
// }



// reverse string using stack
// #include <iostream>
// #include <stack>
// #include <string>
// using namespace std;

// int main() {
//     string input;
//     cout << "Enter a string: ";
//     cin >> input;

//     stack<char> s;

//     for (char c : input) {
//         s.push(c);
//     }

//     string reversed = "";
//     while (!s.empty()) {
//         reversed += s.top();
//         s.pop();
//     }

//     cout << "Reversed string: " << reversed << endl;

//     return 0;
// }



// automatically resizes when full.
// #include <iostream>
// using namespace std;

// class DynamicStack {
// private:
//     int* arr;       // pointer to the stack array
//     int top;        // index of top element
//     int capacity;   // current capacity of stack

//     void resize() {
//         capacity *= 2; // double the size
//         int* newArr = new int[capacity];
//         for (int i = 0; i <= top; i++) {
//             newArr[i] = arr[i];
//         }
//         delete[] arr; // free old memory
//         arr = newArr;
//         cout << "Capacity increased to: " << capacity << endl;
//     }

// public:
//     DynamicStack(int cap = 4) {
//         capacity = cap;
//         arr = new int[capacity];
//         top = -1;
//     }

//     void push(int value) {
//         if (top + 1 == capacity) {
//             resize();
//         }
//         arr[++top] = value;
//     }

//     int pop() {
//         if (top == -1) {
//             cout << "Stack Underflow" << endl;
//             return -1;
//         }
//         return arr[top--];
//     }

//     int peek() {
//         if (top == -1) {
//             cout << "Stack is empty" << endl;
//             return -1;
//         }
//         return arr[top];
//     }

//     int size() {
//         return top + 1;
//     }

//     int getCapacity() {
//         return capacity;
//     }

//     ~DynamicStack() {
//         delete[] arr;
//     }
// };

// int main() {
//     DynamicStack st;

//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4); // capacity = 4
//     st.push(5); // triggers resize → capacity = 8

//     cout << "Top element: " << st.peek() << endl;
//     cout << "Stack size: " << st.size() << endl;
//     cout << "Stack capacity: " << st.getCapacity() << endl;

//     return 0;
// }



// Check for Palindrome Using Stack
// #include <iostream>
// using namespace std;

// class Stack {
// private:
//     char* arr;
//     int top;
//     int capacity;

// public:
//     Stack(int size) {
//         capacity = size;
//         arr = new char[capacity];
//         top = -1;
//     }

//     void push(char ch) {
//         arr[++top] = ch;
//     }

//     char pop() {
//         return arr[top--];
//     }

//     bool isEmpty() {
//         return top == -1;
//     }

//     ~Stack() {
//         delete[] arr;
//     }
// };

// bool isPalindrome(string str) {
//     Stack st(str.length());

//     // Push all characters to stack
//     for (char ch : str) {
//         st.push(ch);
//     }

//     // Compare popping with original
//     for (char ch : str) {
//         if (ch != st.pop()) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     string word;
//     cout << "Enter a word: ";
//     cin >> word;

//     if (isPalindrome(word)) {
//         cout << "Palindrome" << endl;
//     } else {
//         cout << "Not Palindrome" << endl;
//     }

//     return 0;
// }





// Sort a Stack Using Another Stack
// #include <iostream>
// using namespace std;

// class Stack {
// private:
//     int* arr;
//     int top;
//     int capacity;

// public:
//     Stack(int size) {
//         capacity = size;
//         arr = new int[capacity];
//         top = -1;
//     }

//     void push(int value) {
//         arr[++top] = value;
//     }

//     int pop() {
//         return arr[top--];
//     }

//     int peek() {
//         return arr[top];
//     }

//     bool isEmpty() {
//         return top == -1;
//     }

//     ~Stack() {
//         delete[] arr;
//     }
// };

// void sortStack(Stack &original, int size) {
//     Stack temp(size);

//     while (!original.isEmpty()) {
//         int current = original.pop();

//         // Move elements from temp back to original until correct position found
//         while (!temp.isEmpty() && temp.peek() > current) {
//             original.push(temp.pop());
//         }

//         temp.push(current);
//     }

//     // Copy back to original
//     while (!temp.isEmpty()) {
//         original.push(temp.pop());
//     }
// }

// int main() {
//     Stack st(10);
//     st.push(34);
//     st.push(3);
//     st.push(31);
//     st.push(98);
//     st.push(92);
//     st.push(23);

//     sortStack(st, 10);

//     cout << "Sorted stack (top to bottom): ";
//     while (!st.isEmpty()) {
//         cout << st.pop() << " ";
//     }
//     cout << endl;

//     return 0;
// }





// Valid Parentheses
// #include<iostream>
// #include<stack>
// #include<string>
// using namespace std;

// bool isvalid(string str) {
//     stack<char> st;

//     for (int i = 0; i < str.length(); i++) {
//         char ch = str[i];

//         if (ch == '(' || ch == '{' || ch == '[') {
//             st.push(ch);
//         } else {
//             if (st.empty()) return false;

//             if ((ch == ')' && st.top() == '(') ||
//                 (ch == '}' && st.top() == '{') ||
//                 (ch == ']' && st.top() == '[')) {
//                 st.pop();
//             } else {
//                 return false;
//             }
//         }
//     }

//     return st.empty();
// }

// int main() {
//     string input;
//     cout << "Enter a string of brackets: ";
//     cin >> input;

//     if (isvalid(input)) {
//         cout << "Valid expression (balanced brackets)." << endl;
//     } else {
//         cout << "Invalid expression (unbalanced brackets)." << endl;
//     }

//     return 0;
// }




// Stock Span Problem
// #include<iostream>
// #include<stack>
// #include<vector>
// using namespace std;
// int main() {

//     vector<int> price = {100, 80, 60, 70, 60,75,85};
//     vector<int> ans(price.size(), 0);
//     stack<int> s;
//     for(int i=0;i<price.size();i++){
//         while(s.size() > 0 && price[s.top()] <= price[i]){
//                 s.pop();
//             }
//             if(s.empty()){
//                 ans[i] = i+1;
//             } else {
//                 ans[i] = i-s.top();
//             }
//             s.push(i);
//          }    
//          for(int val : ans){
//             cout << val << " ";
//          }

//     return 0;
// }



// Two Stack in an array
// #include<iostream>
// #include<stack>
// using namespace std; 
// class twostack{
// int *arr;
// int top1;
// int top2;
// int size;
// public:
// twostack(int s){
//     this->size = s;
//     top1 = -1;
//     top2 = s;
//     arr = new int[s];
// }


// void push1(int num){
//     if(top2 - top1 > 1){
//         top1++;
//         arr[top1] = num;
//     } else {
//             cout << "Stack Overflow on push1\n";
//         }
// }


// void push2(int num){
//     if(top2 - top1 > 1){
//         top1--;
//         arr[top2] = num;
//     } else {
//             cout << "Stack Overflow on push1\n";
//         }
// }


// int pop1() {
//     if(top1 >= 0){
//         int ans = arr[top1];
//         top1--;
//         return ans;
//     } else {
//         return -1;
//     }
// }

// int pop2() {
//     if(top2 < size){
//         int ans = arr[top2];
//         top2++;
//         return ans;
//     } else {
//         return -1;
//     }
// }


// };
// int main(){
//     twostack st1(5);
//     st1.push1(10);
//     st1.push2(20);
//     st1.push1(30);
//     st1.push2(40);

//     cout << "Popped from Stack1: " << st1.pop1() << endl;
//     cout << "Popped from Stack2: " << st1.pop2() << endl;


//     return 0;
// }


// reverse a string using stack
// #include<iostream>
// #include<string>
// #include<stack>
// using namespace std;
// int main(){
// string str = "babbar";
// stack<char> s;
// for(int i=0;i<str.length();i++){
//     char ch = str[i];
//     s.push(ch);
// }

// string ans = "";
// while(!s.empty()){
//     char ch = s.top();
//     ans.push_back(ch);
//     s.pop();
// }

// cout << "Reverse String is: " << ans << endl;
//     return 0;
// }




// Delete middle element form stack
// #include<iostream>
// #include<stack>
// using namespace std;

// void solve(stack<int>& inputstack, int count, int size) {
//     // Base case: if we've reached the middle
//     if (count == size / 2) {
//         inputstack.pop(); // Remove the middle element
//         return;
//     }

//     int num = inputstack.top();
//     inputstack.pop();

//     // Recursive call
//     solve(inputstack, count + 1, size);

//     // Push the element back after recursive call
//     inputstack.push(num);
// }

// void deletemid(stack<int>& inputstack, int size) {
//     int count = 0;
//     solve(inputstack, count, size);
// }

// int main() {
//     stack<int> st;

//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     st.push(5); // Stack from bottom to top: 1 2 3 4 5

//     int size = st.size();

//     deletemid(st, size); // Should remove 3 (middle element)

//     cout << "Stack after deleting middle element:\n";
//     while (!st.empty()) {
//         cout << st.top() << " ";
//         st.pop();
//     }

//     return 0;
// }







// Insert element at its bottom in a given stack
// #include<iostream>
// #include<stack>
// using namespace std;
// void solve(stack<int>& s, int x){
// // base case
// if(s.empty()){
//     s.push(x);
//     return;
// }
// int num = s.top();
// s.pop();

// solve(s, x);
// s.push(num);

// }

// stack<int> pushatbottom(stack<int>& mystack, int x){
//     solve(mystack,x);
//     return mystack;

// }

// int main() {
//     stack<int> s;
//     s.push(2);
//     s.push(3);
//     s.push(4);

//     int x = 1;

//     // Stack before: Top -> 4 3 2
//     s = pushatbottom(s, x);
//     // Expected Stack after: Top -> 4 3 2 1

//     cout << "Stack after pushing " << x << " at the bottom:\n";
//     while (!s.empty()) {
//         cout << s.top() << " ";
//         s.pop();
//     }

//     return 0;
// }




// reverse stack using recursion
// #include<iostream>
// #include<stack>
// using namespace std;

// void insertatbottom(stack<int>& stack, int element) {
//     // base case
//     if (stack.empty()) {
//         stack.push(element);
//         return;
//     }

//     int num = stack.top();
//     stack.pop();

//     insertatbottom(stack, element);  // use correct variable names
//     stack.push(num);
// }

// void reversestack(stack<int>& stack) {
//     // base case
//     if (stack.empty()) {
//         return;
//     }

//     int num = stack.top();
//     stack.pop();

//     reversestack(stack);
//     insertatbottom(stack, num);
// }

// int main() {
//     stack<int> s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(4);  // Stack from bottom to top: 1 2 3 4

//     reversestack(s);  // Should reverse the stack

//     cout << "Reversed Stack (top to bottom):\n";
//     while (!s.empty()) {
//         cout << s.top() << " ";
//         s.pop();
//     }

//     return 0;
// }



// sort a stack
// #include<iostream>
// #include<stack>
// using namespace std;
// void sortedinsert(stack<int>& stack, int num) {
//     // Correct base case: insert when stack is empty or top is less than or equal to num
//     if (stack.empty() || stack.top() <= num) {
//         stack.push(num);
//         return;
//     }

//     int n = stack.top();
//     stack.pop();

//     // Recursive call
//     sortedinsert(stack, num);

//     // Push top back after inserting num at the correct position
//     stack.push(n);
// }

// void sortstack(stack<int>& stack) {
//     if (stack.empty()) {
//         return;
//     }

//     int num = stack.top();
//     stack.pop();

//     // Sort the remaining stack
//     sortstack(stack);

//     // Insert the popped element in sorted order
//     sortedinsert(stack, num);
// }



// int main() {
//       stack<int> s;
//     s.push(3);
//     s.push(1);
//     s.push(4);
//     s.push(2);

//     sortstack(s);  // Sorts the stack in ascending order (top -> bottom)

//     cout << "Sorted stack (top to bottom):\n";
//     while (!s.empty()) {
//         cout << s.top() << " ";
//         s.pop();
//     }
//     return 0;
// }






// Redundant brackets
// #include <iostream>
// #include <stack>
// #include <string>
// using namespace std;

// bool findredundantbrackets(string &s) {
//     stack<char> st;

//     for (int i = 0; i < s.length(); i++) {
//         char ch = s[i];

//         if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
//             st.push(ch);
//         }
//         else if (ch == ')') {
//             bool isRedundant = true;

//             // Check inside the brackets
//             while (!st.empty() && st.top() != '(') {
//                 char top = st.top();
//                 if (top == '+' || top == '-' || top == '*' || top == '/') {
//                     isRedundant = false;
//                 }
//                 st.pop();
//             }

//             if (!st.empty()) {
//                 st.pop(); // pop the opening '('
//             }

//             if (isRedundant) {
//                 return true; // Redundant brackets found
//             }
//         }
//     }

//     return false; // No redundant brackets found
// }


// int main() {
//     string expr1 = "((a+b))";   // redundant
//     string expr2 = "(a+(b*c))"; // not redundant

//     cout << "Expression 1: " << (findredundantbrackets(expr1) ? "Redundant" : "Not Redundant") << endl;
//     cout << "Expression 2: " << (findredundantbrackets(expr2) ? "Redundant" : "Not Redundant") << endl;

//     return 0;
// }







// Minimum cost to make string valid
// #include <iostream>
// #include <stack>
// #include <string>
// using namespace std;
// #include <iostream>
// #include <stack>
// #include <string>
// using namespace std;

// int findminimumcost(string str) {
//     // Odd length strings can never be balanced
//     if (str.length() % 2 != 0) {
//         return -1;
//     }

//     stack<char> s;

//     for (int i = 0; i < str.length(); i++) {
//         char ch = str[i];

//         if (ch == '(') {
//             s.push(ch);
//         } else {
//             if (!s.empty() && s.top() == '(') {
//                 s.pop();  // valid pair
//             } else {
//                 s.push(ch); // unmatched ')'
//             }
//         }
//     }

//     // Now the stack contains only unmatched brackets
//     int a = 0; // count of '('
//     int b = 0; // count of ')'

//     while (!s.empty()) {
//         if (s.top() == '(') {
//             a++;
//         } else {
//             b++;
//         }
//         s.pop();
//     }

//     // Minimum reversals = ceil(a/2) + ceil(b/2)
//     int ans = (a + 1) / 2 + (b + 1) / 2;
//     return ans;
// }




// int main() {
//     string str = "())((()))((";
//     int result = findminimumcost(str);

//     if (result == -1) {
//         cout << "Not possible to balance the string\n";
//     } else {
//         cout << "Minimum reversals needed: " << result << endl;
//     }
//     return 0;
// }




// Next smallest element
#include <iostream>
#include <stack>
#include<vector>
#include <string>
using namespace std;
vector<int> nextsmallerelement(vector<int>& arr, int n){
    stck<int> s;
    s.push(-1);
    vector<int> ans;
    for(int i=n-1;i>=0;i++){
        int curr = arr[i];
        while(s.top() >= curr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}

int main() {

    return 0;
}