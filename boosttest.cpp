#include <iostream>
#include <boost/math/special_functions/round.hpp>

using namespace std;

int main()
{
	float c, ans;

	c = 2.5;

	ans = round(c);

	cout << endl << ans;

	return 0; 
}
