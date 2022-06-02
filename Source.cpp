/*


“≈Ћ≈ѕ–ќ√–јћћј. 
—оздать родительский класс Ђ“елепрограммаї (наименование передачи, врем€) и дочерние классы: 
Х	Ђќбразовательна€ передачаї (наименование области науки); 
Х	Ђѕередача дл€ детска€ї (мин возраст, мах возраст); 
Х	ЂЎоуї (тема); 
Х	Ђ‘ильмї (описание, год). 
–еализовать класс дл€ хранени€ списка телепрограмм с методом добавлени€ телепрограммы и методом печати списка телепрограмм.
–еализовать метод toString(), который возвращает строковое представление данного объекта.
 
–еализовать сортировку по времени.
https://www.codeproject.com/Articles/38381/STL-Sort-Comparison-Function
–еализуйте методы дл€ поиска по возможным критери€м-пол€м (к примеру, по времени, по типу передачи и т.д.).
—оздать пользовательское меню. ќрганизовать добавление объектов в контейнер и вывод отсортированных объектов контейнера на экран с помощью меню.
ќрганизовать сохранение объектов из контейнера в текстовый файл и загрузку объектов из текстового файла в контейнер.
ќрганизовать обработку исключительных ситуаций.
*/
#include<iostream>
#include<string>
#include<set>
#include"Children.h"
#include"Education.h"
#include"Show.h"
#include"Movie.h"
#include"Time_.h"
using namespace std;
int main() {
	set<Children>chProg;
	set<Education>edProg;
	set<Show>show;
	set<Movie>movie;
	string name;
	Time_ time;
	int menu = 0;
	do
	{
		cout << "0 - Exit\n 1 - Add Children program\n 2 - Add Education program\n 3 - Add Show\n 4 - Add movie";
		cin >> menu;
		switch (menu)
		{
		case 1:

		case 2:

		case 3:

		case 4:
			
		default:
			break;
		}
	} while (menu != 0);
}