// RenLuyenMangCoSoTimKiemTuyenTinh.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void NhapMang(float F[], int n);
void XuatMang(float F[], int n);
int DemPhanTuCanTim(float F[], int n, float x);
int MaxChan(float F[], int n);
int MinLe(float F[], int n);
int main()
{
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	float F[100];
	NhapMang(F, n);
	cout << "Mang sau khi nhap: \n";
	XuatMang(F, n);
	float x;
	cout << "\nNhap x: ";
	cin >> x;
	int d = DemPhanTuCanTim(F, n, x);
	cout << x << " xuat hien " << d << " lan \n";

	float maxchan = MaxChan(F, n);
	if (maxchan == -999999)
		cout << "Mang khong co so chan";
	else
		cout << "Max chan = " << maxchan;

	float minle = MinLe(F, n);
	if (minle == 99999999)
		cout << "\nMang khong co so le";
	else
		cout << "\nMin le = " << minle;
	return 0;
}

void NhapMang(float F[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i << ": ";
		cin >> F[i];
	}
}

void XuatMang(float F[], int n)
{
	for (int i = 0; i < n; i++)
		cout << F[i] << "\t";
}

int DemPhanTuCanTim(float F[], int n, float x)
{
	int d = 0;
	for (int i = 0; i < n; i++)
		if (F[i] == x)
			d++;
	return d;
}

int MaxChan(float F[], int n)
{
	float max = -999999;
	
	for (int i = 0; i < n; i++)
	{
		int f2 = (int)F[i];
		if (f2 == F[i])
			if (F[i] > max && f2 % 2 == 0)
				max = F[i];
	}
	return max;
}

int MinLe(float F[], int n)
{
	float min = 99999999;

	for (int i = 0; i < n; i++)
	{
		int f2 = (int)F[i];
		if (f2 == F[i])
			if (F[i] < min && f2 % 2 != 0)
				min = F[i];
	}
	return min;
}
