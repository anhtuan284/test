#include <iostream>
#include <cstring>
const int Max = 50;
using namespace std;

void tachHoTen(char* s)
{
	int tail; 
	for (int i = strlen(s) - 1; i >= 0; i--)
		if (s[i] == ' ')
		{
			tail = i;
			break;
		}
	cout << strtok(s, " ");

}
int demKhoangTrang(char* s)
{
	int count = 0;
	while (*s)
	{
		if (isspace(*s))
			count++;
		s++;
	}
	return count;

}
int main()
{
	int h, d, t;
	char ten[Max] = "      Truong bui anh tuan";
	system("pause");
}