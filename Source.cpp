#include <Windows.h>
#include <iostream>
#include <Lmcons.h>
#include <array>
#include <fstream>

#pragma warning(disable:4996)

  ///////////////////////////////
 // #include <ThickAnimeGirl> // 
///////////////////////////////

//Yayo is super cool! :D

using namespace std;

int n1 = 0;
int n2 = 0;

std::array<std::string, 20> arrayOfStrings = { "LeBron", "Deiondre", "Dele", "Denzel", "Dewayne", "Dikembe", "Duante", "Jamar", "Jevonte", "Kadeem", "Kendis", "Kentay", "Keshawn", "Khalon" , "Kofi", "russel", "black", "nigga", "nigger", "curry" };
std::array<std::string, 20> arrayOfStrings2 = { "Beyonce", "Cassietta", "Cleotha", "Deiondre", "Dericia", "Gaynelle", "Kacondra", "Kanesha", "Keilantra", "Kendis", "Keshon", "Lachelle", "Lakin", "Lanelle" , "Laquanna", "Laqueta", "Laquinta", "shaniqua", "Latanya", "Latonya" };

void calcumalated()
{
	system("cls");
	cout << "\n\n  Welcome to Calcumalator!\n";
	cout << "  ------------------------\n\n";
	cout << "  Enter first number: ";
	cin >> n1;
	cout << "  Enter second number: ";
	cin >> n2;
	cout << "  What would you like to do: \n";
	cout << "  [F1] Addition \n";
	cout << "  [F2] Subtract \n";
	cout << "  [F3] Multiply \n";
	cout << "  [F4] Divide \n";
	while (true)
	{
		if (GetAsyncKeyState(VK_F1))
		{
			cout << "  Answer: " << n1 + n2;
			break;
		}
		if (GetAsyncKeyState(VK_F2))
		{
			cout << "  Answer: " << n1 - n2;
			break;
		}
		if (GetAsyncKeyState(VK_F3))
		{
			cout << "  Answer: " << n1 * n2;
			break;
		}
		if (GetAsyncKeyState(VK_F4))
		{
			cout << "  Answer: " << n1 / n2;
			break;
		}
	}


	Sleep(5000);
	system("cls");
}


void loadingSkin()
{
	cout << "\n\n  Checking Skin Colour [-]";
	Sleep(100);
	system("cls");
	cout << "\n\n  Checking Skin Colour [|]";
	Sleep(100);
	system("cls");
	cout << "\n\n  Checking Skin Colour [-]";
	Sleep(100);
	system("cls");
	cout << "\n\n  Checking Skin Colour [|]";
	Sleep(100);
	system("cls");
}

void fourTimes()
{
	loadingSkin();
	loadingSkin();
	loadingSkin();
	loadingSkin();
}

void skinCheck()
{
	fourTimes();

	char* user = getenv("username");
	for (size_t x = 0; x != arrayOfStrings.size(); ++x)
	{
		if (string(user) == arrayOfStrings[x])
		{
			system("cls");
			cout << "\n\n  beamed nigger";
			MessageBoxA(NULL, "Nigger detected! abort! abort! abort!", "Nigger Error", MB_OK);
			Sleep(2000);
			abort();
		}
	}
	cout << "\n\n  Skin check level 1 passed successfully, level 2 commencing shortly.";
	Sleep(2000);
	system("cls");
	fourTimes();
	for (size_t x = 0; x != arrayOfStrings2.size(); ++x)
	{
		if (string(user) == arrayOfStrings2[x])
		{
			system("cls");
			cout << "\n\n  beamed nigger";
			MessageBoxA(NULL, "Nigger detected! abort! abort! abort!", "Nigger Error", MB_OK);
			Sleep(2000);
			abort();
		}
	}
	cout << "\n\n  Skin check level 2 passed successfully, final level commencing shortly.";
	Sleep(2000);
	system("cls");
	cout << "\n\n  Do you like this song?\n";
	ShellExecute(0, 0, L"https://youtu.be/KZai9pHAYVA", 0, 0, SW_SHOW);

	cout << "  [F1] Yes \n";
	cout << "  [F2] No \n";
	while (true)
	{
		if (GetAsyncKeyState(VK_F1))
		{
			calcumalated();
			break;
		}
		if (GetAsyncKeyState(VK_F2))
		{
			system("cls");
			cout << "\n\n  beamed nigger";
			MessageBoxA(NULL, "Nigger detected! abort! abort! abort!", "Nigger Error", MB_OK);
			Sleep(2000);
			abort();
		}
	}
}

int main()
{
	while (true)
	{
		skinCheck();
		calcumalated();
	}
}
