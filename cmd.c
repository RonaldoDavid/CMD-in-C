// CMD DE BROMA. FUNCIONA

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

	system("title C:_WINDOWS_system32_cmd.exe"); 

	printf("Microsoft Windows [v.: R0na1d0 Dav9d] \n(c) 2017 Microsoft Corporation. Todos los derechos reservados.\n\n");
	
	printf("   ?-------------------------------------?\n");
	printf("   |   Ronaldo David. My Different CMD   |\n");
	printf("   ?-------------------------------------?\n\n");

	int forever = 0;
	while (forever == 0) {
		
		char text[200];

		printf("C:%CUsers%cMicrosoftUser-> ", 92, 92);
		gets(text);
		
		Sleep(100);

		// printf("%s\n", text);
		system(text);

	}

	system("pause");
	return 0;
}
