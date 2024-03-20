#include <iostream>
void bai1()
{
    int arr[3][4]={8,4,-1,5,
                   2,2,6,9,
                   11,2,5,4};
    for (int i =0;i<3;i++)
    {
        for (int j=0;j<4;j++)
        {
            std::cout << arr[i][j]<< " ";

        }
        std::cout <<std::endl;
    }
}
void bai2()
{
    int arr[4][3];
    int hang=0;
    while(hang<4)
    {
        int cot=0;
        while(cot<3)
        {
            std::cin>>arr[hang][cot];
            cot++;
        }
        hang++;
    }
    std::cout<<"mang vua nhap la: " <<std::endl;
    for (int i =0;i<4;i++)
    {
        for (int j=0;j<3;j++)
        {
            std::cout << arr[i][j]<< " ";

        }
        std::cout <<std::endl;
    }
}
void bai3()
{
    int r,c;
    do
             {
              std::cout<<"moi ban nhap vao so hang hop le: ";
              std::cin>>r;
              std::cout<<std::endl;
              std::cout<<"moi ban nhap vao so cot hop le: ";
              std::cin>>c ;
             }while(r>10 && c>>15);
    
    int arr[10][15];
    for (int i =0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
             std::cin>>arr[i][j];
             std::cout<<"  ";
        }
        std::cout <<std::endl;
   
    }
    int tong=0;
    for (int i =0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
             tong+=arr[i][j];
        }
    }
    std::cout<<"tong cac phan tu trong mang la:"<< tong<<std::endl;
    int min=arr[0][0];
    int max=arr[0][0];
    for (int i =0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
             if(arr[i][j]> max)
             {
                max=arr[i][j];
             }
        }
   
    }
     for (int i =0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
             if(arr[i][j]< min)
             {
                min=arr[i][j];
             }
        }
   
    }
    std::cout<<" so lon nhat va so nho nhat la :"<< max<<" va "<<min;
}
int main()
{
    bai1();
    bai2();
    bai3();
    return 0;
}