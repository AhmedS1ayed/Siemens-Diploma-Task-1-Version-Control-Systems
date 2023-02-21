#include<vector>
using namespace std;

float getAverage(vector<int> input)
{
	float avg;
	for(int i=0; i<input.size() ;i++)
	{
		avg+=input[i];
	}
	avg=avg/input.size();
	return avg;
}
