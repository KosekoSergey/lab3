#include <string>
#include <iostream>

using namespace std;

#pragma once

class motherboard {
private:
	string name;  //название материнской платы
	int rate = 0;  //чатсота
	int num_of_slots = 0;  //кол-во разъемов
public:
	void init(string aname, int arate, int aslots);  //создание материнской платы
	int check();  //проверка
	void print();  //вывод на экран характеристик
	string get_name();  //ф-ция получения названия
	int get_rate();  //частоты
	int get_slots();  //кол-ва разъемов
	void set_name(string aname);  //ф-ция присвоения названия
	void set_rate(int arate);  //частоты
	void set_slots(int aslots);  //кол-ва разъемов
	void input();  //Ввод с клавиатуры
};

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
	num_of_slots = aslots;
}

void motherboard::input() {  //Ввод с клавиатуры
	cin >> name;
	cin >> rate;
	cin >> num_of_slots;
}