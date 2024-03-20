#include<iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
void unit_1()
{
    //a
    int x,y;
    //b
    int *p;
    //c
    p=&x;
    //d
    *p=80;
    //e
    std::cout<< &x << std::endl;
    //f
    std::cout<< &p << std::endl;
    //g
    std:: cout << p << std::endl;
    //h
    std::cout<< x ;

}
int random()
{
    int x = rand() % 10;
    return x;
}
void unit_2(int x)
{
    //a
    int arr[30];
    //b
    for (int i=0;i< x;i++)
    {
        arr[i]=random();
    }
    //c
    int *p=arr;
    //d
    for(int i =0;i< x;i++)
    {

        std::cout<< *p<< " ";
        p++;
    }
}
int  UCLN(int x, int y )
{
    if(y==0)
    {
        return x;
    }
    else 
    {
        int d=x/y;
        return UCLN( y,d);
    }

}
void   unit_3(int x, int y )
{
   int *X= new int ;
   int *Y= new int ;
   *X=x;
   *Y=y;
   std::cout << "UCLN la: ";
   std::cout<< UCLN( *X, *Y );
   delete X,Y;
}
void unit_4(int b)
{
   int arr[30];
   int *p;
   for (int i=0;i< b; i++)
   {
    std::cin>> arr[i];
   }
   p=arr;
   for (int i=0;i< b; i++)
   {
    std::cout<< *p<< " ";
    p++;
   }
}
int main()
{
    unit_1();
    int x,y,a,b;
    std::cout <<std::  endl;
    std::cout << "Moi chon so phan tu trong mang cua bai 2 "<< std::endl;
    std::cin>> a;
    unit_2(a);
    std::cout <<std::  endl;
    std::cout<< "Moi ban nhap 2 so can tim UCLN: ";
    std:: cin>> x , y ;
    unit_3(x,y );
    std::cout <<std::  endl;
    std::cout <<"Moi ban nhap so phan tu trong mang cua bai 4: ";
    std::cin>> b;
    std::cout << std::  endl;
    unit_4(b);
    return 0;
}