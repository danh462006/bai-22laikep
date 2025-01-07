// bai 22laikep.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int  nam ; 
	double laixuat = 0,sotien  ;
   cout << "----ung dung tinh lai xuat ngan hang ----- \n";
   cout << "----lai suat co dinh 7% nam -----\n";
   cout << " nhap so nam "; cin >> nam;
   cout << "\n hap so von muon gui ngan hang "; cin >>  sotien;

   for (int i = 1; i <= nam ; i++) 
   {
	   sotien  = sotien + laixuat; 
	   laixuat = sotien * 0.07;
	     

	   cout << i << " nam : " << "von = " << sotien << "trieu dong - lai = " << laixuat << "trieu dong \n ";
	}
   
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
