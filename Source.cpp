/*


�������������. 
������� ������������ ����� �������������� (������������ ��������, �����) � �������� ������: 
�	���������������� �������� (������������ ������� �����); 
�	��������� ��� �������� (��� �������, ��� �������); 
�	���� (����); 
�	������ (��������, ���). 
����������� ����� ��� �������� ������ ������������ � ������� ���������� ������������� � ������� ������ ������ ������������.
����������� ����� toString(), ������� ���������� ��������� ������������� ������� �������.
 
����������� ���������� �� �������.
https://www.codeproject.com/Articles/38381/STL-Sort-Comparison-Function
���������� ������ ��� ������ �� ��������� ���������-����� (� �������, �� �������, �� ���� �������� � �.�.).
������� ���������������� ����. ������������ ���������� �������� � ��������� � ����� ��������������� �������� ���������� �� ����� � ������� ����.
������������ ���������� �������� �� ���������� � ��������� ���� � �������� �������� �� ���������� ����� � ���������.
������������ ��������� �������������� ��������.
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