#include "DuongThang.h"

CDiem CDuongThang::TimGiaoDiem(CDuongThang &dt2)
{
	CDiem giaodiem;
	giaodiem.SetTungDo((-(dt2.c - ((dt2.a*c) / a))) / (dt2.b - ((dt2.a*b) / a)));
	giaodiem.SetHoanhDo((-b*giaodiem.GetTungDo() + c) / a);
	return giaodiem;
}

CDuongThang CDuongThang::TimDuongThangVuongGoc(CDiem &diem)
{
	CDuongThang dthang;
	dthang.a = a;
	dthang.b = -b;
	dthang.c = -a*diem.GetHoanhDo() - b*diem.GetTungDo();
	return dthang;
}

void CDuongThang::NhapDuongThang()
{
	cout << "a= "; cin >> a;
	cout << "b= "; cin >> b;
	cout << "c= "; cin >> c;
}

void CDuongThang::XuatDuongThang()
{
	cout << a << "x + " << b << "y + " << c << endl;
}