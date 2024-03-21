#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
	int search(vector<int>& nums, int target) {
		int left = 0;
		int right = nums.size() - 1;
		while (left <= right)
		{
			int middle = left + (right - left) / 2;
			if (nums.at(middle) > target)
			{
				right = middle - 1;
			}
			else if (nums.at(middle) < target)
			{
				left = middle + 1;
			}
			else
			{
				return middle;
			}

		}
		return -1;
	}
};

int main()
{
	Solution s;
	vector<int>v;

	//二分法要求数组内容有序，数组中无重复数字
	v.push_back(-1);
	v.push_back(1);
	v.push_back(3);
	v.push_back(8);
	v.push_back(10);


	int r = s.search(v, 10);
	cout << r;

}