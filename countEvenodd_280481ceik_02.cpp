#include <iostream>
using namespace std;

int main() {
    int n, even = 0, odd = 0;
    cout << "Enter size: ";
    cin >> n;

    int arr[100];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];

        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    
    cout << "Even numbers = " << even << endl;
    cout << "Odd numbers = " << odd;

    return 0;
}
