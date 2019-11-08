#include <iostream>
#include <string>
using namespace std;

int main3()
{
	int i, j;
	int max = 0;
	string s, s1,s2;
	getline(cin, s);
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				s1 += s[i++];
			}
			if (s1.size() > max)
			{
				s2 = s1;
				max = s1.size();
			}
		}
		s1.clear();
	}
	cout << s2;


	return 0;
}