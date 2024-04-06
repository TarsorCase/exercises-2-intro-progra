
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
  if(n >= 0){
    if(n <= 14){
      if(n != 0){
      int i = n - 1;
      for(valor = n; i > 0; --i){
        valor *= i;
        }
      int answer = valor;
      cout << answer << "\n";
      }else{
        cout << 1 << "\n";
      }
    }else{
      cout << "El numero es muy grande. Intentelo de nuevo\n";  
    }
  }else{
    cout << "El numero es negativo. Intentelo de nuevo\n";
  }
}

void exercise_5(int n, int k) {
    for(int i = 0; i < n; i++){
        cout << "  ";
    }
    
    for(int day = 1; day <= k; day++){
        if((n + day - 1) % 7 == 0 || day == k){
            if (day < 10)
                cout << " ";
            cout << day << "\n";
        } else {
            if (day < 10)
                cout << " ";
            cout << day << " ";
        }
    } 
}

int exercise_6(int n) {
    int result = 0;
    if(n >= 0){
      string number = to_string(n);
      for (char c : number) {
        result += c - '0';
      }
    }else{
      result = 0;
      return result;
    }
    return result;
}

void exercise_7(int n) {
  double suma = 0.0;
  for (int i = 1; i <= n; i++) {
      suma += (i % 2 == 0) ? -1.0 / i : 1.0 / i;
    }
    std::cout << suma << "\n";
}

void exercise_8(string s) {
  int size = s.length();
    string original = "";
    string reversed = "";
    if(size <= 100){
        for(char c : s){
            if(c != ' '){
                original += c;
            }
        }
        for(int i = original.length() - 1; i >= 0; --i){
            reversed += original[i];
        }
        for(int i = 0; i <= size - 1; ++i){
            char o = original[i];
            char r = reversed[i];
            if( o != r){
                cout << "NO\n";
            }else{
                cout << "YES\n";
            }
        }
    }else{
        cout << "Se supero la cantidad de caracteres permitidos la cual es 100\n";
    }
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