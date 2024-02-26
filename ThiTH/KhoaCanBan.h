#pragma once
#include "HocVien.h"
class KhoaCanBan : public HocVien
{
private:
	int SoLanThiLaiLyThuyet;
	int SoLanThiLaiThucHanh;
	int const HocPhi = 4500000;
	int const ThiLaiLyThuyet = 50000;
	int const ThiLaiThucHanh = 400000;
public:
	void NhapThongTin();
	void XuatThongTin();
	int TongHocPhi();
	bool KhoaCoHocThucHanh();
	bool HocKhoaNangCao();
	int LaySoLanThiLaiThucHanh();
};

