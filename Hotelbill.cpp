#include <iostream>
using namespace std;

int main()
{
    int tableNo;
    string name;
    long long contact;

    string item1, item2, item3;
    int price1, price2, price3;
    int total;
    float discount = 0, finalBill;

    cout << "Enter Table Number: ";
    cin >> tableNo;

    cout << "Enter Customer Name: ";
    cin >> name;

    cout << "Enter Customer Contact: ";
    cin >> contact;

    cout << "\nEnter Order Details\n";

    cout << "Enter Item 1 Name: ";
    cin >> item1;
    cout << "Enter Price: ";
    cin >> price1;

    cout << "Enter Item 2 Name: ";
    cin >> item2;
    cout << "Enter Price: ";
    cin >> price2;

    cout << "Enter Item 3 Name: ";
    cin >> item3;
    cout << "Enter Price: ";
    cin >> price3;

    total = price1 + price2 + price3;

    if (total > 1000)
    {
        discount = total * 0.10;
    }

    finalBill = total - discount;

    cout << "\n----- HOTEL BILL -----\n";
    cout << "Table Number: " << tableNo << endl;
    cout << "Customer Name: " << name << endl;
    cout << "Contact: " << contact << endl;

    cout << "\nOrder Details\n";
    cout << item1 << " : " << price1 << endl;
    cout << item2 << " : " << price2 << endl;
    cout << item3 << " : " << price3 << endl;

    cout << "Total Bill: " << total << endl;
    cout << "Discount: " << discount << endl;
    cout << "Final Amount: " << finalBill << endl;

    return 0;
}