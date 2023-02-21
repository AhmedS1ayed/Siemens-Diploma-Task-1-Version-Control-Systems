#include <iostream>
#include <vector>
#include "getSum.h"
#include "getAverage.h"
using namespace std;

int main()
{
	vector<int> test = {1,1,1,1,1,1,1,1,1,1};
	cout<<getSum(test)<<endl;
	cout<<getAverage(test)<<endl;

	return 0;
}
