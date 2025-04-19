#include <iostream>

int main() {
    int players = 5;
    int result = players / 2;
    std::cout << "The result is " <<  result << "\n";

    int correct = 444;
    int questions = 777;
    int score = correct/(double) questions * 100;
    std::cout << "Also your test score came back!" << "\n";
    std::cout << "It's " << score << "%";

    return 0;
}