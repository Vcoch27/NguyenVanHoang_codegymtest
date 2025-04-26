#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cout << "Nhap so phan tu n: ";
    cin >> n;

    while (n <= 0)
    {
        cout << "Phai la nguyen duong, nhap lai:";
        cin >> n;
    }

    // mảng phần tử n
    int arr[100];
    cout << "nhap du lieu cho mang:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    // dem gia trj phan biet trong mang
    int count = 0;
    // mac dinh,
    bool daDem[100] = {false};

    // duyet 2 vong lap dể đếm số lượng phần tử khác nhau
    for (int i = 0; i < n; i++)
    {
        if (!daDem[i])
        {
            count++;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] == arr[i])
                {
                    daDem[j] = true;
                }
            }
        }
    }

    // in ra result
    cout << "So luong gia tri phan biet trong mang: " << count << endl;

    return 0;
}