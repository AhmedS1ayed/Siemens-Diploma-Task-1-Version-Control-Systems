#include <iostream>
#include <vector>
#include "getSum.h"
#include "getAverage.h"
#include "getMin.h"

using namespace std;

int main()
{
	vector<int> test = {1,1,1,1,1,1,1,1,5,10};
	cout<<getSum(test)<<endl;
	cout<<getAverage(test)<<endl;
	cout<<getMin(test)<<endl;

	return 0;
}
