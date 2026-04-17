#include <iostream>
#include <NgayThangNam.h>

using namespace std;

int main() {

    NgayThangNam dmy;
    cout << "Nhap ngay thang nam:\n";
    dmy.Nhap();

    cout << "\nNgay thang nam vua nhap: ";
    dmy.Xuat();

    NgayThangNam Nextdmy = dmy.TinhNgayThangNamTiepTheo();
    cout << "\n\nNgay thang nam tiep theo: ";
    Nextdmy.Xuat();

    return 0;
}
