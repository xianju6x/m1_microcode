#include <stdio.h>

#define INIT(POS,VAL) do{ \
		 switch(POS){ \
		 	case 1:    \
				temp.a = VAL; \
				break;        \
			case 2:           \
				temp.b = VAL; \
				break;        \
		 }   \
		}while(0)

#define GET_VAL(POS,VAL) \
({                      \
 	ret_t temp;         \
	switch(POS)         \
 	{                   \
		 case 1:         \
			temp.a = VAL; \
			break;        \
		case 2:           \
			temp.b = VAL; \
			break;        \
	}                     \
	temp; \
})

typedef struct {
	int a;
	int b;
} ret_t;

int main(int argc, const char *argv[])
{
	int a = (1,3,4);
	a++,a++;
	printf("hello %d\n",a);
	
	ret_t temp;
	INIT(1,102);
	printf("temp.a = %d\n",temp.a);

	ret_t temp1 = GET_VAL(2,111);
	printf("temp1.a = %d\n",temp1.b);
	

	int b[2] = {
	#define ADD_OP(a,b,c) b + 1 ,
	#include "test.h"
	};
	int c[] = {};
	printf("b[0] = %d ; b[1] = %d\n",b[0],b[1]);

	int d[] = {a = 100}; 
	printf("%d\n",d[0]);
	return 0;
}
