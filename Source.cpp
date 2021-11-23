#include <iostream>
#include <conio.h>
#include <string>
#include "strt.cpp"
using std::cin;
using std::cout;

size_t select_start() {
	cout << "Select index of the first element:";
	size_t start;
	cin >> start;
	return start;
}

size_t select_stop() {
	cout << "Select index of the last elements:";
	size_t stop;
	cin >> stop;
	return stop;
}

double Get_Delem(){
	double elem;
	for (;;)
	{
		std::cout << "Your elem:";
		cin >> elem;
		if (std::cin.fail()){
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "Enter the double number!" << "\n";
			system("pause");
			cout << "\n";
		}
		else break;
	}
	return elem;
}

int Get_Ielem(){   
	int elem;
	for (;;){
		std::cout << "Your elem:";
		cin >> elem;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "Enter the integer number!" << "\n";
			system("pause");
			cout << "\n";
		}
		else break;
	}
	return elem;
}

char Get_Celem(){
	std::cout << "Your elem:";
	char elem;
	cin >> elem;
    return elem;
}


int main() {
	unsigned alternative;
	unsigned Menu;
	int index;
	unsigned num;
	list<double> DA;
	list<double> DB;
	list<double> DC;
	list<int> IA;
	list<int> IB;
	list<int> IC;
	list<char> CA;
	list<char> CB;
	list<char> CC;
	double Delem;
	int Ielem;
	char Celem;
	system("pause");
	for (;;)
	{
		system("cls");
		cout << "Select data type" << "\n";
		cout << "1.Double" << "\n";
		cout << "2.Int" << "\n";
		cout << "3.Char" << "\n";
		cout << "Your select: ";
		cin >> alternative;
		if (alternative >= 1 && alternative <= 3)
		{
			break;
		}
	}
	for (;;)
	{
		system("cls");
		std::cout << "1.Get a character by index" << "\n"; // ������ �� �������
		std::cout << "2.Writing a character by index" << "\n"; // ������ �� �������
		std::cout << "3.Combining storke" << "\n"; // �������� �������
		std::cout << "4.Repeat the stroke" << "\n"; // ��������� ������� �� �����
		std::cout << "5.Add element to the end of the list" << "\n"; // ���������� ������
		std::cout << "6.Add element to the begin of the list" << "\n"; // ���������� �������
		std::cout << "7.Get a sublist" << "\n"; // ������� � ������� � ������ ������������
		std::cout << "Esc.Exit" << "\n";  // �����
		switch (alternative)
		{
		case 1:
			std::cout << "First list:" << DA << "\n";
			std::cout << "Second list:" << DB << "\n";
			std::cout << "Result list:" << DC << "\n";
			break;
		case 2:
			std::cout << "First list:" << IA << "\n";
			std::cout << "Second list:" << IB << "\n";
			std::cout << "Result list:" << IC << "\n";
			break;
		case 3:
			std::cout << "First list:" << CA << "\n";
			std::cout << "Second list:" << CB << "\n";
			std::cout << "Result list:" << CC << "\n";
			break;
		}
		Menu = _getch();
		if (Menu == 27) break;
		switch (Menu)
		{
		case 49: // ������ �� �������
			for (;;)
			{
				system("cls");
				std::cout << "Select stroke" << "\n";
				switch (alternative)
				{
				case 1:
					std::cout << "1:" << DA << "\n";
					std::cout << "2:" << DB << "\n";
					break;
				case 2:
					std::cout << "1:" << IA << "\n";
					std::cout << "2:" << IB << "\n";
					break;
				case 3:
					std::cout << "1:" << CA << "\n";
					std::cout << "2:" << CB << "\n";
					break;
				}
				std::cout << "Esc.Back to main menu" << "\n";
				Menu = _getch();
				if (Menu == 27) break;
				switch (Menu)
				{
				case 49: 
				{
					system("cls");
					std::cout << "Select index" << "\n";
					switch (alternative)
					{
					case 1:
						std::cout << "1:" << DA << "\n";
						break;
					case 2:
						std::cout << "1:" << IA << "\n";
						break;
					case 3:
						std::cout << "1:" << CA << "\n";
						break;
					}
					std::cout << "Your index:";
					std::cin >> index;
					std::cout << "\n";
					if (std::cin.fail())
					{
						std::cin.clear();
						std::cin.ignore(32767, '\n');
						std::cout << "Enter the integer number!" << "\n";
						system("pause");
						break;
					}
					try
					{
						switch (alternative)
						{
						case 1:
							std::cout << "1:" << DA << "\n";
							std::cout << "2:" << DB << "\n";
							std::cout << "This is your character:" << DA[index - 1] << "\n";
							break;
						case 2:
							std::cout << "1:" << IA << "\n";
							std::cout << "2:" << IB << "\n";
							std::cout << "This is your character:" << IA[index - 1] << "\n";
							break;
						case 3:
							std::cout << "1:" << CA << "\n";
							std::cout << "2:" << CB << "\n";
							std::cout << "This is your character:" << CA[index - 1] << "\n";
							break;
						}
					}
					catch (const char* err)
					{
						std::cerr << err << "\n";
						system("pause");
						break;
					}
					system("pause");
					break;
				}
				case 50: 
				{
					system("cls");
					std::cout << "Select index" << "\n";
					switch (alternative)
					{
					case 1:
						std::cout << "2:" << DB << "\n";
						break;
					case 2:
						std::cout << "2:" << IB << "\n";
						break;
					case 3:
						std::cout << "2:" << CB << "\n";
						break;
					}
					std::cout << "Your index:";
					std::cin >> index;
					std::cout << "\n";
					if (std::cin.fail())
					{
						std::cin.clear();
						std::cin.ignore(32767, '\n');
						std::cout << "Enter the integer number!" << "\n";
						system("pause");
						break;
					}
					try
					{
						switch (alternative)
						{
						case 1:
							std::cout << "1:" << DA << "\n";
							std::cout << "2:" << DB << "\n";
							std::cout << "This is your character:" << DB[index - 1] << "\n";
							break;
						case 2:
							std::cout << "1:" << IA << "\n";
							std::cout << "2:" << IB << "\n";
							std::cout << "This is your character:" << IB[index - 1] << "\n";
							break;
						case 3:
							std::cout << "1:" << CA << "\n";
							std::cout << "2:" << CB << "\n";
							std::cout << "This is your character:" << CB[index - 1] << "\n";
							break;
						}
					}
					catch (const char* err)
					{
						std::cerr << err << "\n";
						system("pause");
						break;
					}
					system("pause");

				}
				}
			}
		case 50: // ������ �� �������
			for (;;)
			{
				system("cls");
				std::cout << "Select stroke" << "\n";
				switch (alternative)
				{
				case 1:
					std::cout << "1:" << DA << "\n";
					std::cout << "2:" << DB << "\n";
					break;
				case 2:
					std::cout << "1:" << IA << "\n";
					std::cout << "2:" << IB << "\n";
					break;
				case 3:
					std::cout << "1:" << CA << "\n";
					std::cout << "2:" << CB << "\n";
					break;
				}
				std::cout << "Esc.Back to main menu" << "\n";
				Menu = _getch();
				if (Menu == 27) break;
				switch (Menu)
				{
				case 49: 
				{
					system("cls");
					std::cout << "Select index" << "\n";
					switch (alternative)
					{
					case 1:
						std::cout << "1:" << DA << "\n";
						break;
					case 2:
						std::cout << "1:" << IA << "\n";
						break;
					case 3:
						std::cout << "1:" << CA << "\n";
						break;
					}
					std::cout << "Your index:";
					std::cin >> index;
					if (std::cin.fail())
					{
						std::cin.clear();
						std::cin.ignore(32767, '\n');
						std::cout << "Enter the integer number!" << "\n";
						system("pause");
						break;
					}
					try
					{
						switch (alternative)
						{
						case 1:
							Delem = Get_Delem();
							DA[index - 1] = Delem;
							break;
						case 2:
							Ielem = Get_Ielem();
							IA[index - 1] = Ielem;
							break;
						case 3:
							Celem = Get_Celem();
							CA[index - 1] = Celem;
							break;
						}
					}
					catch (const char* err)
					{
						std::cerr << err << "\n";
						system("pause");
						break;
					}
					std::cout << "New list: ";
					switch (alternative)
					{
					case 1:
						cout << DA << "\n";
						break;
					case 2:
						cout << IA << "\n";
						break;
					case 3:
						cout << CA << "\n";
						break;
					}
					system("pause");
					break;
				}
				case 50: 
				{
					system("cls");
					std::cout << "Select index" << "\n";
					switch (alternative)
					{
					case 1:
						std::cout << "2:" << DB << "\n";
						break;
					case 2:
						std::cout << "2:" << IB << "\n";
						break;
					case 3:
						std::cout << "2:" << CB << "\n";
						break;
					}
					std::cout << "Your index:";
					std::cin >> index;
					if (std::cin.fail())
					{
						std::cin.clear();
						std::cin.ignore(32767, '\n');
						std::cout << "Enter the integer number!" << "\n";
						system("pause");
						break;
					}
					try {
						switch (alternative)
						{
						case 1:
							Delem = Get_Delem();
							DB[index - 1] = Delem;
							break;
						case 2:
							Ielem = Get_Ielem();
							IB[index - 1] = Ielem;
							break;
						case 3:
							Celem = Get_Celem();
							CB[index - 1] = Celem;
							break;
						}
					}
					catch (const char* err)
					{
						std::cerr << err << "\n";
						system("pause");
						break;
					}
					std::cout << "New list: ";
					switch (alternative)
					{
					case 1:
						cout << DB << "\n";
						break;
					case 2:
						cout << IB << "\n";
						break;
					case 3:
						cout << CB << "\n";
						break;
					}
					system("pause");
					break;
				}
				}
			}
		case 51: //�������� �������
			for (;;)
			{
				system("cls");
				std::cout << "Select option" << "\n";
				std::cout << "1. 1+2" << "\n"; 
				std::cout << "2. 2+1" << "\n"; 
				std::cout << "Esc.Exit" << "\n";  
				switch (alternative)
				{
				case 1:
					std::cout << "1." << DA << "\n";
					std::cout << "2." << DB << "\n";
					break;
				case 2:
					std::cout << "1." << IA << "\n";
					std::cout << "2." << IB << "\n";
					break;
				case 3:
					std::cout << "1." << CA << "\n";
					std::cout << "2." << CB << "\n";
					break;
				}
				Menu = _getch();
				if (Menu == 27) break;
				switch (Menu)
				{
				case 49:
					switch (alternative)
					{
					case 1:
						DC = DA + DB;
						break;
					case 2:
						IC = IA + IB;
						break;
					case 3:
						CC = CA + CB;
						break;
					}
					break;
				case 50:
					switch (alternative)
					{
					case 1:
						DC = DB + DA;
						break;
					case 2:
						IC = IB + IA;
						break;
					case 3:
						CC = CB + CA;
						break;
					}
					break;
				}
			}
			break;
		case 52: //��������� �������
			for (;;)
			{
				system("cls");
				std::cout << "Select stroke" << "\n";
				switch (alternative)
				{
				case 1:
					std::cout << "1." << DA << "\n";
					std::cout << "2." << DB << "\n";
					break;
				case 2:
					std::cout << "1." << IA << "\n";
					std::cout << "2." << IB << "\n";
					break;
				case 3:
					std::cout << "1." << CA << "\n";
					std::cout << "2." << CB << "\n";
					break;
				}
				std::cout << "Esc.Back to main menu" << "\n";
				Menu = _getch();

				if (Menu == 27) break;
				switch (Menu)
				{
				case 49:
					std::cout << "Your coefficient:";
					std::cin >> index;
					std::cout << "\n";
					if (std::cin.fail())
					{
						std::cin.clear();
						std::cin.ignore(32767, '\n');
						std::cout << "Enter the integer number!" << "\n";
						system("pause");
						break;
					}
					try
					{
						switch (alternative)
						{
						case 1:
							DC = DA * index;
							break;
						case 2:
							IC = IA * index;
							break;
						case 3:
							CC = CA * index;
							break;
						}
					}
					catch (const char* err)
					{
						std::cerr << err << "\n";
						system("pause");
						break;
					}
					break;
				case 50:
					std::cout << "Your coefficient:";
					std::cin >> index;
					std::cout << "\n";
					if (std::cin.fail())
					{
						std::cin.clear();
						std::cin.ignore(32767, '\n');
						std::cout << "Enter the integer number!" << "\n";
						system("pause");
						break;
					}
					try
					{
						switch (alternative)
						{
						case 1:
							DC = DB * index;
							break;
						case 2:
							IC = IB * index;
							break;
						case 3:
							CC = CB * index;
							break;
						}
					}
					catch (const char* err)
					{
						std::cerr << err << "\n";
						system("pause");
						break;
					}
					break;
				}
			}
			break;
		case 53: //���������� � �����
			for (;;)
			{
				system("cls");
				std::cout << "Select list" << "\n";
				switch (alternative)
				{
				case 1:
					std::cout << "1." << DA << "\n";
					std::cout << "2." << DB << "\n";
					break;
				case 2:
					std::cout << "1." << IA << "\n";
					std::cout << "2." << IB << "\n";
					break;
				case 3:
					std::cout << "1." << CA << "\n";
					std::cout << "2." << CB << "\n";
					break;
				}
				std::cout << "Esc.Exit" << "\n";
				Menu = _getch();
				if (Menu == 27) break;
				switch (Menu)
				{
				case 49:

					switch (alternative)
					{
					case 1:
						DA = DA.append(Get_Delem());
						break;
					case 2:
						IA = IA.append(Get_Ielem());
						break;
					case 3:
						CA = CA.append(Get_Celem());
						break;
					}
					break;
				case 50:
					switch (alternative)
					{
					case 1:
						DB = DB.append(Get_Delem());
						break;
					case 2:
						IB = IB.append(Get_Ielem());
						break;
					case 3:
						CB = CB.append(Get_Celem());
						break;
					}
					break;
				}
			}
			break;
		case 54://���������� � ������
			for (;;)
			{
				system("cls");
				std::cout << "Select list" << "\n";
				switch (alternative)
				{
				case 1:
					std::cout << "1." << DA << "\n";
					std::cout << "2." << DB << "\n";
					break;
				case 2:
					std::cout << "1." << IA << "\n";
					std::cout << "2." << IB << "\n";
					break;
				case 3:
					std::cout << "1." << CA << "\n";
					std::cout << "2." << CB << "\n";
					break;
				}
				std::cout << "Esc.Exit" << "\n";
				Menu = _getch();
				if (Menu == 27) break;
				switch (Menu)
				{
				case 49:

					switch (alternative)
					{
					case 1:
						DA = DA.extend(Get_Delem());
						break;
					case 2:
						IA = IA.extend(Get_Ielem());
						break;
					case 3:
						CA = CA.extend(Get_Celem());
						break;
					}
					break;
				case 50:
					switch (alternative)
					{
					case 1:
						DB = DB.extend(Get_Delem());
						break;
					case 2:
						IB = IB.extend(Get_Ielem());
						break;
					case 3:
						IB = IB.extend(Get_Celem());
						break;
					}
					break;
				}
			}
			break;
		case 55: //�������
			for (;;)
			{
				system("cls");
				std::cout << "Select ctroke" << "\n";
				switch (alternative)
				{
				case 1:
					std::cout << "1." << DA << "\n";
					std::cout << "2." << DB << "\n";
					break;
				case 2:
					std::cout << "1." << IA << "\n";
					std::cout << "2." << IB << "\n";
					break;
				case 3:
					std::cout << "1." << CA << "\n";
					std::cout << "2." << CB << "\n";
					break;
				}
				std::cout << "Esc.Exit" << "\n";
				Menu = _getch();
				try
				{
					if (Menu == 27) break;
					switch (Menu)
					{
					case 49:
						switch (alternative)
						{
						case 1:
							DC = DA(select_start(), select_stop());
							break;
						case 2:
							IC = IA(select_start(), select_stop());
							break;
						case 3:
							CC = CA(select_start(), select_stop());
							break;
						}
						break;
					case 50:
						switch (alternative)
						{
						case 1:
							DC = DB(select_start(), select_stop());
							break;
						case 2:
							DC = DB(select_start(), select_stop());
							break;
						case 3:
							DC = DB(select_start(), select_stop());
							break;
						}
						break;
					}
				}
				catch (const char* err)
				{
					std::cerr << err << "\n";
					system("pause");
					break;
				}
			}
			break;
		}
	}
	return 0;
}
