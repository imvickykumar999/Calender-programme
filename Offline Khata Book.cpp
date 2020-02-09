// Font size 12

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

#include <ctime>
time_t now = time(0);
tm *ltm = localtime(&now);

#define symbol 51
using namespace std;
int line, i = 1;
char cust[20];

struct tithi
{
	int year, month, date;
};

class transaction
{
	float Price;
	char Product[50];
	tithi today;
	char pre[20];

  public:
	float Total;
	void getdata();
	void putdata();
	void getexist(char *cust);
	void putexist();
};

void transaction::getdata()
{
	for (line = 0; line < symbol; line++)
		cout << "-";
	cout << "\n\n";

	cout << "Enter Price (Rs.) : ";
	cin >> Price;
	Total += Price;

	if (Price < 0)
	{
		strcpy(Product, "...PAID");
		cout << "Status : PAID...\n";
	}
	else
	{
		cout << "Enter Product : ";
		fflush(stdin);
		gets(Product);
	}

	cout << "\nToday's DATE is automatically FETCHED...\n";
	today.date = ltm->tm_mday;
	today.month = 1 + ltm->tm_mon;
	today.year = 1900 + ltm->tm_year;
}

void transaction::putdata()
{
	cout << "\nPrice (Rs.) : " << Price << " <----";
	cout << "\nProduct : " << Product;
	cout << "\nDate : " << today.date << "/" << today.month << "/" << today.year;
	cout << endl;
}

void transaction::getexist(char *cust)
{
	strcpy(pre, cust);
}

void transaction::putexist()
{
	cout << "\n"
		 << i++ << "). " << pre;
}

int main()
{
	int lowup, ch;
	char rep, del[10];
	transaction transfer;
	
	cout << "\nWELCOME TO KHATA BOOK SPECIALLY FOR SHOPKEEPERS..!\n";
	cout << endl;
	for (line = 0; line < symbol; line++)
		cout << "_";
	cout << endl;

	ofstream out("pre", ios::app);
	cout << "\nDelete Pre-Exist CUSTOMER'S DETAILS? (PRESS n) : ";
	cin >> del;
	if (!strcmp(del, "!@#$%"))
	{
		remove("pre");
		goto remove;
	}

	while (1)
	{
	move:
		system("cls");
		if ("pre")
		{
			i = 1;
			cout << "\nPre-Exist CUSTOMERS are...\n";
			ifstream in("pre", ios::in);
			in.read((char *)&transfer, sizeof(transfer));

			while (!in.eof())
			{
				transfer.putexist();
				in.read((char *)&transfer, sizeof(transfer));
			}
			in.close();
		}

	remove:
		cout << endl;
		for (line = 0; line < symbol; line++)
			cout << "_";
		cout << endl;

		cout << "\nEnter Customer CODE : ";
		fflush(stdin);
		gets(cust);

		for (lowup = 0; lowup < strlen(cust); lowup++)
			cust[lowup] = char(tolower(cust[lowup]));

		do
		{
			system("cls");
			cout << endl;
			for (line = 0; line < symbol; line++)
				cout << "*";
			cout << endl;

			cout << ">>>> Customer CODE : " << cust << endl;
			for (line = 0; line < symbol; line++)
				cout << "-";
			cout << endl;

			ifstream fi(cust, ios::in);
			if (!fi)
			{
				cout << "\nCUSTOMER not Found (404)\n";

				cout << "\nContinue with this CUSTOMER..? (n) : ";
				cin >> rep;

				if (rep == 'Y' || rep == 'y')
				{
					ofstream out("pre", ios::app);
					transfer.getexist(cust);
					out.write((char *)&transfer, sizeof(transfer));
					out.close();
					goto xy;
				}
				else
					goto move;
			}

			fi.read((char *)&transfer, sizeof(transfer));
			while (!fi.eof())
			{
				transfer.putdata();
				fi.read((char *)&transfer, sizeof(transfer));
			}
			cout << "\n>>> Total Money To Pay (Rs.) : " << transfer.Total << "\n";

			cout << "\nWanna PAY (TOTAL) BALANCE..? (n) : ";
			cin >> del;
			if (!strcmp(del, "!@#$%"))
			{
			xy:
				ofstream fo(cust, ios::out);
				transfer.Total = 0;
				cout << "\n>>> ACCOUNT RE-STARTED..!\n\n";
			}

			ofstream fo(cust, ios::app);
			transfer.getdata();
			fo.write((char *)&transfer, sizeof(transfer));
			cout << "\n>>> Record is added.\n";

			cout << "\nWanna (PURCHASE) more Products / Services..? (n) : ";
			cin >> rep;
			fo.close();
			fi.close();
			
		} while (rep == 'Y' || rep == 'y');
	}
	return 0;
}

//Khata
