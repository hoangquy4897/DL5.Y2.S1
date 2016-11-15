#include "TamGiac.h"

float CTamGiac::ChuVi()
{
	return D1.KhoangCach2Diem(D2) + D2.KhoangCach2Diem(D3) + D3.KhoangCach2Diem(D1);
}

float CTamGiac::DienTich()
{
	CDuongThang duongcao;
	CDuongThang canhday(D3, D2); //canh day cua tam giac

	float dodaicanhday = D2.KhoangCach2Diem(D3); //tinh do dai canh day

	duongcao = canhday.TimDuongThangVuongGoc(D1); //tim duong cao cua tam giac di qua D1

	CDiem giaodiem = canhday.TimGiaoDiem(duongcao); //tim giao diem cua canh day va duong cao

	float chieucao = giaodiem.KhoangCach2Diem(D1); //tinh do dai chieu cao

	float dientich = 0.5*dodaicanhday*chieucao; //tinh dien tich

	return dientich;
}

CDiem CTamGiac::TrongTam()
{
	CDiem trdiemD1D2 = D1.TrungDiem(D2); //tim trung diem D1 va D2
	CDiem trdiemD2D3 = D2.TrungDiem(D3); //tim trung diem D2 va D3

	CDuongThang trtuyenD1(D1, trdiemD2D3); //tim trung tuyen chay qua D1 va trung diem cua D2 D3
	CDuongThang trtuyenD3(D3, trdiemD1D2); //tim truyen tuyen chay qua D3 va trung diem cua D1 D2

	CDiem trongtam = trtuyenD1.TimGiaoDiem(trtuyenD3); //trong tam la giao diem giua 2 duong trung tuyen
	return trongtam;
}

CDiem CTamGiac::TamDuongTronNgoaiTiep()
{
	CDiem trdiemD1D2 = D1.TrungDiem(D2); //tim trung diem D1 va D2
	CDiem trdiemD2D3 = D2.TrungDiem(D3); //tim trung diem D2 va D3

	CDuongThang D1D2(D1, D2); //duong thang D1D2
	CDuongThang D2D3(D2, D3); //duong thang D2D3

	CDuongThang trungtruc1 = D1D2.TimDuongThangVuongGoc(trdiemD1D2); //duong trung truc di qua trung diem D1D2
	CDuongThang trungtruc2 = D2D3.TimDuongThangVuongGoc(trdiemD2D3); //duong trung truc di qua trung diem D2D3

	CDiem tamduongtronnt = trungtruc1.TimGiaoDiem(trungtruc2); //tam duong tron ngoai tiep tam giac la giao diem cua 2 duong trung truc
	return tamduongtronnt;
}

void CTamGiac::NhapTamGiac()
{
	cout << "-Dinh 1: " << endl; D1.NhapDiem();
	cout << "-Dinh 2: " << endl; D2.NhapDiem();
	cout << "-Dinh 3: " << endl; D3.NhapDiem();
}

void CTamGiac::XuatTamGiac()
{
	cout << "Toa do cac dinh tam giac: ";
	D1.XuatDiem(); cout << " , ";
	D2.XuatDiem(); cout << " , ";
	D3.XuatDiem();
}