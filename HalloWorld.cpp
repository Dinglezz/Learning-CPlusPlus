#include <iostream>

using string = std::string; 

namespace dingleCat {
    string cat = "Dingle";
}
namespace AlexDog {
    string dog = "Alex";
}

int main() {
    using std::cout;
    using namespace AlexDog;

    string cat = "Pringle";

    cout << "My cat's name is " << dingleCat::cat << "\n";
    cout << "My dogs's name is " << dog;

    return 0;
}