#include <iostream>
#include <vector>
using namespace std;
int binarySearchRecursive(const vector<int>& arr, int target, int left, int right) {
    if (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            return binarySearchRecursive(arr, target, mid + 1, right);

        return binarySearchRecursive(arr, target, left, mid - 1);
    }

    return -1;
}

int binarySearch(const vector<int>& arr, int target) {
    return binarySearchRecursive(arr, target, 0, arr.size() - 1);
}

int main() {
    vector<int> arr = {2, 3, 4, 10, 40};
    int target = 10;
    int result = binarySearch(arr, target);
    if (result != -1)
        cout << "Element found at index " << result << std::endl;
    else
        cout << "Element not found in the array" << std::endl;
    return 0;
