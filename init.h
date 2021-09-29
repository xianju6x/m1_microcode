/*
 ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 |  1   |                   2                     |                    3                   |          4         |                               5                                      |
 ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 | next | latch | lmar | lmdrlo | lmdrhi | emdrlo | emdrhi | priv | lmode | lpaging | misc | e_l | e_r | immval | aluop_size | aluop | carry | l_size | br_sense | user_ptb | code_ptb | 
 ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 |  8   |   4   |  1   |   1    |    1   |    1   |   1    |   1  |   1   |    1    |  4   |  4  |  2  |   2    |      1     |   2   |   1   |    1   |     1    |     1    |     1    |
 ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 */

#define INIT(POS,VAL) do{ \
switch(POS){ \
case 0: \
	mcode.next = (unsigned char)VAL; \
	break; \
case 1: \
	mcode.latch = VAL; \
	break; \
case 2: \
	mcode.lmar = VAL; \
	break; \
case 3: \
	mcode.lmdrlo = VAL; \
	break; \
case 4: \
	mcode.lmdrhi = VAL; \
	break; \
case 5: \
	mcode.emdrlo = VAL; \
	break; \
case 6: \
	mcode.emdrhi = VAL; \
	break; \
case 7: \
	mcode.priv = VAL; \
	break; \
case 8: \
	mcode.lmode = VAL; \
	break; \
case 9: \
	mcode.lpaging = VAL; \
	break; \
case 10: \
	mcode.misc = VAL; \
	break; \
case 11: \
	mcode.e_l = VAL; \
	break; \
case 12: \
	mcode.e_r = VAL; \
	break; \
case 13: \
	mcode.immval = VAL; \	
	break; \
case 14: \
	mcode.aluop_size = VAL; \
	break; \
case 15: \
	mcode.aluop = VAL; \
	break; \
case 16: \
	mcode.carry = VAL; \
	break; \
case 17: \
	mcode.l_size = VAL; \
	break; \
case 18: \
	mcode.br_sense = VAL; \
	break; \
case 19: \
	mcode.user_ptb = VAL; \
	break; \
case 20: \
	mcode.code_ptb = VAL; \
	break; \
} \
}while(0)
