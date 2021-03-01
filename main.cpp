// as part of my refresher in C++ I will be experimenting different ways of using a switch statements with strings similar to how you can do in Javascript , maybe this will fit into a larger project such as a tool for making text adventure games 
/* 
links:
* https://www.tutorialspoint.com/cplusplus/cpp_strings.htm 
* https://www.geeksforgeeks.org/list-cpp-stl/ 
* https://www.guru99.com/cpp-dynamic-array.html 
* https://stackoverflow.com/questions/4029870/how-to-create-a-dynamic-array-of-integers 
* https://www.tutorialspoint.com/cplusplus/cpp_arrays.htm 
* https://www.tutorialspoint.com/cplusplus/cpp_data_structures.htm 
* https://www.geeksforgeeks.org/multidimensional-arrays-c-cpp/ 
* https://stackoverflow.com/questions/4108313/how-do-i-find-the-length-of-an-array 
* https://en.cppreference.com/w/cpp/container/vector 
* https://docs.microsoft.com/en-us/cpp/preprocessor/hash-define-directive-c-cpp?view=msvc-160 
* https://en.cppreference.com/w/cpp/preprocessor/replace 
* https://stackoverflow.com/questions/650162/why-the-switch-statement-cannot-be-applied-on-strings 
* https://stackoverflow.com/questions/16388510/evaluate-a-string-with-a-switch-in-c/16388594
*/ 
#include <iostream> 
#include <cstring> 

using namespace std; 

#define blue 1 
#define white 2 
#define orange 3 
#define red 4 

int main() {
    int colour = red; 
    switch (colour) {
        case red: 
            cout << "the carpet is red\n"; 
            break; 
        case blue: 
            cout << "the sky is blue\n"; 
            break; 
        case white: 
            cout << "the moon is white\n"; 
        case orange: 
            cout << "the lava is orange\n"; 
    } 
    /* 
    // work in progress 
    string colour = "red"; 
    string colours[] = {"", "blue", "white", "orange", "red"}; 
    for (int i = 1; i <= sizeof(colours)/sizeof(*colours); i++) {
        if (colours[i] == colour) {
            switch (i) {
                    case 1: 
                        cout << "the sky is blue\n"; 
                        break; 
                    case 2: 
                        cout << "the moon is white\n"; 
                        break; 
                    case 3: 
                        cout << "the lava is orange\n"; 
                        break;
                    case 4: 
                        cout << "the carpet is red\n"; 
                        break;                         
                    // default 
                }
        }
    } 
    */ 
  cout << "\nHello World!\n";
}
