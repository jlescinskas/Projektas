#include <iostream>
#include <vector>
using namespace std;

int main() {

    string text = "Labas";
    // L = 0
    // a = 1
    // b = 2
    // a = 3
    // s = 4

    text.insert(2, "Justas");
    cout << text << endl; //LaJustasbas


    /*vector<int> vec = {1, 3, 4, 6, 8};
    cout << "Original array: " << endl;
    for (int num : vec) {
        cout << num << " ";
    }

    // We'll use index-based for loop since the vector size changes during iteration
    for (size_t i = 0; i < vec.size(); ++i) {
        if (vec[i] % 3 == 0) { // Check if the element is a multiple of 3
            vec.insert(vec.begin() + i + 1, vec[i]); // Duplicate the element
            i++; // Increment i to skip the newly inserted duplicate
        }
    }
    cout << endl;

    cout << "Modified array: " << endl;
    for (int num : vec) {
        cout << num << " ";
    }*/

    return 0;
}
