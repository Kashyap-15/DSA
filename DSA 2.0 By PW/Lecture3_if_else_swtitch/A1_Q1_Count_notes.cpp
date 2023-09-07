#include <iostream>
using namespace std;
int main()
{
    // 2000,500,200,100,50,20,10,5,2,1
    int amount;
    cout << "Enter the Amount :";
    cin >> amount;
    int n1 = 0, n2 = 0, n5 = 0, n10 = 0, n20 = 0, n50 = 0, n100 = 0, n200 = 0, n500 = 0, n2000 = 0, notes = 0;

    // Swtich Statment
    switch (1)
    {
    case 1:
        n2000 = amount / 2000;
        amount -= (2000 * n2000);
    case 2:
        n500 = amount / 500;
        amount -= (500 * n500);
    case 3:
        n200 = amount / 200;
        amount -= (200 * n200);
    case 4:
        n100 = amount / 100;
        amount -= (100 * n100);
    case 5:
        n50 = amount / 50;
        amount -= (50 * n50);
    case 6:
        n20 = amount / 20;
        amount -= (20 * n20);
    case 7:
        n10 = amount / 10;
        amount -= (10 * n10);
    case 8:
        n5 = amount / 5;
        amount -= (5 * n5);
    case 9:
        n2 = amount / 2;
        amount -= (2 * n2);
    case 10:
        n1 = amount / 1;
        amount -= (1 * n1);
    default:
        break;
    }
    notes = n1 + n2 + n5 + n10 + n20 + n50 + n100 + n200 + n500 + n2000;
    cout << notes;

    // if statement

    // if (amount>=2000)
    // {
    //     n2000 = amount/2000;
    //     amount -= (2000*n2000);
    // }
    // if (amount>=500)
    // {
    //     n500 = amount/500;
    //     amount -= (500*n500);
    // }
    // if (amount>=200)
    // {
    //     n200 = amount/200;
    //     amount -= (200*n200);
    // }
    // if (amount>=100)
    // {
    //     n100 = amount/100;
    //     amount -= (100*n100);
    // }
    // if (amount>=50)
    // {
    //     n50 = amount/50;
    //     amount -= (50*n50);
    // }
    // if (amount>=20)
    // {
    //     n20 = amount/20;
    //     amount -= (20*n20);
    // }
    // if (amount>=10)
    // {
    //     n10 = amount/10;
    //     amount -= (10*n10);
    // }
    // if (amount>=5)
    // {
    //     n5 = amount/5;
    //     amount -= (5*n5);
    // }
    // if (amount>=2)
    // {
    //     n2 = amount/2;
    //     amount -= (2*n2);
    // }
    // if (amount>=1)
    // {
    //     n1 = amount/1;
    //     amount -= (1*n1);
    // }
    // notes = n1+n2+n5+n10+n20+n50+n100+n200+n500+n2000;
    // cout<<notes;
    return 0;
}