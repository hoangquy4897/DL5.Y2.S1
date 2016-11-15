#pragma once
#include "Diem.h"

class CDuongThang
{
private:
	float a, b, c;
public:
	CDuongThang()
	{
		a = b = c = 0;
	}
	CDuongThang(CDiem dau, CDiem cuoi)
	{
		a = cuoi.GetHoanhDo() - dau.GetHoanhDo();
		b = -(cuoi.GetTungDo() - dau.GetTungDo());
		c = -a*dau.GetHoanhDo() + b*dau.GetTungDo();
	}
	~CDuongThang() {};
	CDiem TimGiaoDiem(CDuongThang&); //Tim giao diem voi mot duong thang khac
	CDuongThang TimDuongThangVuongGoc(CDiem&); // Tim duong thang vuong goc di qua 1 diem
	void NhapDuongThang();
	void XuatDuongThang();
};

