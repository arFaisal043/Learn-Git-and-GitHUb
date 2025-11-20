#include <iostream>
#include <vector>
using namespace std;

int main() {

    cout << "Hello world!";

    vector<int> arr = {2, 1, 4, 6, 78, 1, 124, 26, 47, 4, 2};
    int n = arr.size();
    cout << n << " ";

    for(int i = 0; i < n-1; i++) {

        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    } 
    
    for(int i : arr) {~
        cout << i << " ";
    }
}