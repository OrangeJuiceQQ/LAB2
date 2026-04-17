#include <iostream>
#include "SoPhuc.h"

using namespace std;

// Nhập số phức gồm phần thực và phần ảo
void SoPhuc::Nhap() {
    cout << "Nhap phan thuc: ";
    cin >> iThuc;

    cout << "Nhap phan ao: ";
    cin >> iAo;
}

// In số phức dưới dạng: a+bi
// a: Phần thực, b: Phần ảo. VD: 2+3i
void SoPhuc::Xuat() {
    cout << iThuc;
    if (iAo >= 0)
        cout << "+";
    cout << iAo << "i";
}

SoPhuc SoPhuc::TinhTong(SoPhuc sp) {
    SoPhuc kq;
    kq.iThuc = iThuc + sp.iThuc;
    kq.iAo = iAo + sp.iAo;
    return kq;
}

SoPhuc SoPhuc::TinhHieu(SoPhuc sp) {
    SoPhuc kq;
    kq.iThuc = iThuc - sp.iThuc;
    kq.iAo = iAo - sp.iAo;
    return kq;
}

SoPhuc SoPhuc::TinhTich(SoPhuc sp) {
    SoPhuc kq;
    kq.iThuc = iThuc * sp.iThuc - iAo * sp.iAo;
    kq.iAo = iThuc * sp.iAo + iAo * sp.iThuc;
    return kq;
}

SoPhuc SoPhuc::TinhThuong(SoPhuc sp) {
    SoPhuc kq;
    double mau = sp.iThuc * sp.iThuc + sp.iAo * sp.iAo;
    kq.iThuc = (iThuc * sp.iThuc + iAo * sp.iAo) / mau;
    kq.iAo = (iAo * sp.iThuc - iThuc * sp.iAo) / mau;
    return kq;
}
