//#include<iostream>
//
//using namespace std;
//
//bool KTpal (char* s)
//{
//	for (int i = 0; i < strlen(s) / 2; i++)
//		if (tolower(s[i]) != tolower(s[strlen(s) - i - 1]))
//			return false;
//	return true;
//}
//
//int main()
//{
//	char s[101];
//	cout << "Nhap chuoi:";
//	cin.get(s, 100);
//	if (KTpal(s) == true)
//		cout << "Chuoi doi xung" << endl;
//	else
//		cout << "Chuoi khong doi xung" << endl;
//	system("pause");
//}