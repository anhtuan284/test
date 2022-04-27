//#include<iostream>
//#include<cstring>
//using namespace std;
//
//bool isWhiteSpace(char c) 
//{
//	return c == ' ' || c == '\t' || c == '\n';
//}
//
//void xoaCuoi(char* s) 
//{
//	long len = strlen(s);
//	long int i = len - 1;
//	while (isWhiteSpace(s[i])) {
//		s[i] = '\0';
//		i--;
//	}
//}
//
//int SoKhoangTrang(char* s)
//{
//	int count = 0;
//	while (*s)
//	{
//		if (isWhiteSpace(*s) == true)
//			count++;
//		s++;
//	}
//	return count;
//}
//
//void xoaDau(char* s) 
//{
//	long i;
//	long len = strlen(s);
//	int counter = SoKhoangTrang(s);
//	// xoa khoang trang
//	for (i = 0; i <= len - counter; i++)
//	{
//		s[i] = s[i + counter];
//	}
//}
//
//int demInHoa(char* s)
//{
//	int count = 0;
//	while (*s)
//	{
//		if (isupper(*s))
//			count++;
//		s++;
//	}
//	return count;
//}
//
//int demInThuong(char* s)
//{
//	int count = 0;
//	while (*s)
//	{
//		if (islower(*s))
//			count++;
//		s++;
//	}
//	return count;
//}
//
//void InHoa(char* s)
//{
//	while (*s)
//		if (*s >= 'A' && *s <= 'Z' || *s >= 'a' && *s <= 'z')
//			*s = toupper(*s);
//}
//void InThuong(char* s)
//{
//	while (*s)
//		if (*s >= 'A' && *s <= 'Z' || *s >= 'a' && *s <= 'z')
//			*s = tolower(*s);
//}
//void InHoaKTDau(char* s)
//
//{
//    while (*s)
//    {
//        if (*s == ' ')
//        {
//            s++;
//        }
//        else
//            break;
//    }
//    if (*s)
//        *s = toupper(*s);
//    if (*s)
//        s++;
//
//    while (*s)
//    {
//        if (*(s - 1) == ' ' && *s >= 'a' && *s <= 'z')
//            *s = toupper(*s);
//        else
//            *s = tolower(*s);
//        s++;
//    }
//}
//
//int DemTu(char* s)
//{
//	char* p = new char[strlen(s) + 1];
//	int count = 0;
//	strcpy(p, s);
//	char* n = strtok(p, " ");
//	while (n != NULL)
//	{
//		count++;
//		n = strtok(NULL, " ");
//	}
//	return count;
//
//	
//}
//
//int main()
//{
//	char s[1000];
//	cout << "Nhap chuoi s:";
//	cin.get(s, 999);
//
//	cout << DemTu(s) << endl;
//	cout << s << " end" << endl;
//	system("pause");
//}