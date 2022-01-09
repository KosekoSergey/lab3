#pragma once
#include <string>
#include <iostream>

using namespace std;

class videocard {
private:
	string name;  //�������� ����������
	int rate = 0; //�������
	int memory = 0;  //����� �����������
public:
	void init(string aname, int arate, int amemory);  //�������� ����������
	int check();  //�������� ����������
	void print();  //����� �� ����� �������������
	string get_name();  //�-��� ��������� �������� ����������
	int get_rate();  //�������
	int get_memory();  //������ �����������
	void set_name(string aname);  //�-��� ���������� �������� ����������
	void set_rate(int arate);  //�������
	void set_memory(int amemory);  //������ �����������
	void input();  //���� � ����������
};

void videocard::init(string aname, int arate, int amemory) {  //�������� ����������
	name = aname;
	rate = arate;
	memory = amemory;
}

int videocard::check() {  //�������� ����������
	if (name.length() != 0) return 1;
	else return 0;
}

void videocard::print() {  //����� �� ����� �������������
	cout << "�������� ����������: " << name << endl;
	cout << "������� ����������: " << rate << endl;
	cout << "����� �����������: " << memory << endl;
}

string videocard::get_name() {  //�-��� ��������� �������� ����������
	return name;
}

int videocard::get_rate() {  //�������
	return rate;
}

int videocard::get_memory() {  //������ �����������
	return memory;
}

void videocard::set_name(string aname) {  //�-��� ���������� �������� ����������
	name = aname;
}

void videocard::set_rate(int arate) {  //�������
	rate = arate;
}

void videocard::set_memory(int amemory) {    //������ �����������
	memory = amemory;
}

void videocard::input() {  //���� � ����������
	cin >> name;
	cin >> rate;
	cin >> memory;
}