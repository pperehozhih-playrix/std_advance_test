#include <iterator>
#include <vector>

int main() {
	std::vector<int> v{ 3, 1, 4 };
	{
		auto foo = v.begin();
		long bar = 1;
		std::advance(foo, bar);
	}
	{
		auto foo = v.begin();
		size_t bar = 1;
		std::advance(foo, bar);
	}
	return 0;
}
