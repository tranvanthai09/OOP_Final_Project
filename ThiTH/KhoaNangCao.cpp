#include "KhoaNangCao.h"

void KhoaNangCao::NhapThongTin()
{
	HocVien::NhapThongTin();
	cout << "So lan thi lai ly thuyet: ";
	cin >> SoLanThiLaiLyThuyet;
	cout << "So lan thi lai thuc hanh: ";
	cin >> SoLanThiLaiThucHanh;
	cout << "So gio hoc thuc hanh 1 - 1: ";
	cin >> SoGioHocTH11;
}

void KhoaNangCao::XuatThongTin()
{
	HocVien::XuatThongTin();
	cout << "So lan thi lai ly thuyet: ";
	cout << SoLanThiLaiLyThuyet << endl;
	cout << "So lan thi lai thuc hanh: ";
	cout << SoLanThiLaiThucHanh << endl;
	cout << "So gio hoc thuc hanh 1 - 1: ";
	cout << SoGioHocTH11 << endl;
}

int KhoaNangCao::TongHocPhi()
{
	return HocPhi + SoGioHocTH11 * PhiHocThucHanh11;
}

bool KhoaNangCao::KhoaCoHocThucHanh()
{
	return true;
}

bool KhoaNangCao::HocKhoaNangCao()
{
	return true;
}

int KhoaNangCao::LaySoLanThiLaiThucHanh()
{
	return SoLanThiLaiThucHanh;
}
