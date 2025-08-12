#include <iostream>
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