#pragma once
#include "HocVien.h"
#include "KhoaCanBan.h"
#include "KhoaNangCao.h"
#include "KhoaVip.h"

class DanhSachHocVien
{
private:
	HocVien** DS;
	int SoLuong;
public:
	void NhapDS();
	void XuatDS();
	int TongTienThuDuocTuTH();
	float KhoaNangCaoKhongCanThiLaiTH();
	float TBThiLaiKhoaNangCao();
};

