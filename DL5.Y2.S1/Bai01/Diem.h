#pragma once
#include <iostream>
using namespace std;

class CDiem
{
private:
	float x, y;
public:
	CDiem()
	{
		x = y = 0;
	}
	CDiem(float a, float b)
	{
		x = a;
		y = b;
	}
	~CDiem() {};
	float GetTungDo();
	float GetHoanhDo();
	void SetTungDo(float);
	void SetHoanhDo(float);
	void operator=(CDiem &);
	void NhapDiem();
	void XuatDiem();
	float KhoangCach2Diem(CDiem&);
	CDiem TrungDiem(CDiem&);
};

