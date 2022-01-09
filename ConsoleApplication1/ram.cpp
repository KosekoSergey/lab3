#include "ram.h"

void ram:: init(string aname, int arate, int amemory) {  //создание оперативной памяти
	name = aname;
	rate = arate;
	memory = amemory;
}

int ram::check() {  //проверка
	if (name.length() != 0) return 1;
	else return 0;
}

void ram::print() {  //вывод на экран характеристик
	cout << "Название оперативной памяти: " << name << endl;
	cout << "Частота оперативной памяти: " << rate << endl;
	cout << "Объем оперативной памяти: " << memory << endl;
}

string ram::get_name() {  //ф-ция получения названия
	return name;
}

int ram::get_rate() {  //частоты
	return rate;
}

int ram::get_memory() {  //объема памяти
	return memory;
}

void ram::set_name(string aname) {  //ф-ция присвоения названия
	name = aname;
}

void ram::set_rate(int arate) {  //частоты
	rate = arate;
}

void ram::set_memory(int amemory) {  //объема памяти
	memory = amemory;
}

void ram::input() {  //Ввод с клавиатуры
	cin >> name;
	cin >> rate;
	cin >> bitness;
}