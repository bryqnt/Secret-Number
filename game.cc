// Bryant Huynh
// CPSC 120-05
// 2023-04-17
// 22bhuynh2@csu.fullerton.edu
// @bryqnt
//
// Lab 09-02
// Partners: @Itsnotjustnate
//
// This program guesses the secret number.
//

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::ifstream file("secret.dat");
  if (!file.good()) {
    std::cout << "error: cannot read secret.dat\n";
    return 1;
  }

  int secret_num = 0;

  if (!file.good()) {
    std::cout << "error: secret.dat malformed\n";
    return 1;
  }

  file >> secret_num;

  if (secret_num < 1 || secret_num > 10) {
    std::cout << "error: secret.dat malformed\n";
    return 1;
  }

  int guess = 0;
  std::cout << "Enter your guess: ";
  std::cin >> guess;

  if (guess == secret_num) {
    std::cout << "Correct, you win!\n";
  } else {
    std::cout << "Incorrect, the secret number was " << secret_num
              << ", you lose.\n";
  }

  return 0;
}
