#include <iostream>
#include <PhanSo.h>

using namespace std;

// Hàm tìm UCLN
int UCLN(int a, int b) {
    if (b == 0)
        return a;
    return UCLN (b, a % b);
}

// Nhập tử số và mẫu số
void PhanSo::Nhap() {
    cout << "Nhap tu: ";
    cin >> iTu;
    do {
        cout << "Nhap mau (khac 0): ";
        cin >> iMau;
    } while (iMau == 0);
}

// In phân số dưới dạng: tử số/mẫu số
void PhanSo::Xuat() {
    cout << iTu << "/" << iMau;
}

void PhanSo::RutGon() {
    int ucln = UCLN(abs(iTu), abs(iMau));
    iTu /= ucln;
    iMau /= ucln;

    // Đưa dấu về tử
    if (iMau < 0) {
        iTu = -iTu;
        iMau = -iMau;
    }
}

PhanSo PhanSo::TinhTong(PhanSo ps) {
    PhanSo kq;
    kq.iTu = iTu * ps.iMau + ps.iTu * iMau;
    kq.iMau = iMau * ps.iMau;
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::TinhHieu(PhanSo ps) {
    PhanSo kq;
    kq.iTu = iTu * ps.iMau - ps.iTu * iMau;
    kq.iMau = iMau * ps.iMau;
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::TinhTich(PhanSo ps) {
    PhanSo kq;
    kq.iTu = iTu * ps.iTu;
    kq.iMau = iMau * ps.iMau;
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::TinhThuong(PhanSo ps) {
    PhanSo kq;
    kq.iTu = iTu * ps.iMau;
    kq.iMau = iMau * ps.iTu;
    kq.RutGon();
    return kq;
}

int PhanSo::SoSanh(PhanSo ps) {
    // Quy đồng
    int left = iTu * ps.iMau;
    int right = ps.iTu * iMau;

    if (left > right)
        return 1;
    if (left == right)
        return 0;
    return -1;
}
