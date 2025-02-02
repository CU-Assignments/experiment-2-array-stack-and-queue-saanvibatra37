#include <iostream> 
void findTwoSum(int nums[], int size, int target) { 
for (int i = 0; i < size; i++) { 
for (int j = i + 1; j < size; j++) { 
if (nums[i] + nums[j] == target) { 
std::cout << "[" << i << "," << j << "]" << std::endl; 
return; 
} 
} 
} 
} 
int main() { 
int size;  
std::cout << "Enter the number of elements in the array: "; 
std::cin >> size; 
int nums[size]; 
std::cout << "Enter the elements of the array: "; 
for (int i = 0; i < size; i++) { 
std::cin >> nums[i]; 
} 
int target; 
std::cout << "Enter the target value: "; 
std::cin >> target; 
findTwoSum(nums, size, target); 
return 0; 
} 