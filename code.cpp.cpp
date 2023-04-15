// #include <iostream>
// #include <string>
// #include <vector>

// int main() {
//     std::string str = "hello";
//     std::vector<char> vec(str.begin(), str.end());

//     for (auto c : vec) {
//         std::cout << c << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// // }
// #include <iostream>
// #include <sstream>
// #include <string>
// #include <vector>
// #include <iterator>

// int main() {
//     std::string str = "10 20 30 40 50";
//     std::istringstream iss(str);
//     std::vector<int> vec((std::istream_iterator<int>(iss)), std::istream_iterator<int>());

//     for (auto i : vec) {
//         std::cout << i << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main() {
    std::string str = "The quick brown fox";
    std::vector<std::string> vec;
    std::stringstream ss(str);
    std::string word;

    while (std::getline(ss, word, ' ')) {
        vec.push_back(word);
    }

    for (auto w : vec) {
        std::cout << w << " ";
    }
    std::cout << std::endl;

    return 0;
}
