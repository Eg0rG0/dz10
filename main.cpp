#include <iostream>

#include "Header.h"
using namespace std;
int main()
{
    Human a("Igor","Igorevich", "Igorev", 22);
    Boss b("Igor", "Igorevich", "Igorev", 32, 100);
    Student c("Igor", "Igorevich", "Igorev", 20, 1);
    a.Print();
    b.Print();
    c.Print();

}