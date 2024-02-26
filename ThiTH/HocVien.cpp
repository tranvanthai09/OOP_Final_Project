#include "HocVien.h"
#include <iostream>
#include <string>

using namespace std;

void HocVien::NhapThongTin()
{
	cout << "Ho ten: ";
	cin.ignore();
	getline(cin, HoTen);
	cout << "Ngay sinh: ";
	getline(cin, NgaySinh);
	cout << "CMND: ";
	cin >> CMND;
	cout << "Chieu cao: ";
	cin >> ChieuCao;
	cout << "Can nang: ";
	cin >> CanNang;
}

void HocVien::XuatThongTin()
{
	cout << "Ho ten: ";
	cout << HoTen << endl;
	cout << "Ngay sinh: ";
	cout << NgaySinh << endl;
	cout << "CMND: ";
	cout << CMND << endl;
	cout << "Chieu cao: ";
	cout << ChieuCao << endl;
	cout << "Can nang: ";
	cout << CanNang << endl;
}
