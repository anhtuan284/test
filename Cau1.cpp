//#include <iostream>
//using namespace std;
//void soSanh(char* x, char* y)
//{
//    int c = 0;
//    while (*x)
//    {
//        c++;
//        x++;
//    }
//    while (*y)
//    {
//        c--;
//        y++;
//    }
//    if (c > 0)
//        cout << "chuoi a dai hon chuoi b" << endl;
//    else if (c < 0)
//        cout << "chuoi b dai hon chuoi a" << endl;
//
//    if (c == 0)
//        cout << "chuoi a bang chuoi b" << endl;
//}
//void inHoa(char* s)
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
//void noiChuoi(char* x, char* y, int m, int n)
//
//{
//
//    char c[102];
//    char* z = c;
//    for (int i = 0; i < m; i++)
//    {
//        *z = *x;
//        x++;
//        z++;
//    }
//    *z = ' ';
//    for (int i = 0; i < n; i++)
//    {
//        *z = *y;
//        y++;
//        z++;
//    }
//    *z = '\0';
//    cout << "\n"
//        << "Noi hai chuoi A va B: ";
//    z = z - (m + n);
//    while (*z)
//    {
//        cout << *z;
//        z++;
//    }
//    cout << endl;
//}
//
//int main()
//
//{
//    char a[51];
//    char b[51];
//    cout << " Nhap chuoi a:";
//    cin.getline(a, 51);
//
//    cout << " Nhap chuoi b:";
//    cin.getline(b, 51);
//    char* x = a;
//    char* y = b;
//    soSanh(x, y);
//
//    cout << "Chuoi A viet hoa la: ";
//
//    inHoa(x);
//    while (*x)
//    {
//
//        cout << *x;
//        x++;
//    }
//    cout << endl;
//
//    cout << "\n"
//        << "Chuoi B viet hoa la: ";
//    inHoa(y);
//
//    while (*y)
//    {
//
//        cout << *y;	
//        y++;
//    }
//    int m; // bien dem do dai chuoi 1
//    int n; // bien dem do dai chuoi 2
//    m = strlen(a);
//    n = strlen(b);
//
//    x = x - m;
//    y = y - n;
//
//    noiChuoi(x, y, m, n);
//    system("pause");
//}