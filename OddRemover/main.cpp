#include<iostream>
using namespace std;

int main()
{
   int a[]= {28, 93, 72, 63, 86, 90, 64};
   int i = 0;
int j = 0;
int size = 7; // size of the array
for(i = 0; i < size; i++)
{
   if (a[i] % 2 == 0) // if a[i] should not be removed
   {
      if (i != j)
      {
         a[j] = a[i];
      }
      j++;
   }
}
size = j;
   for(int i = 0; i < 10; i++)
   {
      cout << a[i] << " ";
   }
   cout << endl;
   return 0;
}
