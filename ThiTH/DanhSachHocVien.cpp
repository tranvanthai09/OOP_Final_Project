#include "DanhSachHocVien.h"

void DanhSachHocVien::NhapDS()
{
	cout << "So luong: ";
	cin >> SoLuong;
	int x;
	DS = new HocVien * [SoLuong];
	for (int i = 0; i < SoLuong; i++)
	{
		cout << "1. Hoc vien khoa can ban\n";
		cout << "2. Hoc vien khoa nang cao\n";
		cout << "3. Hoc vien khoa vip\n";
		cout << "1/2/3: ";
		cin >> x;
		if (x == 1)
			DS[i] = new KhoaCanBan;
		else if (x == 2)
			DS[i] = new KhoaNangCao;
		else if (x == 3)
			DS[i] = new KhoaVip;
		DS[i]->NhapThongTin();
	}
}

void DanhSachHocVien::XuatDS()
{
	for (int i = 0; i < SoLuong; i++)
	{
		DS[i]->XuatThongTin();
	}
}

int DanhSachHocVien::TongTienThuDuocTuTH()
{
	int TongPhi = 0;
	for (int i = 0; i < SoLuong; i++)
	{
		if (DS[i]->KhoaCoHocThucHanh())
			TongPhi = TongPhi + DS[i]->TongHocPhi();
	}
	return TongPhi;
}

float DanhSachHocVien::KhoaNangCaoKhongCanThiLaiTH()
{
	float count1 = 0;
	float count2 = 0;
	for (int i = 0; i < SoLuong; i++)
	{
		if (DS[i]->HocKhoaNangCao())
		{
			count1 += 1;
			if (DS[i]->LaySoLanThiLaiThucHanh() == 0)
				count2 += 1;
		}
	}
	return count2 / count1 * 100;
}

float DanhSachHocVien::TBThiLaiKhoaNangCao()
{
	float count = 0;
	float count1 = 0;
	for (int i = 0; i < SoLuong; i++)
	{
		if (DS[i]->HocKhoaNangCao())
		{
			count += 1;
			count1 += DS[i]->LaySoLanThiLaiThucHanh();
		}
	}
	return count1 / count;
}
