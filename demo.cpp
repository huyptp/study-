#include<iostream>
int * nhap_mang(int a, int*arr)
{
	for (int i = 0; i < a; i++)
	{
		std::cout << "Nhap phan tu arr[" << i+1 << "]: ";
		std::cin >> arr[i];
	}
	return &*arr;
}
void xuat_mang(int a , int *&arr)
{
	std::cout << "Mang vua tao la: ";
	for (int i = 0; i < a; i++)
	{
		std::cout << arr[i] << ", ";

	}
}
bool check_so_chinh_phuong(int x)
{
	if (sqrt(x) * sqrt(x) == x)
	{
		return true;
	}
	return false;
}
int dem_so_chinh_phuong(int a, int*&arr)
{
	int so_luong = 0;
	for (int i = 0; i < a; i++)
	{
		if (check_so_chinh_phuong(arr[i]) == true)
		{
			so_luong += 1;
		}
	}
	return so_luong;
}
bool check_so_hoan_thien()
{
	int uoc = 0;
	for 
}
int main()
{
	int a = 5;
	int* arr = new int[a];
	nhap_mang(a, arr);
	xuat_mang(a, arr);
	std::cout << std::endl; 
	std::cout << "So luong so chinh phuong trong mang la : " << dem_so_chinh_phuong(a, arr);
	delete arr;
	return 0;
}