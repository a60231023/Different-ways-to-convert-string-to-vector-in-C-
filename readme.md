### In this article, we will take a look at the Different ways to convert string to vector in C++
readme.md
<br>

By the end of this article, you should have a good understanding of what String and vectors are and how can you covert string to vector using different methods

### Table of contents:


- [Introduction](#introduction)
- [Using std::vector constructor and std::string iterators:](#using-stdvector-constructor-and-stdstring-iterators)
- [Using std::istringstream and std::istream\_iterator:](#using-stdistringstream-and-stdistream_iterator)
- [Using std::stringstream and getline():](#using-stdstringstream-and-getline)
- [Conclusion](#conclusion)
  
<br>

# Introduction

A **string** is a sequence of characters in C++ that is used to store and manipulate text. A **vector** is a sequence container that is used to store a collection of elements, which can be of any data type. Converting string to vector is important because it enables us to perform various operations on the data stored in the vector, such as sorting, searching, and filtering.

<br>

# Using std::vector constructor and std::string iterators:
 
This method involves using the constructor of the std::vector class and iterators of the std::string class to copy each character from the string into the vector.

```c++
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string str = "hello";
    std::vector<char> vec(str.begin(), str.end());

    for (auto c : vec) {
        std::cout << c << " ";
    }
    std::cout << std::endl;

    return 0;
}

//Output- h e l l o 
```

In this example, we first create a string object str with the value "hello". Then, we create a vector object vec using the constructor of the std::vector class, which takes two iterators as arguments. We pass the begin() and end() iterators of the string object to the constructor to copy each character from the string into the vector.

Finally, we use a range-based for loop to print each character in the vector.

# Using std::istringstream and std::istream_iterator:
 
This method involves using std::istringstream and std::istream_iterator to read the string as a stream and copy each element to the vector.

```c++
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <iterator>

int main() {
    std::string str = "10 20 30 40 50";
    std::istringstream iss(str);
    std::vector<int> vec((std::istream_iterator<int>(iss)), std::istream_iterator<int>());

    for (auto i : vec) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}

//Output- 10 20 30 40 50 
```

In this example, we first create a string object str with the value "10 20 30 40 50". Then, we create an std::istringstream object iss to read the string as a stream. We then create a vector object vec using the std::istream_iterator constructor, which takes two arguments: the input stream and an end-of-stream iterator.

We pass the iss object and an end-of-stream iterator to the constructor to copy each element from the string into the vector.

Finally, we use a range-based for loop to print each element in the vector.

# Using std::stringstream and getline():

 
This method involves using std::stringstream to split the string into individual words using getline() and copy each word to the vector.


```c++
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

// Output - The quick brown fox 
```

In this example, we first create a string object str with the value "The quick brown fox". Then, we create a vector object vec to store the individual words.

We create an std::stringstream object ss to split the string into individual words using getline(). The getline() function takes three arguments: the input stream, a reference to a string object to store the word, and the delimiter character.

# Conclusion

In conclusion, converting a string to a vector in C++ can be accomplished in several ways depending on the specific requirements of the program. The most basic method is to iterate through each character of the string and push it into the vector. Another method is to use a stringstream object to split the string into words separated by a delimiter and then push them into the vector. Additionally, the use of the std::copy() algorithm and the std::back_inserter() function can also be used to efficiently copy the string to a vector. It's important to consider the requirements of the program and choose the method that best fits the needs.






