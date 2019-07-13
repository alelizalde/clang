#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std; 

class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        std::vector<int> change(n + 1, 0);

        for (vector<int> &booking : bookings) {
            booking[0]--;
            booking[1]--;
            change[booking[0]] += booking[2];
            change[booking[1] + 1] -= booking[2];
        }

        vector<int> seats(n, 0);

        for (int i = 0; i < n; i++)
            seats[i] = (i == 0 ? 0 : seats[i - 1]) + change[i];
        
        return seats;
    }
};

int main()
{
    Solution test1;
    
	vector<vector<int>> mat {
			{ 1, 2, 10 },
			{ 2, 3, 20},
			{ 2, 5, 25 }
	};
	
	/*for (vector<int> row: mat) {
		for (int val: row) {
			cout << val << " ";
		}
		cout << '\n';
	}*/
	
    vector<int>  ans = test1.corpFlightBookings(mat, 5);
    for (int i: ans) {
        cout << i << " ";
    }
	
    return 0;
}
