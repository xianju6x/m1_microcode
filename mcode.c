//=====================================================
// BEGIN mcode.c
//

#include <stdio.h>
#include "mcode.h"
#include "init.h"

int main(int argc, const char *argv[])
{
	mcode_rec_t mcode_store[512] = {
	#include "mcdefs.h"
	#include "next.h"
	#include "prombits.h"
	};

   	FILE* rom1 = fopen( "rom1.bin" , "w" );
   	FILE* rom2 = fopen( "rom2.bin" , "w" );
   	FILE* rom3 = fopen( "rom3.bin" , "w" );
   	FILE* rom4 = fopen( "rom4.bin" , "w" );
   	FILE* rom5 = fopen( "rom5.bin" , "w" );

	for(int i = 0; i < 512; i++){
		unsigned char* base = (unsigned char *) & mcode_store[i];
   		fwrite((base + 0), 1 , 1, rom1);
   		fwrite((base + 1), 1 , 1, rom2);
   		fwrite((base + 2), 1 , 1, rom3);
   		fwrite((base + 3), 1 , 1, rom4);
   		fwrite((base + 4), 1 , 1, rom5);
	}

    fclose(rom1);
    fclose(rom2);
    fclose(rom3);
    fclose(rom4);
    fclose(rom5);
	return 0;
}
