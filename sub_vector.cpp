#include <vector>
#include <iostream>
using namespace std;

void print(std::vector<auto> const &input)
{
	for (int i = 0; i < input.size(); i++) {
		std::cout << input.at(i) << ' ';
	}
}

int main()
{
    vector<int> myVec = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int>::const_iterator first = myVec.begin() + 1;
    vector<int>::const_iterator last = myVec.end() - 1;
    vector<int> newVec(first, last);

    print(newVec);
    
    return 0;
}
