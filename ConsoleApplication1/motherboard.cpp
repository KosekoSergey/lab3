#include "motherboard.h"

void motherboard::init(string aname, int arate, int aslots) {  //создание материнской платы
	name = aname;
	num_of_slots = aslots;
	rate = arate;
}

int motherboard::check() {  //проверка
	if (name.length() != 0) return 1;
	else return 0;
}

void motherboard::print() {  //вывод на экран характеристик
	cout << "Название материнской платы: " << name << endl;
	cout << "Частота шины: " << rate << endl;
	cout << "Количество основных разъемов: " << num_of_slots << endl;
}

string motherboard::get_name() {  //ф-ция получения названия
	return name;
}

int motherboard::get_rate() {  //частоты
	return rate;
}

int motherboard::get_slots() {  //кол-ва разъемов
	return num_of_slots;
}

void motherboard::set_name(string aname) {  //ф-ция присвоения названия
	name = name;
}

void motherboard::set_rate(int arate) {  //частоты
	rate = rate;
}

void motherboard::set_slots(int aslots) {  //кол-ва разъемов
	num_of_slots = slots;
}

void motherboard::input() {  //Ввод с клавиатуры
	cin >> name;
	cin >> rate;
	cin >> num_of_slots;
}