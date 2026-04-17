#include <iostream>
#include <PhanSo.h>

using namespace std;

int main() {
    PhanSo a, b;

    cout << "Nhap phan so A:\n";
    a.Nhap();

    cout << "Nhap phan so B:\n";
    b.Nhap();

    cout << "\nPhan so A: ";
    a.RutGon();
    a.Xuat();

    cout << "\nPhan so B: ";
    b.RutGon();
    b.Xuat();

    // Tính toán
    PhanSo tong = a.TinhTong(b);
    PhanSo hieu = a.TinhHieu(b);
    PhanSo tich = a.TinhTich(b);
    PhanSo thuong = a.TinhThuong(b);

    cout << "\n\nTong: ";
    tong.Xuat();

    cout << "\nHieu: ";
    hieu.Xuat();

    cout << "\nTich: ";
    tich.Xuat();

    cout << "\nThuong: ";
    thuong.Xuat();

    // So sánh
    int cmp = a.SoSanh(b);
    if (cmp == 1)
        cout << "\nA > B";
    else if (cmp == 0)
        cout << "\nA = B";
    else
        cout << "\nA < B";

    return 0;
}
