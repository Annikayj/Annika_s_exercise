#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int BackToFront()
{
	vector<string> v;
	ifstream in("BackToFront.cpp");
	string line;
	while (getline(in, line))
		v.push_back(line);
	for (int i = v.size(); i > 0; i--)
		cout << i << " : " << v[i-1] << endl; //�����±�����ֵ�����鳤��С1~~
	return 0;
}