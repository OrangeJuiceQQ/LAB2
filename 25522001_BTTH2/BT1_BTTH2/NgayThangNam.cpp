#include <iostream>
#include "NgayThangNam.h"

using namespace std;

// Nhập ngày tháng năm
void NgayThangNam::Nhap() {
    cout << "Nhap ngay: ";
    cin >> iNgay;

    cout << "Nhap thang: ";
    cin >> iThang;

    cout << "Nhap nam: ";
    cin >> iNam;
}

// In kết quả dưới dạng: ngày/tháng/năm
void NgayThangNam::Xuat() {
    cout << iNgay << "/" << iThang << "/" << iNam;
}

NgayThangNam NgayThangNam::TinhNgayThangNamTiepTheo() {

    NgayThangNam kq;
    int temp = 0;
    kq.iNgay = iNgay + 1;

    // Xét tháng 2
    if (iThang == 2) {
        // Kiểm tra năm nhuận
        bool Nhuan = ((iNam % 4 == 0 && iNam % 100 != 0) || iNam % 400 == 0);
        if (Nhuan && kq.iNgay > 29) {
            kq.iNgay -= 29;
            temp = 1;
        }
        else if (!Nhuan && kq.iNgay > 28) {
            kq.iNgay -= 28;
            temp = 1;
        }
    }
    else {
        // Xét tháng có 30 ngày
        bool Thang30d = (iThang == 4 || iThang == 6 || iThang == 9 || iThang == 11);
        if (Thang30d && kq.iNgay > 30) {
            kq.iNgay -= 30;
            temp = 1;
        }
        // Xét tháng có 31 ngày
        else if (!Thang30d && kq.iNgay > 31) {
            kq.iNgay -= 31;
            temp = 1;
        }
    }
    kq.iThang = iThang + temp;
    kq.iNam = iNam;
    if (kq.iThang > 12) {
        kq.iThang -= 12;
        kq.iNam ++;
    }
    return kq;
}
