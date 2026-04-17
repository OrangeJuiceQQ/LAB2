#ifndef SOPHUC_H
#define SOPHUC_H

class SoPhuc {
private:
    double iThuc;
    double iAo;
public:
    void Nhap();
    void Xuat();

    SoPhuc TinhTong(SoPhuc sp);
    SoPhuc TinhHieu(SoPhuc sp);
    SoPhuc TinhTich(SoPhuc sp);
    SoPhuc TinhThuong(SoPhuc sp);
};
#endif
