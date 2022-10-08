#include <iostream>
#include <windows.h>

using namespace std;
class Digit {
private:
    int dig; // 
public:
    Digit()
    {
        dig = 0;
    }
    Digit(int iDig)
    {
        dig = iDig;
    }
    void Show() {
        cout << dig << "\n";
    }
    Digit operator + (const Digit& N)
    {
        Digit temp;
        temp.dig = dig + N.dig;
        return temp;
    }
    Digit operator-(const Digit& N)
    {
        Digit temp;
        temp.dig = dig - N.dig;
        return temp;
    }
    Digit operator*(const Digit& N)
    {
        Digit temp;
        temp.dig = dig * N.dig;
        return temp;
    }
    Digit operator%(const Digit& N)
    {
        if (N.dig != 0)
        {
            Digit temp;
            temp.dig = dig % N.dig;
            return temp;
        }
        else
        {
            Digit temp;
            temp.dig = 0;
            cout << "Division by zero. Zero-object created!\n";
            return temp;
        }
        cout << "UNDEFINED PROBLEM\n";
        return NULL;
    }
    Digit operator/(const Digit& N) {
        if (N.dig != 0)
        {
            Digit temp;
            temp.dig = dig / N.dig;
            return temp;
        }
        else
        {
            Digit temp;
            temp.dig = 0;
            cout << "Division by zero. Zero-object created!\n";
            return temp;
        }
        cout << "UNDEFINED PROBLEM\n";
        return NULL;
    }

};
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Digit A(9), B(-7);
    Digit C;
    cout << "Число A:\n";
    A.Show();
    cout << "Число B:\n";
    B.Show();
    cout << "Число С:\n";
    C.Show();
    cout << "\noperator+:\n";
    C = A + C;
    C.Show();
    cout << "\noperator-:\n";
    C = A - B;
    C.Show();
    cout << "\noperator*:\n";
    C = A * B;
    C.Show();
    cout << "\noperator/:\n";
    C = A / B;
    C.Show();
    cout << "\noperator%:\n";
    Digit D;
    C = A % D;
    C.Show();
}