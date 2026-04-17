#include <iostream>
#include "GioPhutGiay.h"

using namespace std;

// Nhập giờ phút giây
void GioPhutGiay::Nhap() {
    cout << "Nhap gio: ";
    cin >> iGio;

    cout << "Nhap phut: ";
    cin >> iPhut;

    cout << "Nhap giay: ";
    cin >> iGiay;
}

// In ra giờ phút giây dưới dạng hh:mm:ss
void GioPhutGiay::Xuat() {
    if (iGio < 10)
        cout << "0";
    cout << iGio << ":";

    if (iPhut < 10)
        cout << "0";
    cout << iPhut << ":";

    if (iGiay < 10)
        cout << "0";
    cout << iGiay;
}

GioPhutGiay GioPhutGiay::TinhCongThemMotGiay() {
    GioPhutGiay kq;
    kq.iGiay = iGiay + 1;
    kq.iPhut = iPhut;
    kq.iGio = iGio;

    if (kq.iGiay >= 60) {
        kq.iGiay -= 60;
        kq.iPhut ++;
    }
    if (kq.iPhut >= 60) {
        kq.iPhut -= 60;
        kq.iGio ++;
    }
    if (kq.iGio >= 24)
        kq.iGio -= 24;

    return kq;
}
