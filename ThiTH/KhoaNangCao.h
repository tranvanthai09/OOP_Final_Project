#pragma once
#include "HocVien.h"
class KhoaNangCao : public HocVien
{
private:
	int const HocPhi = 7500000;
	int SoGioHocTH11;
	int const PhiHocThucHanh11 = 200000;
	int SoLanThiLaiLyThuyet;
	int SoLanThiLaiThucHanh;
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

