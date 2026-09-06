#include <iostream>
#include <string>

struct Player {
    std::string name;
    int hp;
};

int main()
{
    // 1. &x  == "give me the street address of x"  (asking where the house is)
    int x = 5;
    std::cout << "x is " << x << ", x lives at address " << &x << '\n';

    // 2. int* p = &x;  == "p is a note holding x's address"  (the slip of paper)
    int* p = &x;
    std::cout << "p holds: " << p << '\n';   // same number as &x

    // 3. *p  == "go to that address and look at the house"  (dereference)
    std::cout << "*p reads the house: " << *p << '\n';   // prints 5
    *p = 9;                                             // write through the note
    std::cout << "after *p = 9, x is now " << x << '\n'; // x itself changed to 9

    // 4. nullptr == "no address", and if (p) as a guard
    int* empty = nullptr;
    if (empty) {
        std::cout << *empty << '\n';   // never runs — empty points at nothing
    }
    else {
        std::cout << "empty points at nothing — dereferencing it would crash\n";
    }
    std::cout << "p still points at x, guard passes: ";
    if (p) std::cout << *p << '\n';    // prints 9

    // 5. ->  == "go to the object, then call a member"  (*p).name but shorter
    Player hero{ "Aria", 100 };
    Player* pHero = &hero;
    std::cout << "hero via -> : name = " << pHero->name
        << ", hp = " << pHero->hp << '\n';
    pHero->hp = 80;                    // change through the pointer
    std::cout << "after pHero->hp = 80, hero.hp = " << hero.hp << '\n';

    return 0;
}