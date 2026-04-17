#ifndef PHANSO_H
#define PHANSO_H

class PhanSo {
private:
    int iTu;
    int iMau;

public:
    void Nhap();
    void Xuat();
    void RutGon();

    PhanSo TinhTong(PhanSo ps);
    PhanSo TinhHieu(PhanSo ps);
    PhanSo TinhTich(PhanSo ps);
    PhanSo TinhThuong(PhanSo ps);

    int SoSanh(PhanSo ps); // 1: >, 0: =, -1: <
};
#endif
