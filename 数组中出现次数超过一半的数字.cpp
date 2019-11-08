#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int MoreThanHalfNum_Solution(vector<int> numbers)
{
	int n = numbers.size() / 2;
	int arr1[10] = { 0 };
	for (int i = 0; i < numbers.size(); i++)
	{
		arr1[numbers[i]]++;
	}
	for (int i = 0; i < 10; i++)
	{
		if (arr1[i] > n)
		{
			return i;;
		}
	}
	return 0;
}
int main()
{
	int arr[10] = { 1, 2, 2, 3, 2, 4, 5, 2, 2, 2 };
	vector<int> v(arr,arr+10);
	
	
	return 0;
}