#include<iostream>
#include<vector>

int main(int argc, char **argv) {
	std::cout << "You have entered cli arguments." << std::endl;
	std::cout << "You have this many: " << argc << std::endl;
	for (int i = 0; i < argc; ++i)
		std::cout << argv[i] << std::endl;

	return 0;
}
