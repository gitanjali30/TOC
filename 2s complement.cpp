#include <bits/stdc++.h>
using namespace std;
char flip(char one)
{
    return (one == '0')? '1': '0';
}
int main()
{
	string s;
	cout<<"Enter the string "<<endl;
	cin>>s;
	int n,i;
    n = s.length();
	string ones, twos;
	ones = twos = "";
	for (i = 0; i < n; i++)
		ones += flip(s[i]);
	twos = ones;
	for (i = n - 1; i >= 0; i--)
	{
		if (ones[i] == '1')
			twos[i] = '0';
		else
		{
			twos[i] = '1';
			break;
		}
	}
	if (i == -1)
		twos = '1' + twos;

	cout << "2's complement: " << twos << endl;

	return 0;
}