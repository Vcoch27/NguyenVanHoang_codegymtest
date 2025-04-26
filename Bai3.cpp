#include <iostream>
#include <iomanip>
using namespace std;

struct SinhVien
{
    char hoTen[50];
    float diemToan;
    float diemLy;
    float diemHoa;
};

// điểm trung binh sinh viên
float tinhDiemTrungBinh(SinhVien sv)
{
    return (sv.diemToan + sv.diemLy + sv.diemHoa) / 3.0;
}

// hàm kiểm tra tính hợp lệ
bool kiemTraDiem(float diem)
{
    return diem >= 0 && diem <= 10;
}

int main()
{
    int n;
    // nhap dữ liệu
    do
    {
        cout << "Nhap n(so sv): ";
        cin >> n;
        if (n <= 0)
        {
            cout << "so luong phai lon hon 0\n";
        }
    } while (n <= 0);

    SinhVien sv[5] = {
        {"Nguyen Van A", 8.5, 7.0, 9.0},
        {"Tran Thi B", 6.5, 8.0, 7.5},
        {"Le Van C", 9.0, 8.5, 8.0},
        {"Pham Thi D", 7.5, 6.5, 9.5},
        {"Nguyen Van E", 8.0, 9.0, 7.0}};

    cout << "\nDIEM TRUNG BINH ALLL SINH VIEN\n";
    // duyệt qua từng sinh viên và tính điểm trung bình
    for (int i = 0; i < n; i++)
    {
        float dtb = tinhDiemTrungBinh(sv[i]);
        cout << "Sinh vien " << sv[i].hoTen
             << ": Diem TB = " << fixed << setprecision(2) << dtb << endl;
    }

    cout << "\nCAC SINH VIEN CO DIEM TRUNG BINH HON 8\n";
    for (int i = 0; i < n; i++)
    {
        float dtb = tinhDiemTrungBinh(sv[i]);
        if (dtb >= 8)
        {
            cout << sv[i].hoTen << " - DTB: " << dtb << endl;
        }
    }

    return 0;
}