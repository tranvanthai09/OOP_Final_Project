#pragma once
#include "HocVien.h"
class KhoaVip :  public HocVien
{
private:
	int const HocPhi = 18000000;
public:
	int TongHocPhi();
	bool KhoaCoHocThucHanh();
	bool HocKhoaNangCao();
	int LaySoLanThiLaiThucHanh();
};

