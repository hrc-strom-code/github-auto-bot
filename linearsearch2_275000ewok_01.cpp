#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int key = 30;
    int found = 0;

    for(int i = 0; i < 5; i++) {
        if(arr[i] == key) {
            cout << "Element found at index " << i;
            found = 1;
            break;
        }
    }

    if(!found)
        cout << "Element not found";

    return 0;
}