// FONT SIZE IS 10 ....!

#include <iostream>
#include <cstring>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <ctime>
using namespace std;

#define symbol 60
#define times 3

int main()
{
	time_t now = time(0);
	tm *ltm = localtime(&now);
	int dd = 1 + ltm->tm_mon;

	int vartime = 0, divider, loop, pinloop, lowup, empty, pos, space, cinpos, once;

	int year, month, date, lastdate, cindate, cinmonth, cinyear, week, weekday, weekcount, cinweekcount;

	char choice, yno, pin[4], weekth[3], event[20], charmonth[10];

	char monthname[13] = {'n', 'J', 'F', 'M', 'A', 'M', 'J', 'J', 'A', 'S', 'O', 'N', 'D'};

	char fullmonth[12][10] = {"JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE", "JULY", "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"};

	char weekname[8] = {'n', 'S', 'M', 'T', 'W', 'T', 'F', 'S'};

	char dday[7][10] = {"SATURDAY", "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THRUSDAY", "FRIDAY"};

	do
	{
		cout << "\n\nWanna access CALENDAR ?...!";

		cout << "\n\nENTER 4 (FOUR) DIGIT PIN NUMBER!";

		cout << "\n\n >>>  ";

		for (pinloop = 0; pinloop < 4; pinloop++)
		{
			pin[pinloop] = getch();
			cout << "* ";
		}
		getch();

		cout << "\n\n";

		for (divider = 0; divider < symbol; divider++)
			cout << "=";

		if (pin[0] == '1' && pin[1] == '2' && pin[2] == '3' && pin[3] == '4')
		{
			cout << "\n\n ? PIN IS CORRECT...!\n\n";
			system("pause");

			do
			{
			move:

				loop = 1;
				space = 2;
				system("cls");

				cout << "\n1). FIND EVENTS";
				cout << "\n2). JUMP TO DATE";
				cout << "\n3). TODAY";
				cout << "\n\nEnter your CHOICE...";
				cout << "\n\n >>> ";
				cin >> choice;

				cout << "\n";

				for (divider = 0; divider < symbol; divider++)
					cout << "=";

				cout << endl;

				switch (choice)
				{
				case '1':
				{
					cout << "\nEnter Event Name : ";
					fflush(stdin);
					gets(event);

					for (lowup = 0; lowup < strlen(event); lowup++)
						event[lowup] = char(tolower(event[lowup]));

					if (!(strcmp(event, "new year")))
					{
						cinmonth = 1;
						cindate = 1;
					}

					else if (!(strcmp(event, "lohri")))
					{
						cinmonth = 1;
						cindate = 13;
					}

					else if (!(strcmp(event, "makar sankranti")))
					{
						cinmonth = 1;
						cindate = 14;
					}

					else if (!(strcmp(event, "pongal")))
					{
						cinmonth = 1;
						cindate = 15;
					}

					else if (!(strcmp(event, "republic day")))
					{
						cinmonth = 1;
						cindate = 26;
					}

					else if (!(strcmp(event, "vasant panchami")))
					{
						cinmonth = 2;
						cindate = 10;
					}

					else if (!(strcmp(event, "valentine's day")))
					{
						cinmonth = 2;
						cindate = 14;
					}

					else if (!(strcmp(event, "shivaratri")))
					{
						cinmonth = 3;
						cindate = 4;
					}

					else if (!(strcmp(event, "holika dahana")))
					{
						cinmonth = 3;
						cindate = 20;
					}
					
					else if (!(strcmp(event, "bhagirath's birthday")))
					{
						cinmonth = 5;
						cindate = 11;
					}

					else if (!(strcmp(event, "holi")))
					{
						cinmonth = 3;
						cindate = 9;
					}

					else if (!(strcmp(event, "april fool")))
					{
						cinmonth = 4;
						cindate = 1;
					}

					else if (!(strcmp(event, "somya's birthday")) || !(strcmp(event, "dhokri's' birthday")))
					{
						cinmonth = 4;
						cindate = 3;
					}

					else if (!(strcmp(event, "salini's birthday")))
					{
						cinmonth = 11;
						cindate = 4;
					}

					else if (!(strcmp(event, "sachin bhaiya's birthday")))
					{
						cinmonth = 7;
						cindate = 21;
					}

					else if (!(strcmp(event, "sneha's birthday")))
					{
						cinmonth = 9;
						cindate = 12;
					}

					else if (!(strcmp(event, "vicky's birthday")))
					{
						cinmonth = 4;
						cindate = 8;
					}

					else if (!(strcmp(event, "priyanka's birthday")) || !(strcmp(event, "popli's birthday")) || !(strcmp(event, "jhaplu's birthday")))
					{
						cinmonth = 7;
						cindate = 20;
					}

					else if (!(strcmp(event, "vritika's' birthday")) || !(strcmp(event, "chintu's' birthday")))
					{
						cinmonth = 4;
						cindate = 9;
					}

					else if (!(strcmp(event, "rama navami")))
					{
						cinmonth = 4;
						cindate = 13;
					}

					else if (!(strcmp(event, "vaisakhi")))
					{
						cinmonth = 4;
						cindate = 14;
					}

					else if (!(strcmp(event, "good friday")))
					{
						cinmonth = 4;
						cindate = 19;
					}

					else if (!(strcmp(event, "may day")))
					{
						cinmonth = 5;
						cindate = 1;
					}

					else if (!(strcmp(event, "mother's day")))
					{
						cinmonth = 5;
						cindate = 12;
					}

					else if (!(strcmp(event, "id-ul-fitar")))
					{
						cinmonth = 6;
						cindate = 5;
					}

					else if (!(strcmp(event, "father's day")))
					{
						cinmonth = 6;
						cindate = 16;
					}

					else if (!(strcmp(event, "friendship day")))
					{
						cinmonth = 8;
						cindate = 4;
					}

					else if (!(strcmp(event, "independence day")) || !(strcmp(event, "raksha bandhan")))
					{
						cinmonth = 8;
						cindate = 15;
					}

					else if (!(strcmp(event, "rajeev's birthday")))
					{
						cinmonth = 8;
						cindate = 16;
					}

					else if (!(strcmp(event, "janmashtami")))
					{
						cinmonth = 8;
						cindate = 24;
					}

					else if (!(strcmp(event, "ganesh chaturthi")))
					{
						cinmonth = 9;
						cindate = 2;
					}

					else if (!(strcmp(event, "onam")))
					{
						cinmonth = 9;
						cindate = 11;
					}

					else if (!(strcmp(event, "mahatma gandhi jayanti")))
					{
						cinmonth = 10;
						cindate = 2;
					}

					else if (!(strcmp(event, "navami")))
					{
						cinmonth = 10;
						cindate = 7;
					}

					else if (!(strcmp(event, "dussehra")))
					{
						cinmonth = 10;
						cindate = 8;
					}

					else if (!(strcmp(event, "diwali")))
					{
						cinmonth = 10;
						cindate = 27;
					}

					else if (!(strcmp(event, "govardhan puja")))
					{
						cinmonth = 10;
						cindate = 28;
					}

					else if (!(strcmp(event, "bhai duj")))
					{
						cinmonth = 10;
						cindate = 29;
					}

					else if (!(strcmp(event, "halloween")))
					{
						cinmonth = 10;
						cindate = 31;
					}

					else if (!(strcmp(event, "chhat puja")))
					{
						cinmonth = 11;
						cindate = 2;
					}

					else if (!(strcmp(event, "christmas eve")))
					{
						cinmonth = 12;
						cindate = 24;
					}

					else if (!(strcmp(event, "christmas")))
					{
						cinmonth = 12;
						cindate = 25;
					}

					else if (!(strcmp(event, "new year's eve")))
					{
						cinmonth = 12;
						cindate = 31;
					}

					else if (!(strcmp(event, "national youth day")))
					{
						cinmonth = 1;
						cindate = 12;
					}

					else if (!(strcmp(event, "army day")))
					{
						cinmonth = 1;
						cindate = 15;
					}

					else if (!(strcmp(event, "martyr's day")))
					{
						cinmonth = 1;
						cindate = 30;
					}

					else if (!(strcmp(event, "international women's day")))
					{
						cinmonth = 3;
						cindate = 8;
					}

					else if (!(strcmp(event, "world forestry day")))
					{
						cinmonth = 3;
						cindate = 21;
					}

					else if (!(strcmp(event, "world day for water")))
					{
						cinmonth = 3;
						cindate = 22;
					}

					else if (!(strcmp(event, "b.r. ambedkar rememberance day")))
					{
						cinmonth = 4;
						cindate = 14;
					}

					else if (!(strcmp(event, "world earth day")))
					{
						cinmonth = 4;
						cindate = 22;
					}

					else if (!(strcmp(event, "world no tobacco day")))
					{
						cinmonth = 5;
						cindate = 31;
					}

					else if (!(strcmp(event, "world environment day")))
					{
						cinmonth = 6;
						cindate = 5;
					}

					else if (!(strcmp(event, "world population day")))
					{
						cinmonth = 7;
						cindate = 11;
					}

					else if (!(strcmp(event, "sports day")))
					{
						cinmonth = 8;
						cindate = 29;
					}

					else if (!(strcmp(event, "teacher's day")))
					{
						cinmonth = 9;
						cindate = 5;
					}

					else if (!(strcmp(event, "hindi day")))
					{
						cinmonth = 9;
						cindate = 14;
					}

					else if (!(strcmp(event, "gandhi jayanti")))
					{
						cinmonth = 10;
						cindate = 2;
					}

					else if (!(strcmp(event, "indian airforce day")))
					{
						cinmonth = 10;
						cindate = 8;
					}

					else if (!(strcmp(event, "united nations day")))
					{
						cinmonth = 10;
						cindate = 24;
					}

					else if (!(strcmp(event, "children's day")) || !(strcmp(event, "world diabetics day")))
					{
						cinmonth = 11;
						cindate = 14;
					}

					else if (!(strcmp(event, "world aids day")))
					{
						cinmonth = 12;
						cindate = 1;
					}

					else if (!(strcmp(event, "indian navy day")))
					{
						cinmonth = 12;
						cindate = 4;
					}

					else if (!(strcmp(event, "human rights day")))
					{
						cinmonth = 12;
						cindate = 10;
					}

					else
					{
						cout << "\nNO SUCH EVENT RESISTERED..!!!\n\n";

						system("pause");
						goto move;
					}

					if (cinmonth > dd)
						cinyear = 1900 + ltm->tm_year;
					else
						cinyear = 1901 + ltm->tm_year;
				};
				break;

				case '2':
				{
					cout << "\n>>>>>>> Jump to date...!\n";
					cout << "\n\tENTER YEAR : ";
					cin >> cinyear;

					fflush(stdin);
					cout << "\n\tENTER MONTH : ";
					cin.get(charmonth, 4);

					fflush(stdin);
					cout << "\n\tENTER DATE : ";
					cin >> cindate;

					for (lowup = 0; lowup < 3; lowup++)
						charmonth[lowup] = char(tolower(charmonth[lowup]));

					if (!(strcmp(charmonth, "jan")) || !(strcmp(charmonth, "1")))
						cinmonth = 1;

					else if (!(strcmp(charmonth, "feb")) || !(strcmp(charmonth, "2")))
						cinmonth = 2;

					else if (!(strcmp(charmonth, "mar")) || !(strcmp(charmonth, "3")))
						cinmonth = 3;

					else if (!(strcmp(charmonth, "apr")) || !(strcmp(charmonth, "4")))
						cinmonth = 4;

					else if (!(strcmp(charmonth, "may")) || !(strcmp(charmonth, "5")))
						cinmonth = 5;

					else if (!(strcmp(charmonth, "jun")) || !(strcmp(charmonth, "6")))
						cinmonth = 6;

					else if (!(strcmp(charmonth, "jul")) || !(strcmp(charmonth, "7")))
						cinmonth = 7;

					else if (!(strcmp(charmonth, "aug")) || !(strcmp(charmonth, "8")))
						cinmonth = 8;

					else if (!(strcmp(charmonth, "sep")) || !(strcmp(charmonth, "9")))
						cinmonth = 9;

					else if (!(strcmp(charmonth, "oct")) || !(strcmp(charmonth, "10")))
						cinmonth = 10;

					else if (!(strcmp(charmonth, "nov")) || !(strcmp(charmonth, "11")))
						cinmonth = 11;

					else if (!(strcmp(charmonth, "dec")) || !(strcmp(charmonth, "12")))
						cinmonth = 12;

					else
					{
						cout << "\nNO SUCH MONTH EXIST..!!!\n\n";

						system("pause");
						goto move;
					}
				};
				break;

				case '3':
				{
					cinyear = 1900 + ltm->tm_year;
					cinmonth = ltm->tm_mon + 1;
					cindate = ltm->tm_mday;
					strcpy(event, "today");
				};
				break;

				default:
				{
					cout << "\nWrong Choice entered..!!!\n\n[CHOOSE EITHER 1 OR 2]\n\n";

					system("pause");
					goto move;
				}
				}

				if (cinmonth <= 7)
				{
					if (cinmonth % 2)
						lastdate = 31;
					else
						lastdate = 30;

					if (cinmonth == 2)
						if (cinyear % 4)
							lastdate = 28;
						else
							lastdate = 29;
				}
				else
				{
					if (!(cinmonth % 2))
						lastdate = 31;
					else
						lastdate = 30;
				}

				if (cinyear < 1940 || cinmonth > 12 || cindate > lastdate)
				{
					cout << "\n\n===========================================================\n";

					cout << "\n...this DATE does not exist : (error 404)\n\nPLEASE, TRY AGAIN...!\n\n";

					system("pause");
					goto move;
				}

				cout << "\nPRINTING CALENDAR...\n\n";
				system("pause");

				for (year = 1940; year <= cinyear; year++)
				{
					cout << "\n\n==================== YEAR : { " << year << " } =======================";

					for (month = 1, weekcount = 1; month <= 12; month++)
					{
						printf("\n\n\n>>>>>>>>>>>>>>>>>>>> MONTH : [ %c,%.2d ] <<<<<<<<<<<<<<<<<<<<<<\n\n", monthname[month], month);

						if (month <= 7)
						{
							if (month % 2)
								lastdate = 31;
							else
								lastdate = 30;

							if (month == 2)
								if (year % 4)
									lastdate = 28;
								else
									lastdate = 29;
						}
						else
						{
							if (!(month % 2))
								lastdate = 31;
							else
								lastdate = 30;
						}

						for (week = 1; week <= 7; week++)
							cout << "[" << weekname[week] << "]\t";

						cout << "week\n";

						for (divider = 0; divider < symbol; divider++)
							cout << "-";

						cout << "\n\n";

						for (empty = 1; empty < space; empty++)
							cout << "\t";

						for (date = 1, pos = space; date <= lastdate;)
						{
							if (year == cinyear && month == cinmonth && date == cindate)
							//what a momentum control sir G...!
							{
								cinpos = pos;
								cinweekcount = weekcount;
								cout << "?";
								getch();

								if (choice == '3' || choice == '2')
									getch();
							}

							printf("%.2d\t", date++);

							// if cindate is less then now carry month to 30 days to date and from year to 12 months to month                                                                                                USE formula :    1 day = 0.0329 month

							if (!(pos++ % 7))
								printf("# %.2d\n\n", weekcount++);
						}
						space = (lastdate + space) % 7;
					}
				}

				cout << "\n\n";

				for (divider = 0; divider < symbol; divider++)
					cout << "=";

				cout << endl;

				if (!(cinpos % 7))
					weekday = 7;
				else
					weekday = cinpos % 7;

				once = cinweekcount % 10;

				if (once == 1)
					strcpy(weekth, "st");

				else if (once == 2)
					strcpy(weekth, "nd");

				else if (once == 3)
					strcpy(weekth, "rd");

				else
					strcpy(weekth, "th");

				cout << "\n>>>>>>> D'DAY : { " << dday[cinpos % 7] << "," << weekday << " }";

				cout << "\n\n\tWEEK  : " << cinweekcount << weekth;

				if (choice == '3' || choice == '1')
				{
					for (lowup = 0; lowup < strlen(event); lowup++)
						event[lowup] = char(toupper(event[lowup]));

					cout << "\n\n\tEVENT  : " << event;
				}

				cout << "\n\n";

				for (divider = 0; divider < symbol; divider++)
					cout << "-";

				cout << "\n\n\tYEAR  : " << cinyear;

				cout << "\n\n\tMONTH : { " << fullmonth[cinmonth - 1] << "," << cinmonth << " }";

				printf("\n\n\tDATE  : %.2d", cindate);

				if (choice == '3')
				{
					time_t now = time(0);
					tm *ltm = localtime(&now);

					cout << "\n\n\tTIME : ";
					if (ltm->tm_hour > 12)
						cout << ltm->tm_hour - 12;

					else
						cout << ltm->tm_hour;
					cout << ":" << ltm->tm_min << ":";
					cout << ltm->tm_sec;

					if (ltm->tm_hour > 12)
						cout << " PM";
					else
						cout << " AM";
				}

				cout << "\n\n";
				for (divider = 0; divider < symbol; divider++)
					cout << "=";

				cout << "\n\n\t^\n\t^\n\t^\n\t^\n\t^\n\t^\n\t^\n\t^\n\t^\n\t^\n\t^\n\n";

				cout << "[ ^, THIS IS TO PRESERVE PREVIOUS DATA...! ]";

				cout << "\n\n\t^\n\t^\n\t^\n\t^\n\t^\n\t^\n\t^\n\t^\n\t^\n\t^\n\t^\n\t^\n\n";

				cout << "\nWanna Use this CALENDAR again...(y/n) : ";
				cin >> yno;

			} while (yno != 'n' && yno != 'N');

			cout << "\n\nTHANKS FOR USING MY CALENDAR...!\n";
			goto end;
		}

		else
		{
			if (vartime < times)
			{
				cout << "\n\n ?? PIN IS WRONG...!!!";

				cout << "\n\nTRY AGAIN :\n\n";

				system("pause");
				system("cls");

				cout << "\n!!!You have [" << times - vartime << "] chances Left!\n\n";

				for (divider = 0; divider < symbol; divider++)
					cout << "=";

				loop = 1;
				vartime++;
			}

			else
			{
				system("cls");

				cout << "\n\n!!! Sorry....!\nYour " << times << " chances are completed...!\n";

				cout << "\nNow you can not access CALENDAR...!\n";

				loop = 0;
			}
		}
	} while (loop);

end:
	cout << endl;

	for (divider = 0; divider < symbol; divider++)
		cout << "=";

	cout << endl;
	return 0;
}
