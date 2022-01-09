#include "processor.h"

void processor::init(string aname, int arate, int abitness) {  //создание процессора
	name = aname;
	bitness = abitness;
	rate = arate;
}

int processor::check() {  //проверка
	if (name.length() != 0) return 1;
	else return 0;
}

void processor::print() {  //вывод на экран характеристик
	cout << "Название процессора: " << name << endl;
	cout << "Частота процессора: " << rate << endl;
	cout << "Разрядность процессора: " << bitness << endl;
}

string processor::get_name() {  //ф-ция получения названия
	return name;
}

int processor::get_rate() {  //частоты
	return rate;
}

int processor::get_bitness() {  //разрядности
	return bitness;
}

void processor::set_name(string aname) {  //ф-ция присвоения названия
	name = aname;
}

void processor::set_rate(int arate) {  //частоты
	rate = arate;
}

void processor::set_bitness(int abitness) {  //разрядности
	bitness = abitness;
}

void processor::input() {  //Ввод с клавиатуры
	cin >> name;
	cin >> rate;
	cin >> bitness;
}