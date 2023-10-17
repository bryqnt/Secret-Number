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
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() != 2) {
    std::cout << "error: you must provide a secret number\n";

    return 1;
  }

  int secret_number = std::stoi(arguments[1]);
  if (secret_number < 1 || secret_number > 10) {
    std::cout << "error: secret number must be between 1 and 10\n";
    return 1;
  }

  std::ofstream file("secret.dat");
  file << secret_number;
  file.close();
  return 0;
}
