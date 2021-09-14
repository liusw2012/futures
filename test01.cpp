#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector< vector<int> > v;
	vector<int> v1 = {1,2,3,4,5};
	vector<int> v2 = {6,7,8,9,10};
	v.push_back(v1);
	v.push_back(v2);
	for (auto i = v.begin(); i != v.end(); i++)
	{
		for (auto j = i->begin(); j != i->end(); j++)
		{
			std::cout << *j << " " << std::endl;
		}
	}
	std::cout << "hello,world!" << std::endl;
	return 0;
}
