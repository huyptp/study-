#include <iostream>
// bai so 1 
float nhap_he_so( float  a)
{
    std::cin >> a; 
	return a; 
}
int nhap_gia_tri(/*int a, int b, int c*/ float& a, float& b, float& c)
{
	std::cout << "Moi ban nhap he so a: ";
	a = nhap_he_so(a);
	std::cout << "Moi ban nhao he so b: ";
	b = nhap_he_so(b);
	std::cout << "Moi ban nhao he so c: ";
	c = nhap_he_so(c);
	return a, b, c;
}
void phuong_trinh_bac_2(float  &a, float & b ,  float &c )
{
	/*std::cout << "Moi ban nhap he so a: ";
	a= nhap_he_so(a);
	std::cout << "Moi ban nhao he so b: ";
	b= nhap_he_so(b);
	std::cout << "Moi ban nhao he so c: ";
	c= nhap_he_so(c);*/
	// su li he so a bang 0 
	float   denta = b * b - 4 * a * c;
	if (a == 0)
	{
		if ( b == 0 && c == 0)
		{
			std::cout << "Phuong trinh co vo so nghiem. ";
		}
		if ( b == 0 && c != 0)
		{
			std::cout << "Phuong trinh vo nghiem. ";
		}
		if ( b != 0 && c != 0) 
		{
			std::cout << "Phuong trinh co nghiem duy nhat x = " << -c / b;
		}
	}
	// cac truong hop con lai 
	else
	{
		if (denta >= 0)
		{
			std::cout << "Phuong trinh co nghiem x_1 = " << (-b + sqrt(denta)) / (2 * a); std::cout << std::endl;
			std::cout << "Phuong trinh co nghiem x_2 = " << (-b - sqrt(denta)) / (2 * a);
		}
		else
		{
			std::cout << "Phuong trinh vo nghiem ";
		}
	}
}
int nhap_mang(int*& arr, int x)
{

	arr = new int[x];
	for (int i = 0; i < x; i++)
	{
		std::cout << "Moi ban nhap phan tu [" << i + 1 << "] ";
		std::cin >> arr[i];
	}
	return *arr;
}

bool    hoan_thien(int a)
{
	int tong_uoc = 0;
	for (int  i = 1; i < a   ; i++)
	{
		if (a % i == 0&& a!= i)
		{
			tong_uoc += i;
		}
	}
	return tong_uoc;
	if (tong_uoc == a)
	{
		return true;
	}
	return false;
}
void check_hoan_thien(int*& arr, int x )
{
	
	for (int i = 0; i < x; i++)
	{
		if (hoan_thien(arr[i]) == true)
		{
			std::cout << arr[i]; std::cout << std::endl;
		}
	}
}
int main()
{
	float  a, b, c, phantu;
	std::cout << "Moi ban nhap so phan tu cua mang ";
	std::cin >> phantu;
	int* arr;
	/*nhap_gia_tri(a, b, c);
	phuong_trinh_bac_2(a, b, c);*/
	nhap_mang(arr, phantu );
	check_hoan_thien(arr, phantu );
	/*for (int i = 0; i < phantu ; i++)
	{
		int x = arr[i];
		if (hoan_thien(x) == true)
		{
			std::cout << arr[i]; std::cout << std::endl;
		}
	}*/
	hoan_thien(6);

	return 0;
}