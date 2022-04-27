//#include<iostream>
//
//using namespace std;
//
//int nhuan(int y)
//{
//    return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
//}
//int songaytrongthang(int m, int y)
//{
//    switch (m)
//    {
//    case 1:case 3:case 5:case 7:case 8:case 10:case 12:
//    {
//        return 31;
//        break;
//    }
//    case 2:
//    {
//        if (nhuan(y))
//        {
//            return 29;
//        }
//        return 28;
//    }
//    case 4:case 6:case 9:case 11:
//    {
//        return 30;
//    }
//    }
//}
//int ngaytrongnam(int d, int m, int y)
//{
//    int count = 0;
//    if (m == 1)
//        return d;
//    for (int i = 1; i <= m - 1; i++)
//        count += songaytrongthang(i, y);
//    return d + count;
//}
//int chuyen(char c)
//{
//    return (int)c - 48;
//}
//int main() {
//    char a[11];
//    cout << "Nhap vao ngay thang nam (dd-mm-yyyy): ";
//    cin.getline(a, 10);
//    cout << "Day la ngay thu " << ngaytrongnam(chuyen(a[0]) * 10 + chuyen(a[1]), chuyen(a[3]) * 10 + chuyen(a[4]), chuyen(a[6]) * 1000 + chuyen(a[7]) * 100 + chuyen(a[8]) * 10 + chuyen(a[9])) << " trong nam" << endl;
//
//    system("pause");
//}