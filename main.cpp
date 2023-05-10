#include <iostream>
#include <Windows.h>



#include "cleaners.h"
#include "other.h"




int main()
{
	int choice{};

	// promotion <3
	SetConsoleTitle(L"Exelon Services Cleaner | leave a vouch <3");
	system("color 4");
	

	while (true)
	{

		// protection (what my dad didn't wear)
		SearchPC();
		ProcessCheck();
		DetectByTitle();
		

		system("cls");

		Sleep(500);
		std::cout << "\n [1] clean fortnite";
		Sleep(500);
		std::cout << "\n [2] clean valorant";
		Sleep(500);
		std::cout << "\n [3] clean apex";
		std::cout << "\n\n\n\n>>";
		std::cin >> choice;


		switch (choice)
		{
		case 1: // fortnite 

			system("cls");

			// close fn apps
			std::cout << "[+] Closing All Fortnite Related Apps..." << std::endl;
			Sleep(2000);
			system("taskkill /f /im EpicGamesLauncher.exe >nul 2>&1");
			system("taskkill /f /im FortniteClient-Win64-Shipping.exe >nul 2>&1");
			system("taskkill /f /im OneDrive.exe >nul 2>&1");

			// start cleaning process
			system("cls");
			std::cout << "[+] starting cleaning process in 3";
			Sleep(1000);
			system("cls");
			std::cout << "[+] starting cleaning process in 2";
			Sleep(1000);
			system("cls");
			std::cout << "[+] starting cleaning process in 1";
			Sleep(1000);
			system("cls");
			std::cout << "cleaning....";
			Sleep(2000);
			system("cls");
			fnclean();


			// start mac changer
			system("cls");
			std::cout << "[+] changing mac address in 3";
			Sleep(1000);
			system("cls");
			std::cout << "[+] changing mac address in 2";
			Sleep(1000);
			system("cls");
			std::cout << "[+] changing mac address in 1";
			Sleep(1000);
			system("cls");
			std::cout << "changing....";
			Sleep(2000);
			system("cls");
			MacChanger();

			
			// exit message
			system("cls");
			std::cout << "[+] successfully cleaned!\n";
			system("pause");

			break;


		case 2: // valorant

			system("cls");
			// close valorant apps
			std::cout << "[+] Closing All Valorant Related Apps..." << std::endl;
			Sleep(2000);
			system("taskkill /f /im Valorant.exe");
			system("taskkill /f /im VALORANT-Win64-Shipping.exe");
			system("taskkill /f /im riotclient.exe");
			system("sc stop vgc");
			// start cleaning process
			system("cls");
			std::cout << "[+] starting cleaning process in 3";
			Sleep(1000);
			system("cls");
			std::cout << "[+] starting cleaning process in 2";
			Sleep(1000);
			system("cls");
			std::cout << "[+] starting cleaning process in 1";
			Sleep(1000);
			system("cls");
			std::cout << "cleaning....";
			Sleep(3000);
			valcleaner();


			// start mac changer
			system("cls");
			std::cout << "[+] changing mac address in 3";
			Sleep(1000);
			system("cls");
			std::cout << "[+] changing mac address in 2";
			Sleep(1000);
			system("cls");
			std::cout << "[+] changing mac address in 1";
			Sleep(1000);
			system("cls");
			std::cout << "changing....";
			Sleep(2000);
			system("cls");
			MacChanger();


			// exit message
			system("cls");
			std::cout << "[+] successfully cleaned!\n";
			system("pause");

			break;



		case 3: // apex 

			system("cls");
			// close apex apps
			std::cout << "[+] Closing All Apex Related Apps..." << std::endl;
			Sleep(2000);
			system("taskkill /f /im smartscreen.exe");
			system("taskkill /f /im EasyAntiCheat.exe");
			system("taskkill /f /im dnf.exe");
			system("taskkill /f /im DNF.exe");
			system("taskkill /f /im CrossProxy.exe");
			system("taskkill /f /im tensafe_1.exe");
			system("taskkill /f /im TenSafe_1.exe");
			system("taskkill /f /im tensafe_2.exe");
			system("taskkill /f /im tencentdl.exe");
			system("taskkill /f /im TenioDL.exe");
			system("taskkill /f /im uishell.exe");
			system("taskkill /f /im BackgroundDownloader.exe");
			system("taskkill /f /im conime.exe");
			system("taskkill /f /im QQDL.EXE");
			system("taskkill /f /im qqlogin.exe");
			system("taskkill /f /im dnfchina.exe");
			system("taskkill /f /im dnfchinatest.exe");
			system("taskkill /f /im dnf.exe");
			system("taskkill /f /im txplatform.exe");
			system("taskkill /f /im TXPlatform.exe");
			system("taskkill /f /im OriginWebHelperService.exe");
			system("taskkill /f /im Origin.exe");
			system("taskkill /f /im OriginClientService.exe");
			system("taskkill /f /im OriginER.exe");
			system("taskkill /f /im OriginThinSetupInternal.exe");
			system("taskkill /f /im OriginLegacyCLI.exe");
			system("taskkill /f /im Agent.exe");
			system("taskkill /f /im Client.exe");
			system("sc stop EasyAntiCheat");
			// start cleaning process
			system("cls");
			std::cout << "[+] starting cleaning process in 3";
			Sleep(1000);
			system("cls");
			std::cout << "[+] starting cleaning process in 2";
			Sleep(1000);
			system("cls");
			std::cout << "[+] starting cleaning process in 1";
			Sleep(1000);
			system("cls");
			std::cout << "cleaning....";
			Sleep(3000);
			apexclean();



			// start mac changer
			system("cls");
			std::cout << "[+] changing mac address in 3";
			Sleep(1000);
			system("cls");
			std::cout << "[+] changing mac address in 2";
			Sleep(1000);
			system("cls");
			std::cout << "[+] changing mac address in 1";
			Sleep(1000);
			system("cls");
			std::cout << "changing....";
			Sleep(2000);
			system("cls");
			MacChanger();



			// exit message
			system("cls");
			std::cout << "[+] successfully cleaned!\n";
			system("pause");

			break;


		default:
			system("cls");
			std::cout << "please select a valid option!";
			Sleep(2000);
			break;
		}
	}
	return 0;
}
