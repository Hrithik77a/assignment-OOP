#include <iostream>
#include <vector>
using namespace std;

// Function to find elements that are strictly smaller than their adjacent left and right neighbors
vector<int> findLocalMinima(const vector<int> &vec) {
    vector<int> localMinima;
    
    // Check for each element except the first and last (as they don't have two neighbors)
    for (size_t i = 1; i < vec.size() - 1; ++i) {
        if (vec[i] < vec[i - 1] && vec[i] < vec[i + 1]) {
            localMinima.push_back(vec[i]);
        }
    }
    
    return localMinima;
}

int main() {
    vector<int> vec;
    int n, element;

    // Get the number of elements in the vector
    cout << "Enter the number of elements in the vector: ";
    cin >> n;

    // Get the elements of the vector from the user
    cout << "Enter the elements of the vector:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> element;
        vec.push_back(element);
    }

    // Find and display the elements that are local minima
    vector<int> localMinima = findLocalMinima(vec);

    if (!localMinima.empty()) {
        cout << "Elements smaller than their adjacent neighbors are: ";
        for (int num : localMinima) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        cout << "No elements are strictly smaller than their adjacent neighbors." << endl;
    }

    return 0;
}
