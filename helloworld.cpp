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
// #include <iostream>
// #include <stack>
// #include <vector>
// #include <string>
// using namespace std;

// vector<int> nextsmallerElement(vector<int>& arr, int n) {
//     stack<int> s;
//     s.push(-1);
//     vector<int> ans(n); // Initialize with size n

//     for(int i = n - 1; i >= 0; i--) {
//         int curr = arr[i];
//         while(s.top() >= curr) {
//             s.pop();
//         }
//         ans[i] = s.top();
//         s.push(curr);
//     }
//     return ans;
// }

// int main() {
//     vector<int> arr = {2, 1, 4, 3};
//     vector<int> result = nextsmallerElement(arr, arr.size());

//     cout << "Next smaller elements: ";
//     for (int val : result) {
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }




// Largest Rectangular Area in Histogram
// #include <iostream>
// #include <stack>
// #include <vector>
// #include <climits> // for INT_MIN
// using namespace std;

// class Solution {
// private:
    // vector<int> nextSmallerElement(vector<int>& arr, int n) {
    //     stack<int> s;
    //     vector<int> ans(n);
    //     s.push(-1);

    //     for (int i = n - 1; i >= 0; i--) {
    //         while (s.top() != -1 && arr[s.top()] >= arr[i]) {
    //             s.pop();
    //         }
    //         ans[i] = s.top();
    //         s.push(i);
    //     }
    //     return ans;
    // }

    // vector<int> prevSmallerElement(vector<int>& arr, int n) {
    //     stack<int> s;
    //     vector<int> ans(n);
    //     s.push(-1);

    //     for (int i = 0; i < n; i++) {
    //         while (s.top() != -1 && arr[s.top()] >= arr[i]) {
    //             s.pop();
    //         }
    //         ans[i] = s.top();
    //         s.push(i);
    //     }
    //     return ans;
    // }

// public:
    // int largestRectangularArea(vector<int>& heights) {
    //     int n = heights.size();
    //     vector<int> next = nextSmallerElement(heights, n);
    //     vector<int> prev = prevSmallerElement(heights, n);
    //     int area = INT_MIN;

    //     for (int i = 0; i < n; i++) {
    //         int l = heights[i];
    //         if (next[i] == -1) {
    //             next[i] = n;
    //         }
    //         int b = next[i] - prev[i] - 1;
    //         int newArea = l * b;
    //         area = max(area, newArea);
    //     }
    //     return area;
    // }
// };

// int main() {
//     Solution sol;
//     vector<int> histogram = {2, 1, 5, 6, 2, 3};
//     int maxArea = sol.largestRectangularArea(histogram);
//     cout << "Largest Rectangular Area: " << maxArea << endl;

//     return 0;
// }







// Celebrity problem
// #include <iostream>
// #include <stack>
// #include <vector>
// using namespace std;

// class Solution {
// private:
//     bool knows(vector<vector<int>>& m, int a, int b) {
//         return m[a][b] == 1;
//     }

// public:
//     int celebrity(vector<vector<int>>& m, int n) {
//         stack<int> s;

//         // Step 1: Push all people into the stack
//         for (int i = 0; i < n; i++) {
//             s.push(i);
//         }

//         // Step 2: Get a potential celebrity
//         while (s.size() > 1) {
//             int a = s.top(); s.pop();
//             int b = s.top(); s.pop();

//             if (knows(m, a, b)) {
//                 s.push(b); // a can't be celeb
//             } else {
//                 s.push(a); // b can't be celeb
//             }
//         }

//         int candidate = s.top();

//         // Step 3: Verify candidate
//         // Row check: candidate should know no one
//         for (int i = 0; i < n; i++) {
//             if (m[candidate][i] == 1) {
//                 return -1; // Not a celebrity
//             }
//         }

//         // Column check: everyone should know candidate
//         for (int i = 0; i < n; i++) {
//             if (i != candidate && m[i][candidate] == 0) {
//                 return -1; // Not a celebrity
//             }
//         }

//         return candidate; // Valid celebrity
//     }
// };

// int main() {
//     vector<vector<int>> M = {
//         {0, 1, 1},
//         {0, 0, 1},
//         {0, 0, 0}
//     };

//     Solution sol;
//     int celeb = sol.celebrity(M, 3);

//     if (celeb == -1) {
//         cout << "No celebrity found." << endl;
//     } else {
//         cout << "Celebrity is person: " << celeb << endl;
//     }

//     return 0;
// }







// Max Rectangle
// #include <iostream>
// #include <stack>
// #include <vector>
// #include <climits>
// using namespace std;

// class Solution {
// private:
//     vector<int> nextSmallerElement(vector<int>& arr, int n) {
//         stack<int> s;
//         vector<int> ans(n);
//         s.push(-1);

//         for (int i = n - 1; i >= 0; i--) {
//             while (s.top() != -1 && arr[s.top()] >= arr[i]) {
//                 s.pop();
//             }
//             ans[i] = s.top();
//             s.push(i);
//         }
//         return ans;
//     }

//     vector<int> prevSmallerElement(vector<int>& arr, int n) {
//         stack<int> s;
//         vector<int> ans(n);
//         s.push(-1);

//         for (int i = 0; i < n; i++) {
//             while (s.top() != -1 && arr[s.top()] >= arr[i]) {
//                 s.pop();
//             }
//             ans[i] = s.top();
//             s.push(i);
//         }
//         return ans;
//     }

//     int largestRectangularArea(vector<int>& heights) {
//         int n = heights.size();
//         vector<int> next = nextSmallerElement(heights, n);
//         vector<int> prev = prevSmallerElement(heights, n);
//         int area = INT_MIN;

//         for (int i = 0; i < n; i++) {
//             int l = heights[i];
//             if (next[i] == -1) {
//                 next[i] = n;
//             }
//             int b = next[i] - prev[i] - 1;
//             int newArea = l * b;
//             area = max(area, newArea);
//         }
//         return area;
//     }

// public:
//     int maxArea(vector<vector<int>>& matrix) {
//         if (matrix.empty()) return 0;

//         int n = matrix.size();       // rows
//         int m = matrix[0].size();    // cols

//         vector<int> heights(m, 0);
//         int maxArea = 0;

//         for (int i = 0; i < n; i++) {
//             // Build histogram for this row
//             for (int j = 0; j < m; j++) {
//                 if (matrix[i][j] == 0) {
//                     heights[j] = 0;
//                 } else {
//                     heights[j] += matrix[i][j];
//                 }
//             }

//             int area = largestRectangularArea(heights);
//             maxArea = max(maxArea, area);
//         }

//         return maxArea;
//     }
// };

// int main() {
//     vector<vector<int>> matrix = {
//         {0, 1, 1, 0},
//         {1, 1, 1, 1},
//         {1, 1, 1, 1},
//         {1, 1, 0, 0}
//     };

//     Solution sol;
//     int result = sol.maxArea(matrix);
//     cout << "Maximum rectangular area is: " << result << endl;

//     return 0;
// }





// N Stacks in an Array
// #include <iostream>
// #include <stack>
// #include <vector>
// #include <climits>
// using namespace std;

// class Nstack {
// private:
//     int *arr;
//     int *top;
//     int *next;
//     int n, s;
//     int freespot;

// public:
//     // Constructor
//     Nstack(int N, int S) {
//         n = N;
//         s = S;
//         arr = new int[s];
//         top = new int[n];
//         next = new int[s];

//         // Initialize all stacks as empty
//         for (int i = 0; i < n; i++) {
//             top[i] = -1;
//         }

//         // Initialize all spaces as free and point to next free
//         for (int i = 0; i < s - 1; i++) {
//             next[i] = i + 1;
//         }
//         next[s - 1] = -1;

//         freespot = 0;
//     }

//     // Push operation
//     bool push(int x, int m) {
//         if (freespot == -1) {
//             // No space
//             return false;
//         }

//         int index = freespot;
//         freespot = next[index];

//         arr[index] = x;

//         next[index] = top[m - 1];
//         top[m - 1] = index;

//         return true;
//     }

//     // Pop operation
//     int pop(int m) {
//         if (top[m - 1] == -1) {
//             // Stack is empty
//             return -1;
//         }

//         int index = top[m - 1];
//         top[m - 1] = next[index];

//         next[index] = freespot;
//         freespot = index;

//         return arr[index];
//     }

//     // Destructor
//     ~Nstack() {
//         delete[] arr;
//         delete[] top;
//         delete[] next;
//     }
// };

// int main() {
//     Nstack st(3, 6); // 3 stacks in an array of size 6

//     st.push(10, 1);
//     st.push(20, 1);
//     st.push(30, 2);
//     st.push(40, 3);

//     cout << st.pop(1) << endl; // should print 20
//     cout << st.pop(2) << endl; // should print 30
//     cout << st.pop(3) << endl; // should print 40
//     cout << st.pop(1) << endl; // should print 10

//     return 0;
// }








// Design a stack that supports getmin() in O(1) time and O(1) extra space
// #include <iostream>
// #include <stack>
// using namespace std;

// class SpecialStack {
// private:
//     stack<int> s;
//     int minElement;

// public:
//     void push(int data) {
//         if (s.empty()) {
//             s.push(data);
//             minElement = data;
//         } else {
//             if (data < minElement) {
//                 s.push(2 * data - minElement); // Encoding
//                 minElement = data;
//             } else {
//                 s.push(data);
//             }
//         }
//     }

//     int pop() {
//         if (s.empty()) {
//             return -1;
//         }

//         int curr = s.top();
//         s.pop();

//         if (curr >= minElement) {
//             return curr;
//         } else {
//             int prevMin = minElement;
//             minElement = 2 * minElement - curr; // Decoding
//             return prevMin;
//         }
//     }

//     int top() {
//         if (s.empty()) {
//             return -1;
//         }

//         int curr = s.top();
//         if (curr < minElement) {
//             return minElement; // It's an encoded value
//         } else {
//             return curr;
//         }
//     }

//     bool isempty() {
//         return s.empty();
//     }

//     int getmin() {
//         if (s.empty()) {
//             return -1;
//         }
//         return minElement;
//     }
// };

// int main() {
//     SpecialStack st;

//     st.push(5);
//     st.push(3);
//     st.push(7);
//     st.push(2);

//     cout << "Min: " << st.getmin() << endl;  // Should print 2
//     cout << "Top: " << st.top() << endl;     // Should print 2
//     cout << "Pop: " << st.pop() << endl;     // Should pop 2
//     cout << "Min: " << st.getmin() << endl;  // Should print 3
//     cout << "Pop: " << st.pop() << endl;     // Should pop 7
//     cout << "Min: " << st.getmin() << endl;  // Should print 3

//     return 0;
// }






// // Queue
// #include <iostream>
// #include<queue>
// using namespace std;

// int main() {
//     queue<int> q;
//     q.push(11);
//     q.push(15);
//     q.push(13);
//     cout << "Size of queue is: " << q.size() << endl;
//     q.pop();
//     q.pop();
//     q.pop();
//     cout << "Size of queue is: " << q.size() << endl;
//     if(q.empty()){
//      cout << "Queue is empty.\n";   
//     } else {
//         cout << "Queue is not empty.\n";
//     }
// }






// Implement a Queue with class
// #include <iostream>
// using namespace std;

// class MyQueue {
//     int* arr;
//     int frontIndex;
//     int rearIndex;
//     int size;

// public:
//     MyQueue() {
//         size = 100001;
//         arr = new int[size];
//         frontIndex = 0;
//         rearIndex = 0;
//     }

//     bool isEmpty() {
//         return frontIndex == rearIndex;
//     }

//     void enqueue(int data) {
//         if (rearIndex == size) {
//             cout << "Queue is full.\n";
//         } else {
//             arr[rearIndex] = data;
//             rearIndex++;
//         }
//     }

//     int dequeue() {
//         if (frontIndex == rearIndex) {
//             return -1;
//         } else {
//             int ans = arr[frontIndex];  // Corrected from ans[front]
//             arr[frontIndex] = -1;
//             frontIndex++;
//             if (frontIndex == rearIndex) {
//                 frontIndex = 0;
//                 rearIndex = 0;
//             }
//             return ans;
//         }
//     }

//     int front() {
//         if (frontIndex == rearIndex) {
//             return -1;
//         } else {
//             return arr[frontIndex];
//         }
//     }

//     int getSize() {
//         return rearIndex - frontIndex;
//     }
// };

// int main() {
//     MyQueue q;  // Use custom class MyQueue instead of STL queue

//     q.enqueue(11);
//     q.enqueue(15);
//     q.enqueue(13);

//     cout << "Size of queue is: " << q.getSize() << endl;

//     q.dequeue();
//     q.dequeue();
//     q.dequeue();

//     cout << "Size of queue is: " << q.getSize() << endl;

//     if (q.isEmpty()) {
//         cout << "Queue is empty.\n";
//     } else {
//         cout << "Queue is not empty.\n";
//     }

//     return 0;
// }






// Circular queue
// #include <iostream>
// using namespace std;

// class CircularQueue {
//     int* arr;
//     int frontIndex;
//     int rearIndex;
//     int size;

// public:
//     CircularQueue(int s = 100001) {
//         size = s;
//         arr = new int[size];
//         frontIndex = -1;
//         rearIndex = -1;
//     }

//     bool enqueue(int data) {
//         // Check if queue is full
//         if ((frontIndex == 0 && rearIndex == size - 1) || 
//             (rearIndex + 1) % size == frontIndex) {
//             cout << "Queue is full.\n";
//             return false;
//         }

//         // First element
//         if (frontIndex == -1) {
//             frontIndex = rearIndex = 0;
//         } else if (rearIndex == size - 1 && frontIndex != 0) {
//             rearIndex = 0;  // Wrap around
//         } else {
//             rearIndex++;
//         }

//         arr[rearIndex] = data;
//         return true;
//     }

//     int dequeue() {
//         if (frontIndex == -1) {
//             cout << "Queue is empty.\n";
//             return -1;
//         }

//         int data = arr[frontIndex];
//         arr[frontIndex] = -1;

//         // Only one element
//         if (frontIndex == rearIndex) {
//             frontIndex = rearIndex = -1;
//         } else if (frontIndex == size - 1) {
//             frontIndex = 0;  // Wrap around
//         } else {
//             frontIndex++;
//         }

//         return data;
//     }

//     int front() {
//         if (frontIndex == -1) {
//             cout << "Queue is empty.\n";
//             return -1;
//         }
//         return arr[frontIndex];
//     }

//     bool isEmpty() {
//         return frontIndex == -1;
//     }

//     void display() {
//         if (isEmpty()) {
//             cout << "Queue is empty.\n";
//             return;
//         }

//         cout << "Queue elements: ";
//         if (rearIndex >= frontIndex) {
//             for (int i = frontIndex; i <= rearIndex; i++) {
//                 cout << arr[i] << " ";
//             }
//         } else {
//             for (int i = frontIndex; i < size; i++) {
//                 cout << arr[i] << " ";
//             }
//             for (int i = 0; i <= rearIndex; i++) {
//                 cout << arr[i] << " ";
//             }
//         }
//         cout << endl;
//     }
// };
// int main() {
//     CircularQueue q(5);  // Smaller size for testing

//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);
//     q.enqueue(40);
//     q.enqueue(50);  // Should say "Queue is full"

//     q.display();

//     cout << "Dequeued: " << q.dequeue() << endl;
//     q.enqueue(60);  // Should succeed due to wrap-around

//     q.display();

//     cout << "Front element: " << q.front() << endl;

//     return 0;
// }




// Doubly ended queue
// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
// deque<int> d;
// d.push_front(12);
// d.push_front(14);
// cout << d.front() << endl;
// cout << d.back() << endl;
// d.pop_front();
// cout << d.front() << endl;
// cout << d.back() << endl;
// d.pop_back();
// if(d.empty()){
//     cout << "Queue is empty.\n";
// }
// else {
//     cout <<"queue is not empty\n";
// }

//     return 0;
// }





#include <iostream>
using namespace std;

class Deque {
    int* arr;
    int front;
    int rear;
    int size;

public:
    Deque(int n) {
        size = n;
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    bool isFull() {
        return (front == 0 && rear == size - 1) || ((rear + 1) % size == front);
    }

    bool isEmpty() {
        return front == -1;
    }

    bool pushFront(int x) {
        if (isFull()) return false;

        if (isEmpty()) {
            front = rear = 0;
        } else if (front == 0) {
            front = size - 1;
        } else {
            front--;
        }

        arr[front] = x;
        return true;
    }

    bool pushRear(int x) {
        if (isFull()) return false;

        if (isEmpty()) {
            front = rear = 0;
        } else if (rear == size - 1 && front != 0) {
            rear = 0;
        } else {
            rear++;
        }

        arr[rear] = x;
        return true;
    }

    int popFront() {
        if (isEmpty()) return -1;

        int value = arr[front];
        arr[front] = -1;

        if (front == rear) {
            front = rear = -1;
        } else if (front == size - 1) {
            front = 0;
        } else {
            front++;
        }

        return value;
    }

    int popRear() {
        if (isEmpty()) return -1;

        int value = arr[rear];
        arr[rear] = -1;

        if (front == rear) {
            front = rear = -1;
        } else if (rear == 0) {
            rear = size - 1;
        } else {
            rear--;
        }

        return value;
    }

    int getFront() {
        if (isEmpty()) return -1;
        return arr[front];
    }

    int getRear() {
        if (isEmpty()) return -1;
        return arr[rear];
    }
};
int main() {
    Deque dq(5);

    dq.pushRear(10);
    dq.pushRear(20);
    dq.pushFront(5);
    dq.pushFront(2);

    cout << "Front: " << dq.getFront() << endl;
    cout << "Rear: " << dq.getRear() << endl;

    dq.popRear();
    dq.popFront();

    cout << "After pops:" << endl;
    cout << "Front: " << dq.getFront() << endl;
    cout << "Rear: " << dq.getRear() << endl;

    return 0;
}
