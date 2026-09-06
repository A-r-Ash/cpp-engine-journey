#include <algorithm>
#include <functional>
#include <iostream>
#include <map>
#include <string>
#include <vector>

void forEach(const std::vector<int>& values, const std::function<void(int)>& action)
{
	for (const int value : values)
	{
		action(value);
	}
}

void sortAndFilter()
{
	std::vector<int> scores{ 92, 71, 58, 84, 63, 77, 49 };

	std::sort(scores.begin(), scores.end(), [](int a, int b) { return a > b; });

	std::cout << "scores descending: ";
	for (const int s : scores) std::cout << s << ' ';
	std::cout << '\n';

	constexpr int passMark = 60;
	std::vector<int> passed;
	std::copy_if(scores.begin(), scores.end(), std::back_inserter(passed),
		[passMark](int s) { return s >= passMark; });

	std::cout << "passed (>=60): ";
	for (const int s : passed) std::cout << s << ' ';
	std::cout << '\n';
}

void captureByValueVsByRef()
{
	int outer = 0;

	auto countByValue = [outer]() mutable { ++outer; };
	auto countByRef = [&outer]() { ++outer; };

	countByValue();
	countByValue();
	std::cout << "outer after 2 by-VALUE calls: " << outer << '\n';

	countByRef();
	countByRef();
	std::cout << "outer after 2 by-REF calls:   " << outer << '\n';
}

void captureInit()
{
	int gold = 100;
	constexpr int taxRate = 15;

	auto taxedGold = [net = gold * (100 - taxRate) / 100] { return net; };
	std::cout << "capture-init net gold:     " << taxedGold() << '\n';

	int startId = 1000;
	auto nextId = [id = startId]() mutable { return id++; };
	std::cout << "capture-init ids:          " << nextId() << ' ' << nextId() << ' ' << nextId() << '\n';
}

void salute() { std::cout << "salute!\n"; }
void march()  { std::cout << "march!\n"; }
void retreat(){ std::cout << "retreat!\n"; }

void functionPointers()
{
	void (*order)(void) = &salute;

	order();
	order = &march;
	order();
	order = &retreat;
	order();
}

void dispatchTable()
{
	int ammo = 5;

	std::map<std::string, std::function<void()>> commands{
		{ "salute", salute },
		{ "march",  march },
		{ "reload", [&ammo] { ammo += 3; } },
		{ "status", [&ammo] { std::cout << "ammo: " << ammo << '\n'; } },
	};

	auto run = [&commands](const std::string& word)
	{
		auto it = commands.find(word);
		if (it != commands.end())
		{
			it->second();
		}
		else
		{
			std::cout << "unknown command: " << word << '\n';
		}
	};

	run("salute");
	run("status");
	run("reload");
	run("status");
	run("loot");
}

int main()
{
	std::cout << "--- pass a lambda into a function ---\n";
	forEach({ 1, 2, 3 }, [](int v) { std::cout << v << " <-\n"; });

	std::cout << "\n--- sort & filter with lambdas ---\n";
	sortAndFilter();

	std::cout << "\n--- capture by value vs by reference ---\n";
	captureByValueVsByRef();

	std::cout << "\n--- capture init ---\n";
	captureInit();

	std::cout << "\n--- function pointers ---\n";
	functionPointers();

	std::cout << "\n--- command dispatch table (std::function) ---\n";
	dispatchTable();

	return 0;
}