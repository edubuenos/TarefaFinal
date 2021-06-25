#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
 srand (time(NULL));
int num = 0;
int a[50];
int i = 0;
 for (num=1; num<=50; num++){
a[num] = rand() %100;
if (num>=2){
cout << a[num] << " " << num << " " << a[num] * a[num-1] << "\n";
}
else {
  cout << a[num] << " " << num << " " << a[num] * 1 << "\n";
}
}
}
