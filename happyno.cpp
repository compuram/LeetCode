#include<iostream>
#include<vector>

using namespace std;

vector<int> v;

bool isHappy(int number) {

	// loop through each digit of the number

	// square and add

	int sum = 0; int ans;

	while (number > 0) {
		
		ans = number%10;
		sum = sum + ans*ans;
		number = number/10;
	}

	if (sum == 1) return true;

	isHappy(sum);

	

}


int main() {

	int num = 19;

	if (isHappy(num)) {

		cout << num << "is a happy number" << endl;
	}
	else
	{
		cout << num << "is not a happy number" << endl;
	}

	return 0;
}
