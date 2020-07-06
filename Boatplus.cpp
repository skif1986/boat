
#include <iostream>

using namespace std;

enum CurrPosition
{
	curpos_coast1, curpos_coast2
};

enum Object
{
	obj_wolf = 1, obj_sheep = 2, obj_cabbage = 3
};

class WSC
{
public:
	bool wolf;
	bool sheep;
	bool cabbage;

	bool NumCheck() //check number of objects in the boat
	{
		return ((wolf && sheep)) || ((wolf && cabbage)) || ((sheep && cabbage));
	};

	bool EatCheck() //check if something goes logically wrong
	{
		return ((wolf && sheep)) || ((sheep && cabbage));
	};

	bool EndCheck() //check for coast2 to end
	{
		return ((wolf && sheep && cabbage));
	};

	void Cls() //reset boat&coast2
	{
		wolf = false;
		sheep = false;
		cabbage = false;
	};
	void All() //set objs to coast1
	{
		wolf = true;
		sheep = true;
		cabbage = true;
	};
	void Out()
	{
		if (wolf) cout << "Волк ";
		if (sheep) cout << "Овца ";
		if (cabbage) cout << "Капуста ";
		cout << endl;
	};

	void Action(WSC* lplace, Object lobject)
	{
		bool ltemp;
		switch (lobject)
		{
		case obj_wolf:
			ltemp = this->wolf;
			this->wolf = lplace->wolf;
			lplace->wolf = ltemp;
			break;
		case obj_sheep:
			ltemp = this->sheep;
			this->sheep = lplace->sheep;
			lplace->sheep = ltemp;
			break;
		case obj_cabbage:
			ltemp = this->cabbage;
			this->cabbage = lplace->cabbage;
			lplace->cabbage = ltemp;
			break;
		};
	};
};

WSC coast1;
WSC boat;
WSC coast2;

CurrPosition pos;

void OutCurrPosition()
{
	cout << "Берег 1: ";
	coast1.Out();
	cout << "Лодка: ";
	boat.Out();
	cout << "Берег 2: ";
	coast2.Out();
	if (pos == curpos_coast1) cout << "Положение лодки: Берег 1" << endl;
	else cout << "Положение лодки: Берег 2" << endl;
};

void Start()
{
	coast1.All();
	coast2.Cls();
	boat.Cls();
	pos = curpos_coast1;
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Start();

	int command;

	do
	{
		do
		{
			OutCurrPosition();
			cout << "Действие:" << endl
				<< " 1 - перемещение Волка" << endl
				<< " 2 - перемещение Овцы" << endl
				<< " 3 - перемещение Капусты" << endl
				<< " 0 - плыть на другой берег" << endl
				<< "Ваш выбор: ";
			cin >> command;
			cout << endl;
			if (pos == curpos_coast1) coast1.Action(&boat, (Object)command);
			else coast2.Action(&boat, (Object)command);
		} while ((command != 0) && !coast2.EndCheck());

		if (command == 0)
		{
			if (boat.NumCheck() == true)
			{
				cout << "Слишком много объектов, лодка утонула." << endl << endl;
				Start();
			}
			else if (coast1.EatCheck() == true)
			{
				cout << "Потеря объекта на берегу 1." << endl << endl;
				Start();
			}
			else if (coast2.EatCheck() == true)
			{
				cout << "Потеря объекта на берегу 2." << endl << endl;
				Start();
			}
			else if (pos == curpos_coast1) pos = curpos_coast2;
			else pos = curpos_coast1;
		};
	} while ((pos != curpos_coast2) || !coast2.EndCheck());
	cout << "Задача решена." << endl << endl;
};