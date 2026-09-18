#include <iostream>
#include <memory> // for std::unique_ptr

class Resource
{
public:
	Resource() { std::cout << "Resource acquired\n"; }
	~Resource() { std::cout << "Resource destroyed\n"; }
};

int main()
{
	// allocate a Resource object and have it owned by std::unique_ptr
	std::unique_ptr<Resource> res{ new Resource() };

	std::unique_ptr<Resource> pez{ new Resource() };
	std::unique_ptr<Resource> kes{ new Resource() };
	std::unique_ptr<Resource> tes{ new Resource() };


	std::cout << "Called " << '\n';

	std::unique_ptr<Resource> ves{ new Resource() };


	return 0;
} // res goes out of scope here, and the allocated Resource is destroyed