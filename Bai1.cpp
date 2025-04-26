#include <iostream>
using namespace std;

// hàm kiểm tra số nguyên tố
bool laSoNguyenTo(int so)
{
    // loại bỏ trường hợp <=1
    if (so <= 1)
    {
        return false;
    }
    // duyệt từ 2 đến căn bược 2 của số
    for (int i = 2; i * i <= so; i++)
    {
        if (so % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    // nhập dữ liệu
    while (n <= 0)
    {
        cout << "phai la so nguyen duong. nhap lai: ";
        cin >> n;
    }

    if (n <= 2)
    {
        cout << "khong co so nguyen to lon hon  " << n << endl;
        return 0;
    }

    cout << "Cac so nguyen to nho hon " << n << " la: ";
    for (int i = 2; i < n; i++)
    {
        if (laSoNguyenTo(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}