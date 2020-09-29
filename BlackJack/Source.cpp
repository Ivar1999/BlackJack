#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector <vector<int> > deck{ 
{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 },
{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 },
{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 },
{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 } 
};


struct cards {
	int card1;
	int card2;
	int card3;
	int card4;
	int card5;
	int card6;
	int card7;
	int card8;
	int card9;
	int card10;
	int card11;
	int card12;
	int card13;

}clubs, diamonds, hearts, spades;


int main() {

	for (int i = 0; i < 13; i++)
	{
		cout << "clubs" << deck[0][i] << endl;
	}
	for (int i = 0; i < 13; i++)
	{
		cout << "diamonds" << deck[1][i] << endl;
	}
	for (int i = 0; i < 13; i++)
	{
		cout << "hearts" << deck[0][i] << endl;
	}
	for (int i = 0; i < 13; i++)
	{
		cout << "spades" << deck[1][i] << endl;
	}

	return 0;
}