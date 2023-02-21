#include<vector>
using namespace std;

int getMin(vector<int> input)
{
	int min=input[0];

	for(int i=0; i<input.size();i++)
	{
		if(input[i] < min)
			min=input[i];
	}
	return min;
}
