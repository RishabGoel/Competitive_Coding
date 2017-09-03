#include <iostream>

using namespace std;




int main(int argc, char const *argv[])

{
	// int nums[10] = {-2, 1,-3, 4, -1, 2, 1, -5, 4};
	// int nums[10] = {-2, 1};
	int nums[10] = {-2, -1,-3, -4, -1, -2, -1, -5, -4};

	// This is greedy solution
	int i=0;
	int sum = nums[i];
	int curr_sum = nums[i];
	i++;
	
	while(i<sizeof(nums)/sizeof(*nums)){
		curr_sum = max(curr_sum + nums[i], nums[i]);
		sum = max(sum, curr_sum);
		i++;
	}
	cout<<sum;


	// for Divide and conquer solution keep track of the following
	// l : sum of sub array with sum starting from first element
	// s : sum of the entire subarray
	// r : sum of sub array with sum starting from end element
	// m : max sum of the subarray
	
	return 0;
}
