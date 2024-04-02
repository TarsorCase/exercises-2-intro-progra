
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

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
    cout << length << "\n";
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
  int size = s1.size();
  if(size < 20){
        for(char num : s1){
            if(num == '1'){
                cout << "Om-nom-nom :P\n";
            }else if(num == '0'){
                cout << "No cake :(\n";
                break;
            }else {
            
            }
        }
    }else{
      for(int i = 0; i < 10; ++i){
        cout << "Om-nom-nom :P\n";
      }
    }
}

void exercise_4(int n) {
  int valor;
  if(n > 0){
    int i = n - 1;
    for(valor = n; i > 0; --i){
        valor *= i;
        }
  }else{
    cout << "El numero es negativo. Intentelo de nuevo\n";
  }
    int answer = valor;
    cout << answer << "\n";
}

void exercise_5(int n, int k) {
    vector<int> week;
    week.resize(13);
    
    cin >> n;
    cin >> k;
    int string_length = week.size();
    cout << string_length;
}

int exercise_6(int n) {
  string number = to_string(n);
    string one = number.substr(0,1);
    string two = number.substr(1,1);
    int num1 = stoi(one);
    int num2 = stoi(two);
    int result = num1 + num2;
    cout << result;
  return 0;
}

void exercise_7(int n) {
  double suma = 0.0;
  for (int i = 1; i <= n; i++) {
      suma += (i % 2 == 01) ? -1.0 / i : 1.0 / i;
    }
    std::cout << suma << "\n";
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