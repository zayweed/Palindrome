#include <iostream>

using namespace std;

int main() {

  char arr[80];
  char str[80];
  for (int i = 0; i < 80; i++) {
    arr[i] = '\n';
    str[i] = '\n';
  }

  cin.getline(str, 80);

  int j = 0;
  for (int i = 0; i < 80; i++) {
    if (isalpha(str[i])) {
      arr[j] = tolower(str[i]);
      j++; 
    }
    if (isdigit(str[i])) {
      arr[j] = str[i];
      j++;
    }
  }

  bool palindrome = true;
  for (int i = 0; i < j/2; i++) {
    if (arr[i] != arr[j-i-1]) {
      palindrome = false;
    }
  }

  if (palindrome == true) {
    cout << "Palindrome";
  }
  else {
    cout << "Not a palindrome";
  }

  return 0;
}
