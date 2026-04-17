#include <iostream>
#include <GioPhutGiay.h>

using namespace std;

int main() {

    GioPhutGiay Time;

    cout << "Nhap gio phut giay:\n";
    Time.Nhap();

    cout << "\nGio phut giay vua nhap la: ";
    Time.Xuat();

    GioPhutGiay kq = Time.TinhCongThemMotGiay();
    cout << "\n\nKet qua sau khi cong them 1 giay: ";
    kq.Xuat();

    return 0;
}
