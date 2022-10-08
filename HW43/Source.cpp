#include<iostream>
#include<vector>


using namespace std;

int main()
{
	vector<int> vec;
	int a;
	while (true)
	{
		cout << "\nEnter element of vector:	";
		cin >> a;
		if (vec.size() < 10)
		{
			vec.push_back(a);
		}
		else
		{
			vec.erase(vec.begin());
			vec.push_back(a);
		}
		for (size_t i = 0; i < vec.size(); i++)
		{
			cout << vec[i] << " ";
		}
	}

}