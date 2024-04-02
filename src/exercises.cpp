
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

void exercise_1(string s1) {
   
    int space = 0;
    for (char character : s1){
        if ( character == ' '){
            cout << space << "\n"; 
        }else {
    
        }
        space ++;
    }
    int length = s1.length();
    cout << length;
}

void exercise_2(string s1) {
  int space = 0;
    while (space < s1.length()) {
        // Skip leading spaces
        while (space < s1.length() && s1[space] == ' ') {
            space++;
        }
        
        int end = space;
        while (end < s1.length() && s1[end] != ' ') {
            end++;
        }
        
        cout << "[" << s1.substr(space, end - space) << "]" << endl;

        space = end + 1;
    }
}

void exercise_3(string s1) {
  // TODO: YOUR CODE HERE
}

void exercise_4(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_5(int n, int k) {
  // TODO: YOUR CODE HERE
}

int exercise_6(int n) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_7(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_8(string s) {
  // TODO: YOUR CODE HERE
}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_11() {
  // TODO: YOUR CODE HERE
}

void exercise_12() {
  // TODO: YOUR CODE HERE
}

long exercise_13(int n, int k) {
  // TODO: YOUR CODE HERE
  return 0;
}

string exercise_14(int n) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int divident, int divider) {
  // TODO: YOUR CODE HERE
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}