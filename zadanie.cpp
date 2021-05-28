//1е


#include <iostream>

using namespace std;

void swap(int* c , int* d) {
    int t;
    t = *c;
    *c = *d;
    *d = t;

}

void print(int* a, const int n)

{
    for (int i = 0; i < n; i++)

        cout << a[i] << " ";
    cout << "\n";



}


int main()
{

    int x = 1;
    int y = 0;


    const int n = 10;
    int a[n] = { x, x, y, y, x, y, x, x, y, y };


    print(a, n);

    swap(&x,&y);

    print(a, n);


}

//2e

#include <iostream>
using namespace std;


void func (int* a, const int n)
{
    
    
    for (int i = -1; i <= n+12; i++)
    {
        i += 2;
        cout << i << " "  ;
    }
   
  
    cout << "\n";
}

int main()
{
    
    const int n = 8;
    int a[n] = {};

   
    func(a,n);

    
    return 0;

    
}
