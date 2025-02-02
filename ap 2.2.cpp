#include <iostream> 
int jump(int nums[], int n) { 
if (n <= 1) return 0; // No jumps needed if array has 1 or fewer elements 
int jumps = 0; // Number of jumps made 
int currentEnd = 0; // The farthest point that can be reached with the current number of jumps
 
int farthest = 0; // The farthest point that can be reached with the next jump 
for (int i = 0; i < n - 1; i++) { 
// Update the farthest point we can reach 
farthest = std::max(farthest, i + nums[i]); 
// If we have reached the end of the current jump range 
if (i == currentEnd) { 
jumps++; // Increment the jump count 
currentEnd = farthest; // Update the current end to the farthest point reached 
// If we can reach or exceed the last index, we can stop 
if (currentEnd >= n - 1) {  
break; 
} 
} 
} 
return jumps; 
} 
int main() { 
int n; 
std::cout << "Enter the number of elements in the array: "; 
std::cin >> n; 
int nums[n]; 
std::cout << "Enter the elements of the array: "; 
for (int i = 0; i < n; i++) { 
std::cin >> nums[i]; 
}    int result = jump(nums, n); 
std::cout << "Minimum number of jumps to reach the last index: " << result << std::endl; 
return 0; 
} 