#include <string>
#include <iostream>
#include <vector>
#include <set>

using namespace std;

void jolly(vector<int>& vec)
{
	set<int> differences;
	for (int i = 0; i < vec.size() - 1; i++)
	{
		differences.insert(abs(vec[i] - vec[i + 1]));
	}
	
	int i = 1;
	bool isjolly = true;
	set<int>::iterator it = differences.end();
	while (i < vec.size()-1 && isjolly)
	{
		it = differences.find(i);
		i++;
		if (it != differences.end())
		{
		}
		else
			isjolly = false;
	}

	if (isjolly)
	{
		for (int x : vec)
			cout << x << "    ";
		cout << "JOLLY" << endl;
	}
	else
	{
		for (int x : vec)
			cout << x << "    ";
		cout << "NOT JOLLY" << endl;
	}
}

int main()
{
	int x;
	int y;
	vector <int > inputs;
	do
	{
		inputs.clear();
		cout << "How many integers?: ";
		cin >> x;
		for (int i = 0; i < x; i++)
		{
			cin >> y;
			inputs.push_back(y);
		}

		if (x != 0)
		{ 
			jolly(inputs);
		}
	} while (x != 0);
}