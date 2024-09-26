#include <iostream>
using namespace std;
class prices
{
protected:
    int bir, sna, cof, sam, sand, dah, jui, qor, chan, bis, shw, burg, spiz, lpiz, mpiz;

public:
    prices()
    {
        bir = 120, sna = 50, cof = 90, sam = 15, sand = 60, dah = 60, jui = 50, qor = 70, chan = 40, bis = 15, shw = 80, burg = 120, spiz = 180, lpiz = 500, mpiz = 250;
    }
    void display1()
    {
        cout << endl
             << endl;
        cout << "*************************************   WELLCOME TO RED CAFFINO   ****************************************  " << endl;
        cout << endl
             << endl
             << endl
             << endl;
        cout << "\t \t \t \t 1 \t:\t Biryani       = Rs \t" << bir << endl;
        cout << "\t \t \t \t 2 \t:\t Snacks        = Rs \t" << sna << endl;
        cout << "\t \t \t \t 3 \t:\t Coffee        = Rs \t" << cof << endl;
        cout << "\t \t \t \t 4 \t:\t Samosa        = Rs \t" << sam << endl;
        cout << "\t \t \t \t 5 \t:\t Sandwich      = Rs \t" << sand << endl;
        cout << "\t \t \t \t 6 \t:\t Dahi Bhallay  = Rs \t" << dah << endl;
        cout << "\t \t \t \t 7 \t:\t Juices        = Rs \t" << jui << endl;
        cout << "\t \t \t \t 8 \t:\t Qourma        = Rs \t" << qor << endl;
        cout << "\t \t \t \t 9 \t:\t Chanay        = Rs \t" << chan << endl;
        cout << "\t \t \t \t 10\t:\t Biscuits      = Rs \t" << bis << endl;
        cout << "\t \t \t \t 11\t:\t Shawarma      = Rs \t" << shw << endl;
        cout << "\t \t \t \t 12\t:\t Burger        = Rs \t" << burg << endl;
        cout << "\t \t \t \t 13\t:\t Small Pizza   = Rs \t" << spiz << endl;
        cout << "\t \t \t \t 14\t:\t Medium Pizza  = Rs \t" << mpiz << endl;
        cout << "\t \t \t \t 15\t:\t Large Pizza   = Rs \t" << lpiz << endl;
        cout << endl;
        cout << endl
             << endl
             << endl
             << endl;
        system("pause");
    }
};
class gettingopption : public prices
{
protected:
    int option;
    int T_Bill = 0;
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o;
    int price1 = 0, price2 = 0, price3 = 0, price4 = 0, price5 = 0, price6 = 0, price7 = 0, price8 = 0, price9 = 0, price10 = 0, price11 = 0, price12 = 0, price13 = 0, price14 = 0, price15 = 0;

public:
    void getoption()
    {
        cout << "*******************************     SELECT ITEM        *********************************  " << endl;
        cin >> option;
        cout << endl;
        switch (option)
        {
        case 1:
            cout << "Enter the Quantity \n";
            cin >> a;
            cout << "Price= Rs. " << a * bir << endl;
            price1 = a * bir;
            T_Bill += price1;
            break;
        case 2:
            cout << "Enter the Quantity \n";
            cin >> b;
            cout << "Price= Rs. " << b * sna << endl;
            price2 = b * sna;
            T_Bill += price2;
            break;
        case 3:
            cout << "Enter the Quantity \n";
            cin >> c;
            cout << "Price= Rs. " << c * cof << endl;
            price3 = c * cof;
            T_Bill += price3;
            break;
        case 4:
            cout << "Enter the Quantity \n";
            cin >> d;
            cout << "Price= Rs. " << d * sam << endl;
            price4 = d * sam;
            T_Bill += price4;
            break;
        case 5:
            cout << "Enter the Quantity \n ";
            cin >> e;
            cout << "Price= Rs. " << e * sand << endl;
            price5 = e * sand;
            T_Bill += price5;
            break;
        case 6:
            cout << "Enter the Quantity \n ";
            cin >> f;
            cout << "Price= Rs. " << f * dah << endl;
            price6 = f * dah;
            T_Bill += price6;
            break;
        case 7:
            cout << "Enter the Quantity \n ";
            cin >> g;
            cout << "Price= Rs. " << g * jui << endl;
            price7 = g * jui;
            T_Bill += price7;
            break;
        case 8:
            cout << "Enter the Quantity \n ";
            cin >> h;
            cout << "Price= Rs. " << h * qor << endl;
            price8 = h * qor;
            T_Bill += price8;
            break;
        case 9:
            cout << "Enter the Quantity \n ";
            cin >> i;
            cout << "Price= Rs. " << i * chan << endl;
            price9 = i * chan;
            T_Bill += price9;
            break;
        case 10:
            cout << "Enter the Quantity \n ";
            cin >> j;
            cout << "Price= Rs. " << j * bis << endl;
            price10 = j * bis;
            T_Bill += price10;
            break;
        case 11:
            cout << "Enter the Quantity \n ";
            cin >> k;
            cout << "Price= Rs. " << k * shw << endl;
            price11 = k * shw;
            T_Bill += price11;
            break;
        case 12:
            cout << "Enter the Quantity \n ";
            cin >> l;
            cout << "Price= Rs. " << l * burg << endl;
            price12 = l * burg;
            T_Bill += price12;
            break;
        case 13:
            cout << "Enter the Quantity \n ";
            cin >> m;
            cout << "Price= Rs. " << m * spiz << endl;
            price13 = m * spiz;
            T_Bill += price13;
            break;
        case 14:
            cout << "Enter the Quantity \n ";
            cin >> n;
            cout << "Price= Rs. " << n * mpiz << endl;
            price14 = n * mpiz;
            T_Bill += price14;
            break;
        case 15:
            cout << "Enter the Quantity \n ";
            cin >> o;
            cout << "Price= Rs. " << o * lpiz;
            price15 = o * lpiz;
            T_Bill += price15;
            break;
        }
    }
    void showbill()
    {
        cout << "**         YOUR BILL IS          **\n";
        cout << endl;
        if (price1 > 1)
        {
            cout << a << " Baryani    =Rs " << price1 << endl;
        }
        if (price2 > 1)
        {
            cout << b << " Snacks           =Rs " << price2 << endl;
        }
        if (price3 > 1)
        {
            cout << c << " Coffee           =Rs " << price3 << endl;
        }
        if (price4 > 1)
        {
            cout << d << " Samossa          =Rs " << price4 << endl;
        }
        if (price5 > 1)
        {
            cout << e << " Sanwitch         =Rs " << price5 << endl;
        }
        if (price6 > 1)
        {
            cout << f << " Dahi Bhallay     =Rs " << price6 << endl;
        }
        if (price7 > 1)
        {
            cout << g << " Juice            =Rs " << price7 << endl;
        }
        if (price8 > 1)
        {
            cout << h << " Qourma           =Rs " << price8 << endl;
        }
        if (price9 > 1)
        {
            cout << i << " Chanay           =Rs " << price9 << endl;
        }
        if (price10 > 1)
        {
            cout << j << " Biscuits         =Rs " << price10 << endl;
        }
        if (price11 > 1)
        {
            cout << k << " Shawarma         =Rs " << price11 << endl;
        }
        if (price12 > 1)
        {
            cout << l << " Burger           =Rs " << price12 << endl;
        }
        if (price13 > 1)
        {
            cout << m << " Small Pizza      =Rs " << price13 << endl;
        }
        if (price14 > 1)
        {
            cout << n << " Medium Pizza     =Rs " << price14 << endl;
        }
        if (price15 > 1)
        {
            cout << o << " Large Pizza      =Rs " << price15 << endl;
        }
        cout << "---------------------------------------------------------------";
        cout << endl;
        cout << "  Total Amount    = Rs" << price1 + price2 + price3 + price4 + price5 + price6 + price7 + price8 + price9 + price10 + price11 + price12 + price13 + price14 + price15 << endl;
        cout
            << endl;
        cout << "---------------------------------------------------------------";
        cout << endl;
        cout << "**   LEAVE THE CASH AT THE COUNTER   **   " << endl;
        cout << "**              THANK YOU            **   " << endl;
    }
};
int main()
{
    prices show;
    gettingopption g;
label:
    show.display1();
    g.getoption();
    char yes;
    cout << "IF YOU WANT TO SELECT MORE ITEMS PRESS y OR n " << endl;
    cin >> yes;

    if (yes == 'y')
    {
        goto label;
    }
    else
    {
        system("cls");

        g.showbill();
    }

    return 0;
}