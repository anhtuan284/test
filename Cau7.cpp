//#include<iostream>
//
//using namespace std;
//
//char* find(char s1[], char s2[])
//{
//    for (int i = 0; i < strlen(s1); i++)
//        if (s1[i] == s2[0])
//        {
//            int count = 0;
//            for (int j = 0; j < strlen(s2); j++)
//            {
//                if (s1[j + i] == s1[j])
//                    count++;
//                else
//                    break;
//            }
//            if (count == strlen(s2))
//                return s1 + i;
//        }
//    return NULL;
//
//}
//
//int main()
//{
//    char s1[100],  s2[100];
//
//    cout << " Nhap chuoi ki tu s1: ";
//    cin.get(s1, 100);
//    cin.ignore();
//    cout << " Nhap chuoi ki tu s2: ";
//    cin.get(s2, 100);
//    cout << "\nChuoi ky tu 1 la: " << s1 << endl;
//    cout << "\nChuoi ky tu 2 la: " << s2 << endl;
//    cout << find(s1, s2) << endl;
//    system("pause>0");
//}