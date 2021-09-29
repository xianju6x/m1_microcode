// BEGIN mcdefs.h

// Register defines for LATCH() and EL() 
#define	R_MSW	1
#define	R_C	2
#define	R_PC	3
#define	R_DP	4
#define	R_SP	5
#define	R_A	6
#define	R_B	7
#define	R_MDR	8
#define	R_PTB	9
#define	R_SSP	10
// Register defines for LATCH()-only
#define	R_NONE	0
#define	R_IR_REG	15
// Register defines for EL()-only
#define	R_MAR	0
#define	R_TPC	11
#define R_FCODE	12
#define	R_IR_BASE	15
// Register defines for ER()
#define	ER_MDR	0
#define	ER_IMM	1
#define	ER_FAULT	2
// Defines for IMMVAL()
#define	IMM_0	0
#define	IMM_1	1
#define	IMM_NEG1	3
#define	IMM_NEG2	2
// Defines for MISC()
#define	M_NONE	0
#define M_SYSCALL 1
#define	M_HALT	2
#define M_BKPT 3
#define	M_TRAPO	4
#define	M_LPTE	5
#define	M_SET_FLAGS	6
#define	M_INIT_INST	7
#define	M_RSHIFT	8
#define	M_DMA_ACK	9
#define	M_LEI	10
#define	M_DO_BRANCH	11
#define M_CLR_TRAP	12
#define M_COMMIT 13
// Defines for ALUOP(op,size,carry)
#define	OP_IR13	0
#define	OP_AND	1
#define	OP_SUB	2
#define	OP_ADD	3
#define	WORD	0
#define	BYTE	1
#define	LWORD	1
#define	LBYTE	0
#define	NO_CARRY	0
#define	CARRY_IN	1
// Defines for CBR()
#define	B_NORMAL	0
#define	B_NEGATED	1
// END mcdefs.h
#define NEXT_POS	 0
#define LATCH_POS	 1
#define LMAR_POS	 2
#define LMDRLO_POS	 3
#define LMDRHI_POS	 4
#define EMDRLO_POS	 5
#define EMDRHI_POS	 6
#define PRIV_POS	 7
#define LMODE_POS	 8
#define LPAGING_POS	 9
#define MISC_POS	 10
#define E_L_POS		 11
#define E_R_POS		 12
#define IMMVAL_POS	 13
#define ALUOP_SIZE_POS	 14
#define ALUOP_POS	 15
#define CARRY_POS	 16
#define L_SIZE_POS	 17
#define BR_SENSE_POS	 18
#define USER_PTB_POS	 19
#define CODE_PTB_POS	 20

#define NEXT(VAL)	INIT(NEXT_POS,VAL)
#define LATCH(VAL)	INIT(LATCH_POS,VAL)
#define LMAR(VAL)	INIT(LMAR_POS,VAL)
#define LMDRLO(VAL)	INIT(LMDRLO_POS,VAL)
#define LMDRHI(VAL)	INIT(LMDRHI_POS,VAL)
#define EMDRLO(VAL)	INIT(EMDRLO_POS,VAL)
#define EMDRHI(VAL)	INIT(EMDRHI_POS,VAL)
#define PRIV(VAL)	INIT(PRIV_POS,VAL)
#define LMODE(VAL)	INIT(LMODE_POS,VAL)
#define LPAGING(VAL)	INIT(LPAGING_POS,VAL)
#define MISC(VAL)	INIT(MISC_POS,VAL)
#define E_L(VAL)	INIT(E_L_POS,VAL)
#define E_R(VAL)	INIT(E_R_POS,VAL)
#define IMMVAL(VAL)	INIT(IMMVAL_POS,VAL)
#define ALUOP_SIZE(VAL)	INIT(ALUOP_SIZE_POS,VAL)
#define ALUOP(VAL)	INIT(ALUOP_POS,VAL)
#define CARRY(VAL)	INIT(CARRY_POS,VAL)
#define L_SIZE(VAL)	INIT(L_SIZE_POS,VAL)
#define BR_SENSE(VAL)	INIT(BR_SENSE_POS,VAL)
#define USER_PTB(VAL)	INIT(USER_PTB_POS,VAL)
#define CODE_PTB(VAL)	INIT(CODE_PTB_POS,VAL)

#define UNUSABLE 0xff

#define CODE_SPACE 1
#define DATA_SPACE 0
#define PTB_OVERRIDE 1
#define PTB_NORMAL 0
#define	USE_IR	0xff

#define SET_ADR(IS_CODE,IS_USER) LMAR(1) ; CODE_PTB(IS_CODE) ; USER_PTB(IS_USER)
#define CODE SET_ADR(CODE_SPACE,PTB_NORMAL)
#define DATA SET_ADR(DATA_SPACE,PTB_NORMAL)

#define CBR(SENSE,TGT)	MISC(M_DO_BRANCH);BR_SENSE(SENSE);NEXT(TGT)

#define L(REG,SIZE)	LATCH(REG);L_SIZE(SIZE)

#define READLO LMDRLO(1)
#define READHI LMDRHI(1)
#define READEXT LMDRLO(1);LMDRHI(1)
#define WRITELO EMDRLO(1)
#define WRITEHI EMDRHI(1)

#define INC_TO_Z(REG) E_L(REG) ; E_R(ER_IMM) ; IMMVAL(IMM_1) ; ALU(OP_ADD,WORD,NO_CARRY)
#define INC2_TO_Z(REG) E_L(REG);E_R(ER_IMM);IMMVAL(IMM_NEG2);ALU(OP_SUB,WORD,NO_CARRY)
#define DEC_TO_Z(REG) E_L(REG);E_R(ER_IMM);IMMVAL(IMM_NEG1);ALU(OP_ADD,WORD,NO_CARRY)
#define ZERO_TO_Z E_L(R_MDR);E_R(ER_IMM);IMMVAL(IMM_0);ALU(OP_AND,WORD,NO_CARRY)
#define NEG1_TO_Z E_L(R_MDR);E_R(ER_IMM);IMMVAL(IMM_NEG1);ALU(OP_ADD,WORD,NO_CARRY)
#define TO_Z(REG) E_L(REG);E_R(ER_IMM);IMMVAL(IMM_NEG1);ALU(OP_AND,WORD,NO_CARRY)
#define TO_Z8(REG) E_L(REG);E_R(ER_IMM);IMMVAL(IMM_NEG1);ALU(OP_AND,BYTE,NO_CARRY)

#define LDHI READHI;INC_TO_Z(R_MAR);DATA
#define LDLO READLO;TO_Z(R_PC);CODE 
#define STHI WRITEHI;INC_TO_Z(R_MAR);DATA
#define STLO WRITELO;TO_Z(R_PC);CODE

#define LDIMMHI READHI;L(R_PC,LWORD);INC_TO_Z(R_PC);CODE
#define LDIMMLO READLO;L(R_PC,LWORD);INC_TO_Z(R_PC);CODE
#define LDIMMEXT READEXT;L(R_PC,LWORD);INC_TO_Z(R_PC);CODE

#define GEN_ADDR(BASE) E_L(BASE);E_R(ER_MDR);ALU(OP_ADD,WORD,NO_CARRY)

#define COMPARE_0(REG) E_L(REG);E_R(ER_IMM);IMMVAL(IMM_0);ALU(OP_SUB,WORD,NO_CARRY)
#define COMPARE8_0(REG) E_L(REG);E_R(ER_IMM);IMMVAL(IMM_0);ALU(OP_SUB,BYTE,NO_CARRY)

#define ALU(OP,SZ,CRY) ALUOP(OP);ALUOP_SIZE(SZ);CARRY(CRY)

#define FETCH_OP READLO;MISC(M_INIT_INST);INC_TO_Z(R_MAR);L(R_PC,LWORD);CODE;NEXT(UNUSABLE)

#define PUSHLO WRITELO;DEC_TO_Z(R_MAR);DATA
#define PUSHHI WRITEHI;DEC_TO_Z(R_MAR);DATA
#define POPLO READLO;INC_TO_Z(R_MAR);DATA
#define POPHI READHI;INC_TO_Z(R_MAR);DATA

#define TO_MDR(REG) TO_Z(REG);L(R_MDR,LWORD)
#define FROM_MDR(REG) TO_Z(R_MDR);L(REG,LWORD)
