#pragma once
#include <string>
#include <iostream>

using namespace std;

class videocard {
private:
	string name;  //название видеокарты
	int rate = 0; //частота
	int memory = 0;  //объем видеопамяти
public:
	void init(string aname, int arate, int amemory);  //создание видеокарты
	int check();  //проверка видеокарты
	void print();  //вывод на экран характеристик
	string get_name();  //ф-ция получения названия видеокарты
	int get_rate();  //частоты
	int get_memory();  //объема видеопамяти
	void set_name(string aname);  //ф-ция присвоения названия видеокарты
	void set_rate(int arate);  //частоты
	void set_memory(int amemory);  //объема видеопамяти
	void input();  //Ввод с клавиатуры
};

void videocard::init(string aname, int arate, int amemory) {  //создание видеокарты
	name = aname;
	rate = arate;
	memory = amemory;
}

int videocard::check() {  //проверка видеокарты
	if (name.length() != 0) return 1;
	else return 0;
}

void videocard::print() {  //вывод на экран характеристик
	cout << "Название видеокарты: " << name << endl;
	cout << "Частота видеокарты: " << rate << endl;
	cout << "Объем видеопамяти: " << memory << endl;
}

string videocard::get_name() {  //ф-ция получения названия видеокарты
	return name;
}

int videocard::get_rate() {  //частоты
	return rate;
}

int videocard::get_memory() {  //объема видеопамяти
	return memory;
}

void videocard::set_name(string aname) {  //ф-ция присвоения названия видеокарты
	name = aname;
}

void videocard::set_rate(int arate) {  //частоты
	rate = arate;
}

void videocard::set_memory(int amemory) {    //объема видеопамяти
	memory = amemory;
}

void videocard::input() {  //Ввод с клавиатуры
	cin >> name;
	cin >> rate;
	cin >> memory;
}