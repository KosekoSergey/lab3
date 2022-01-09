#include <string>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include "computer.h"
#include "processor.h"
#include "ram.h"
#include "videocard.h"
#include "motherboard.h"
using namespace std;

int main() {
    SetConsoleCP(866);
    SetConsoleOutputCP(866);
    setlocale(LC_ALL, "Rus");
    ram ram1;
    videocard vc1;
    motherboard mb1;
    processor proc1;
    computer comp[2];

    mb1.init("Материнская плата-1", 1200, 8);
    proc1.init("Видеокарта-1", 3200, 64);
    ram1.init("Оперативная память-1", 1600, 8);
    vc1.init("Видеокарта-1", 2400, 2);
    comp[0].init_computer("Компьютер-1", proc1, ram1, vc1, mb1);  //создание 1 компьютера
    comp[0].turn_on();  //включение 1 компьютера
    comp[0].check();  //проверка 1 компьютера
    comp[1].turn_on();  //включение 2 компьютера
    comp[1].check();  //проверка 2 компьютера
    comp[1].set_processor(proc1);  //присвоение процессора 1 компьютеру 2
    ram1.set_rate(2200);  //изменение характеристик оперативной памяти 1
    comp[1].set_ram(ram1);  //присвоение оперативной памяти 1 компьютеру 2
    comp[0].check();  //проверка 1 компьютера
    comp[1].check();  //проверка 2 компьютера 
}