#include <stdlib.h>

int main()
{
	system("nmcli -f SSID dev wifi list > listfile.txt");
	return 0;
} 