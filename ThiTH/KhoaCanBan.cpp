#include "KhoaCanBan.h"

void KhoaCanBan::NhapThongTin()
{
	HocVien::NhapThongTin();
	cout << "So lan thi lai ly thuyet: ";
	cin >> SoLanThiLaiLyThuyet;
	cout << "So lan thi lai thuc hanh: ";
	cin >> SoLanThiLaiThucHanh;
}

void KhoaCanBan::XuatThongTin()
{
	HocVien::XuatThongTin();
	cout << "So lan thi lai ly thuyet: ";
	cout << SoLanThiLaiLyThuyet << endl;
	cout << "So lan thi lai thuc hanh: ";
	cout << SoLanThiLaiThucHanh << endl;
}

int KhoaCanBan::TongHocPhi()
{
	return HocPhi + SoLanThiLaiLyThuyet * ThiLaiLyThuyet + SoLanThiLaiThucHanh * ThiLaiThucHanh;
}

bool KhoaCanBan::KhoaCoHocThucHanh()
{
	return false;
}

bool KhoaCanBan::HocKhoaNangCao()
{
	return false;
}

int KhoaCanBan::LaySoLanThiLaiThucHanh()
{
	return SoLanThiLaiThucHanh;
}
