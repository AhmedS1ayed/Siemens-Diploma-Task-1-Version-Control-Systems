#include<vector>

using namespace std;

int getSum(vector<int> input)
{
	int sum =0;
	
	for(int i = 0; i < input.size() ; i++)
	{
		sum+=input[i];
	}

	return sum;
}
