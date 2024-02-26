#include <iostream>
#include "DanhSachHocVien.h"

using namespace std;

int main()
{
	DanhSachHocVien i;
	i.NhapDS();
	i.XuatDS();
	cout << "Tong tien trung tam thu duoc: ";
	cout << i.TongTienThuDuocTuTH() << endl;
	cout << "% Khoa nang cao khong can thi lai: ";
	cout << i.KhoaNangCaoKhongCanThiLaiTH() << "%\n";
	cout << "Trung binh khoa nang cao thi lai thuc hanh: ";
	cout << i.TBThiLaiKhoaNangCao() << " lan\n";
	return 0;
}