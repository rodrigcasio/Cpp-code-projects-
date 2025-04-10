#include <iostream>

/*
Define a function is_palindrome() that takes:

    An std::string parameter text.

The function should return:

    true if text is a palindrome.
    false if text is not a palindrome.

(A palindrome is any text that has the same characters backwards as it does forwards. For example, “hannah” and “racecar” are palindromes, while “menu” and “aardvark” are not.)

We will not test for edge cases such as capitalization or spaces.
*/
bool is_Palindrome(std::string text);

int main(){
  
  std::cout << is_Palindrome("madam") <<"\n";
  std::cout << is_Palindrome("ada") << "\n";
  std::cout << is_Palindrome("lovelace") << "\n";
}

bool is_Palindrome(std::string text){
  int len = text.size();
  std::string textBackwards;
  for(int i = len - 1; i >= 0; i--){
    textBackwards += text[i];
  }
  if(text == textBackwards){
    return true;
  }
  else{
    return false;
  }
}
