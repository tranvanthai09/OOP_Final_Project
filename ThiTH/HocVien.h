#pragma once
#include <iostream>
#include <string.h>

using namespace std;

class HocVien
{
protected:
	string HoTen;
	string NgaySinh;
	int CMND;
	float CanNang;
	float ChieuCao;
public:
	virtual void NhapThongTin();
	virtual void XuatThongTin();
	virtual int LaySoLanThiLaiThucHanh() = 0;
	virtual bool HocKhoaNangCao() = 0;
	virtual bool KhoaCoHocThucHanh() = 0;
	virtual int TongHocPhi() = 0;
};

