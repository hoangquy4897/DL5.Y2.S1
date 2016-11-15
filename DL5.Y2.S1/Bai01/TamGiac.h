#pragma once
#include "Diem.h"
#include "DuongThang.h"

class CTamGiac
{
private:
	CDiem D1, D2, D3;
public:
	CTamGiac()
	{
		D1 = CDiem();
		D2 = CDiem();
		D3 = CDiem();
	}
	CTamGiac(CDiem d1, CDiem d2, CDiem d3)
	{
		D1 = d1;
		D2 = d2;
		D3 = d3;
	}
	~CTamGiac() {};
	float ChuVi();
	float DienTich();
	CDiem TrongTam();
	CDiem TamDuongTronNgoaiTiep();
	void NhapTamGiac();
	void XuatTamGiac();
};

