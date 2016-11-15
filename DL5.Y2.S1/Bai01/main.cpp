#include "TamGiac.h"

void main()
{
	CTamGiac tamgiac;
	cout << "Nhap thong tin tam giac: " << endl;
	tamgiac.NhapTamGiac();
	int option;
	do
	{
		cout << "      **** Bang chuc nang ****      " << endl;
		cout << "|1. Tinh chu vi                    |" << endl;
		cout << "|2. Tinh dien tich                 |" << endl;
		cout << "|3. Tim trong tam                  |" << endl;
		cout << "|4. Tim tam duong tron ngoai tiep  |" << endl;
		cout << "|5. Xuat thong tin tam giac        |" << endl;
		cout << "|0. Thoat                          |" << endl;
		cout << "------------------------------------" << endl;
		cout << "Chon chuc nang: ";
		cin >> option;
		switch (option)
		{
		case 1: {cout << "Chu vi tam giac: "; 
			float chuvi=tamgiac.ChuVi(); 
			cout << chuvi << "\n\n\n"; 
		}break;
		case 2: {cout << "Dien tich tam giac: "; 
			float dientich=tamgiac.DienTich(); 
			cout << dientich << "\n\n\n"; 
		}break;
		case 3: {CDiem trongtam = tamgiac.TrongTam(); 
			cout << "Trong tam: "; 
			trongtam.XuatDiem(); 
			cout << "\n\n\n"; 
		}break;
		case 4: {
			CDiem tamduongtron = tamgiac.TamDuongTronNgoaiTiep();
			cout << "Tam duong tron ngoai tiep: ";
			tamduongtron.XuatDiem();
			cout << "\n\n\n";
		}break;
		case 5: {tamgiac.XuatTamGiac(); cout << "\n\n\n"; }break;
		case 0:break;
		}
	} while (option != 0);
}