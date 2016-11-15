#include "Diem.h"

float CDiem::GetHoanhDo()
{
	return x;
}
float CDiem::GetTungDo()
{
	return y;
}
void CDiem::SetHoanhDo(float hoanhdo)
{
	x = hoanhdo;
}
void CDiem::SetTungDo(float tungdo)
{
	y = tungdo;
}
void CDiem::operator=(CDiem &a)
{
	x = a.x;
	y = a.y;
}
void CDiem::NhapDiem()
{
	cout << "Nhap tung do: "; cin >> x;
	cout << "Nhap hoanh do: "; cin >> y;
}
void CDiem::XuatDiem()
{
	cout << '(' << x << ',' << y << ')';
}
float CDiem::KhoangCach2Diem(CDiem &a)
{
	return sqrt(pow(a.x - x, 2.0) + pow(a.y - y, 2.0));
}
CDiem CDiem::TrungDiem(CDiem &a)
{
	CDiem trungdiem;
	trungdiem.x = (x + a.x) / 2;
	trungdiem.y = (y + a.y) / 2;
	return trungdiem;
}