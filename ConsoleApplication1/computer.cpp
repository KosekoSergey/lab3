#include "computer.h"

void computer::init_computer(string aname, processor aprocessor, ram aram, videocard avideocard, motherboard amotherboard) {  //создание компьютера
	name = aname;
	processor1 = aprocessor;
	ram1 = aram;
	videocard1 = avideocard;
	motherboard1 = amotherboard;
}

void computer::turn_on() {  //включить компьютер
	if (state==0) { state = 1; cout << "Компьютер включен: " << name << endl; }
	else cout << "Компьютер уже включен: " << name << endl;
}

void computer::turn_off() {  //выключить компьютер
	if (state==1) { state = 0; cout << "Компьютер выключен: " << name << endl; }
}

void computer::check() {  //проверить и вывести состовляющие компьютера на экран
	if (state==1) {
		cout << "Компьютер: " << name << endl;
		cout << "Основные компоненты и их характеристики:" << endl;
		if (motherboard1.check()) motherboard1.print();
		else cout << "Материнская плата отсутствует" << endl;
		if (processor1.check()) processor1.print();
		else cout << "Процессор отсутствует" << endl;
		if (ram1.check()) ram1.print();
		else cout << "Оперативная память отсутствует" << endl;
		if (videocard1.check()) videocard1.print();
		else cout << "Видеокарта отсутствует" << endl;
		cout << endl;
	}
}

void computer:: set_name(string aname) {  //ф-ция присвоения имени
	name = aname;
}

void computer:: set_motherboard(motherboard amotherboard) {  //ф-ция присвоения материнской платы
	motherboard1 = amotherboard;
}

void computer:: set_ram(ram aram) {  //ф-ция присвоения оперативной памяти
	ram1 = aram;
}

void computer:: set_videocard(videocard avideocard) {  //ф-ция присвоения видеокарты
	videocard1 = avideocard;
}

void computer:: set_processor(processor aprocessor) {  //ф-ция присвоения процессора
	processor1 = aprocessor;
}

