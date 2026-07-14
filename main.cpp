#include "alarm.h"
#include <array>

namespace JangJiwon2593266
{
	void printAlarmArray(const alarm a[], const int n)
	{
		for (int i = 0; i < n; ++i)
			std::cout << a[i];
	}
}
int main()
{
	using namespace JangJiwon2593266;
	const int n{ 4 };
	alarm a[n];
	a[0] = alarm{ "morning", {8,0}, 1 };
	a[1].setName("lunch"); a[1].setWakeTime({ 12,0 }); a[1].setActive(0);
    a[2].input(); 
	std::cin >> a[3]; 
	printAlarmArray(a, n);

	std::array<alarm, n> b;
	for (int i = 0; i<b.size(); ++i)
		b.at(i) = a[i]; //b[i]
	for (const auto& bi : b)
		bi.print();

	/*timeOfDay t1, t2;
	std::cout << "2 timeOfDay objects: \n";
	std::cin >> t1 >> t2;
	std::cout << t1 << " " << t2 << "\n";
	std::cout << ++t2 << '\n';
	std::cout << t2++ << '\n';
	std::cout << t2 << '\n';

	if (t1 == t2) std::cout << "same\n";
	else std::cout << "different\n";
	std::cout << t1 + t2 << std::endl;*/

	return 0;
}