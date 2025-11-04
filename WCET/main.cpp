#include <iostream>
#include <vector>

// Function to calculate the sum of an array
int sumArray(const std::vector<int>& arr) {
    int sum = 0;
    for (int num : arr) {
        sum += num;  // Add each number to the sum
    }
    return sum;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};  // Sample array

    // Call sumArray function to calculate the sum of the array
    int result = sumArray(numbers);

    // Output the result
    std::cout << "The sum of the array is: " << result << std::endl;

    return 0;
}
