#include <iostream>

using namespace std;

class Persegi
{
public:
    int xmin, xmax;
    int ymin, ymax;

    Persegi(int xmin, int xmax, int ymin, int ymax)
    {
        this->xmin = xmin;
        this->xmax = xmax;
        this->ymin = ymin;
        this->ymax = ymax;
    };

    bool operator==(const Persegi &balok)
    {
        // x
        if (this->xmin<balok.xmin &&this->xmax> xmin)
        {
            return true;
        }
        else
        {
            return false;
        }
        // y
        if (this->ymax > balok.ymin && this->ymin < ymin)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    Persegi operator+(const Persegi &balok)
    {
        int new_xmin = max(this->xmin, balok.xmin);
        int new_xmax = min(this->xmax, balok.xmax);
        int new_ymin = max(this->ymin, balok.ymin);
        int new_ymax = min(this->ymax, balok.ymax);

        return Persegi(new_xmin, new_xmax, new_ymin, new_ymax);
    }

    Persegi operator-(const Persegi &balok)
    {
        int new_xmin = min(this->xmin, balok.xmin);
        int new_xmax = max(this->xmax, balok.xmax);
        int new_ymin = min(this->ymin, balok.ymin);
        int new_ymax = max(this->ymax, balok.ymax);

        return Persegi(new_xmin, new_xmax, new_ymin, new_ymax);
    }

    void display()
    {
        cout << "xmin: " << xmin << ", xmax: " << xmax << ", ymin: " << ymin << ", ymax: " << ymax << endl;
    }
};

int main()
{
    Persegi persegi1(1, 4, 2, 8);
    Persegi persegi2(2, 6, 1, 6);

    if (persegi1 == persegi2)
    {
        cout << "Beririsan" << endl;
        Persegi c = persegi1 + persegi2;
        Persegi d = persegi1 - persegi2;

        cout << "persegi baru : ";
        c.display();

        cout << "persegi kecil : ";
        d.display();
    }
    else
    {
        cout << "Tidak beririsan" << endl;
    }

    return 0;
}
