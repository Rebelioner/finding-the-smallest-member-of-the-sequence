#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
   int n,a, min;
   cout << "Введите n:" << endl;
   cin >> n;
   int axis = 0;
   while(n != 0)
   {
       --n;
       cout << "Введите число:" << endl;
       cin >> a;
       
       if((a < 0) and (axis == 0))
       {
           min = a;
           axis++;
          
           
       }
       else
       {
           if((a<0) and (a>min))
           {
               
               min = a;
           }
           
           
           
       }
       
       
       
       
   }
   cout <<"Наибольшее отрицательное:" <<  min << endl;
}