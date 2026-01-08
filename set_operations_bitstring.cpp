#include <iostream>
using namespace std;

void readSet(const char *name, int &bits);
void printSet(const char *name, int bits);

int main()
{
    int A, B;
    cout << endl << endl;
    readSet("A", A);
    readSet("B", B);

    cout << "Results" << endl;
    printSet("A", A);
    printSet("B", B);
    printSet("A U B", A | B);
    printSet("A n B", A & B);
    printSet("A - B", A & (~B));
    cout << endl << endl;

    return 0;
}

void readSet(const char *name, int &bits)
{
    bits = 0;
    int x;
    cout << "Enter elements of " << name << " (-1 to stop): ";
    while (cin >> x && x != -1)
    {
        if (x >= 0 && x <= 9)
        {
            bits |= (1 << x);
        }
    }
}
void printSet(const char *name, int bits)
{
    cout << name << " = {";
    bool first = true;
    for (int i = 0; i <= 9; i++)
    {
        if (bits & (1 << i))
        {
            if (!first)
            {
                cout << ", ";
            }
            cout << i;
            first = false;
        }
    }
    cout << "}" << endl;
}
