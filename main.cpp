#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>

using namespace std;

int main() {
	bool loopbool = true;
	int random;
	vector<int> myintvector;
	int tempsize;
	int x;
	int size = 0;
	char variable;

	cout<< "What command do you want?" << endl << "1 = One Random Prime Number" << endl << "2 = Ten Random Prime Numbers" << endl << "Q = Quit" << endl;
	std::cin>> variable;
	srand( time(NULL) );
	if(variable == 'Q' || variable == 'q') {
			loopbool = false;
		}
	while(loopbool) {
		if(variable = '1'){
			std::cout<< "Type in a positive number" << endl;
			int num;
			bool primeNum;
			primeNum = true;
			std::cin>> num;
			for(int i = 3; i <= num; i++) {
				for(int k = 2; k <= i - 1; k++) {
					if(i % k == 0) {
						primeNum = false; 
					}

				}
				if(primeNum) {
					myintvector.push_back (i);
					size = size++;
				}
			}
			random = rand() % size;
			x = myintvector[random];
			std::cout<< x << endl;
			myintvector.clear();
			size = 0 ;

		}
		if(variable == '2') {
			std::cout<< "Type in a positive number" << endl;
			int num;
			bool primeNum;
			primeNum = true;
			std::cin>> num;
			for(int i = 3; i <= num; i++) {
				for(int k = 2; k <= i - 1; k++) {
					if(i % k == 0) {
						primeNum = false; 
					}

				}
				if(primeNum) {
					myintvector.push_back (i);
					size = size++;
				}
			}
			for(int c = 0; c <= 9; c++) {
				random = rand() % size;
				x = myintvector[random];
				std::cout<< x << ", ";
				myintvector.clear();
				size = 0 ;
			}
		}


		if(variable == 'Q' || variable == 'q') {
			loopbool = false;
		}

		std::cin>> variable;


	}
	int y;
	std::cin>>y;
	return 0;
}