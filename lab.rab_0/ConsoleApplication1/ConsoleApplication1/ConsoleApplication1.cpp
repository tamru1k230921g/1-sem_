#include <iostream>
#include <chrono> //для работы с таймером
using namespace std;

void timer()
{
	
	int hours = 0, minutes = 0, seconds = 0,n;
	cout << "Введите время таймера(в секундах)";
	cin >> n;
	for (int seconds = 0; 1 < n;++seconds) {
		cout << hours << ":" << minutes << ":" << seconds;
		if (seconds == 60) {
			seconds = 0;
			minutes++;
		}
		if (minutes == 60) {
			minutes = 0;
			hours++;
		}
		if (seconds == n) {
			system("cls"); //очистка консоли
		}
		system("cls"); //очистка консоли
	}
	return 0;
}
int main()
{

	void timer();
	return 0;

}