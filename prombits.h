({ mcode_rec_t mcode = {0};MISC(M_HALT);DEC_TO_Z(R_PC);L(R_PC,LWORD);CODE;NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Lda8_16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_C);L(R_MDR,LWORD);NEXT(Push16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_TPC);L(R_MDR,LWORD);NEXT(Push16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_DP);L(R_MDR,LWORD);NEXT(Push16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Ldb8_16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_A);L(R_MDR,LWORD);NEXT(Push16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);L(R_MDR,LWORD);NEXT(Push16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(BrNegated);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_SP);DATA;NEXT(Pop16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_SP);DATA;NEXT(Pop16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_SP);DATA;NEXT(Pop16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_SP);DATA;NEXT(Pop16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_SP);DATA;NEXT(Pop16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_SP);DATA;NEXT(Pop16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_SP);DATA;NEXT(Pop16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Lda8_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Lda8_8);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Lda8_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Lda8_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Ldb8_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Ldb8_8);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Ldb8_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Ldb8_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Lda16_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Lda16_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Lda16_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Lda16_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Ldb16_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Ldb16_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Ldb16_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Ldb16_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Aluop8_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Aluop8_indir16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_MSW);L(R_MDR,LWORD);NEXT(Push16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Aluop8_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Aluop8);mcode;}),
({ mcode_rec_t mcode = {0};DEC_TO_Z(R_A);DATA;NEXT(Mop16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_SP);L(R_MDR,LWORD);NEXT(Push16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);L(R_MDR,LWORD);NEXT(Aluop8);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Aluop16_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Aluop16_indir16);mcode;}),
({ mcode_rec_t mcode = {0};DEC_TO_Z(R_A);DATA;NEXT(Mop16Carry);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Aluop16_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Aluop16_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMEXT;NEXT(Aluop16);mcode;}),
({ mcode_rec_t mcode = {0};PRIV(1);TO_Z(R_B);SET_ADR(CODE_SPACE,PTB_OVERRIDE);NEXT(Wcpte);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);L(R_MDR,LWORD);NEXT(Aluop16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Aluop8_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Aluop8_indir16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_A);L(R_PC,LWORD);CODE;NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Aluop8_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Aluop8);mcode;}),
({ mcode_rec_t mcode = {0};DEC_TO_Z(R_A);DATA;NEXT(Mop16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_A);L(R_MDR,LWORD);NEXT(Aluop8);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);L(R_MDR,LWORD);NEXT(Aluop8);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Aluop16_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Aluop16_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Syscall);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Aluop16_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Aluop16_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMEXT;NEXT(Aluop16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_A);L(R_MDR,LWORD);NEXT(Aluop16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);L(R_MDR,LWORD);NEXT(Aluop16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Cmp8_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Cmp8_indir16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);L(R_C,LWORD);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Cmp8_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Cmp8);mcode;}),
({ mcode_rec_t mcode = {0};E_L(R_A);E_R(ER_MDR);ALU(OP_SUB,BYTE,NO_CARRY);MISC(M_SET_FLAGS);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_A);L(R_MDR,LWORD);NEXT(Aluop16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);L(R_MDR,LWORD);NEXT(Cmp8);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Cmp16_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Cmp16_indir16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_A);L(R_MDR,LWORD);NEXT(LeaB1);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Cmp16_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Cmp16_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMEXT;NEXT(Cmp16);mcode;}),
({ mcode_rec_t mcode = {0};E_L(R_A);E_R(ER_MDR);ALU(OP_SUB,WORD,NO_CARRY);MISC(M_SET_FLAGS);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);L(R_MDR,LWORD);NEXT(Cmp16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Aluop8_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Aluop8_indir16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z8(R_A);L(R_A,LWORD);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Aluop8_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Aluop8);mcode;}),
({ mcode_rec_t mcode = {0};DEC_TO_Z(R_A);DATA;NEXT(Mop16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(BrNormal);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);L(R_MDR,LWORD);NEXT(Aluop8);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Aluop16_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Aluop16_indir16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_A);L(R_MDR,LWORD);NEXT(LeaABA2);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Aluop16_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Aluop16_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMEXT;NEXT(Aluop16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(BrNegated);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);L(R_MDR,LWORD);NEXT(Aluop16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Aluop8_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Aluop8_indir16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);L(R_MDR,LWORD);NEXT(LeaBAB2);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Aluop8_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Aluop8);mcode;}),
({ mcode_rec_t mcode = {0};DEC_TO_Z(R_A);DATA;NEXT(Mop16);mcode;}),
({ mcode_rec_t mcode = {0};NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);L(R_MDR,LWORD);NEXT(Aluop8);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Aluop16_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Aluop16_indir16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_A);L(R_MDR,LWORD);NEXT(LeaBBA2);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Aluop16_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Aluop16_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMEXT;NEXT(Aluop16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);DATA;NEXT(Strcopy);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);L(R_MDR,LWORD);NEXT(Aluop16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(LdaA_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(LdaA_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(LdaA_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(LdaA_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(LdaB_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(LdaB_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(LdaB_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(LdaB_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(LdiA8);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(LdiB8);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMEXT;NEXT(LdiA16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMEXT;NEXT(LdiB16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(LdiA16_lo);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(LdiB16_lo);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_A);L(R_MDR,LWORD);NEXT(Adc16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);L(R_MDR,LWORD);NEXT(Adc16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(CallImm);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Lda16_8);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_PC);L(R_MDR,LWORD);NEXT(CallA);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(RelBrLo);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMEXT;NEXT(RelBr);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Ldb16_8);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(LeaShort);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(LeaShort);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_MSW);L(R_A,LWORD);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(BrNormal);mcode;}),
({ mcode_rec_t mcode = {0};PRIV(1);NEXT(Reti);mcode;}),
({ mcode_rec_t mcode = {0};MISC(M_TRAPO);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Bset8);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Bclr8);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Bset16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Bclr16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Cmpb8_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Cmpb8_indir16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_A);L(R_B,LWORD);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Cmpb8_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Cmpb8);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_MDR);L(R_MDR,LWORD);NEXT(Cmpb8);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_A);L(R_C,LWORD);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);L(R_MDR,LWORD);NEXT(Cmpb8);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Cmpb16_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Cmpb16_indir16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);L(R_A,LWORD);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Cmpb16_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Cmpb16_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMEXT;NEXT(Cmpb16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_MDR);L(R_MDR,LWORD);NEXT(Cmpb16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);L(R_MDR,LWORD);NEXT(Cmpb16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Cmpb8_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Cmpb8_indir16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);L(R_MDR,LWORD);NEXT(LeaA1);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Cmpb8_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Cmpb8);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_MDR);L(R_MDR,LWORD);NEXT(Cmpb8);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(BrNormal);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);L(R_MDR,LWORD);NEXT(Cmpb8);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Cmpb16_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Cmpb16_indir16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);L(R_MDR,LWORD);NEXT(LeaAAB2);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Cmpb16_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Cmpb16_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMEXT;NEXT(Cmpb16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(BrNegated);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);L(R_MDR,LWORD);NEXT(Cmpb16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Cmpb8_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Cmpb8_indir16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z8(R_B);L(R_B,LWORD);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Cmpb8_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Cmpb8);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(BrNormal);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_A);L(R_DP,LWORD);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);L(R_MDR,LWORD);NEXT(Cmpb8);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Cmpb16_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Cmpb16_indir16);mcode;}),
({ mcode_rec_t mcode = {0};DEC_TO_Z(R_A);DATA;NEXT(Mop16Carry);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Cmpb16_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Cmpb16_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMEXT;NEXT(Cmpb16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(BrNegated);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);L(R_MDR,LWORD);NEXT(Cmpb16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(BrNegated);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Sta8_16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_A);L(R_MDR,LWORD);NEXT(Shla16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_A);MISC(M_RSHIFT);L(R_A,LWORD);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);L(R_MDR,LWORD);NEXT(Shlb16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Stb8_16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);MISC(M_RSHIFT);L(R_B,LWORD);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);L(R_MDR,LWORD);NEXT(Aluop16);mcode;}),
({ mcode_rec_t mcode = {0};PRIV(1);TO_Z(R_A);L(R_PTB,LWORD);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Sta16_16);mcode;}),
({ mcode_rec_t mcode = {0};PRIV(1);NEXT(CopyMSWA);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_A);L(R_SP,LWORD);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};DEC_TO_Z(R_A);DATA;NEXT(Mop16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Stb16_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(LdiC16_lo);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(BrNormal);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Sta8_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Sta8_8);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Sta8_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Sta8_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Stb8_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Stb8_8);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Stb8_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Stb8_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Sta16_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Sta16_8);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Sta16_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Sta16_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Stb16_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Stb16_8);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Stb16_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Stb16_16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);CODE;NEXT(Ldcode8);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_DP);L(R_A,LWORD);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMEXT;NEXT(LdiC16);mcode;}),
({ mcode_rec_t mcode = {0};INC2_TO_Z(R_B);DATA;NEXT(Mcpy4);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Enter);mcode;}),
({ mcode_rec_t mcode = {0};NEG1_TO_Z;LATCH(R_MDR);NEXT(Enter);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_A);L(R_MDR,LWORD);NEXT(Vshl);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);L(R_MDR,LWORD);NEXT(Vshl);mcode;}),
({ mcode_rec_t mcode = {0};COMPARE_0(R_C);MISC(M_SET_FLAGS);NEXT(Bcopy);mcode;}),
({ mcode_rec_t mcode = {0};PRIV(1);COMPARE_0(R_C);MISC(M_SET_FLAGS);NEXT(ToSys);mcode;}),
({ mcode_rec_t mcode = {0};PRIV(1);COMPARE_0(R_C);MISC(M_SET_FLAGS);NEXT(FromSys);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);DATA;NEXT(LdClr);mcode;}),
({ mcode_rec_t mcode = {0};PRIV(1);TO_Z(R_B);SET_ADR(DATA_SPACE,PTB_OVERRIDE);NEXT(Wdpte);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);L(R_MDR,LWORD);NEXT(Sbc16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_A);L(R_MDR,LWORD);NEXT(Vshr);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);L(R_MDR,LWORD);NEXT(Vshr);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Cmpb8_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Cmpb8_indir16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_C);L(R_A,LWORD);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Cmpb8_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Cmpb8);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_MDR);L(R_MDR,LWORD);NEXT(Cmpb8);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_SP);L(R_A,LWORD);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);L(R_MDR,LWORD);NEXT(Cmpb8);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Cmpb16_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Cmpb16_indir16);mcode;}),
({ mcode_rec_t mcode = {0};MISC(M_BKPT);NEXT(Unreachable);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Cmpb16_indir16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMHI;NEXT(Cmpb16_16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMEXT;NEXT(Cmpb16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_MDR);L(R_MDR,LWORD);NEXT(Cmpb16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);L(R_MDR,LWORD);NEXT(Cmpb16);mcode;}),
({ mcode_rec_t mcode = {0};FETCH_OP;mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_MAR);MISC(M_COMMIT);NEXT(Fault);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_MAR);MISC(M_COMMIT);NEXT(Fault);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_MAR);MISC(M_COMMIT);NEXT(Fault);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_MAR);MISC(M_COMMIT);NEXT(Fault);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_MAR);MISC(M_COMMIT);NEXT(Fault);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_MAR);MISC(M_COMMIT);NEXT(Fault);mcode;}),
({ mcode_rec_t mcode = {0};MISC(M_DMA_ACK);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_MAR);MISC(M_COMMIT);NEXT(Fault);mcode;}),
({ mcode_rec_t mcode = {0};;;mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_MAR);L(R_PC,LWORD);NEXT(Fault);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_MAR);L(R_PC,LWORD);NEXT(Fault);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_MAR);L(R_PC,LWORD);NEXT(Fault);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_MAR);L(R_PC,LWORD);NEXT(Fault);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_MAR);L(R_PC,LWORD);NEXT(Fault);mcode;}),
({ mcode_rec_t mcode = {0};mcode;}),
({ mcode_rec_t mcode = {0};GEN_ADDR(R_IR_BASE);DATA;NEXT(0x111);mcode;}),
({ mcode_rec_t mcode = {0};LDLO;NEXT(0x112);mcode;}),
({ mcode_rec_t mcode = {0};E_L(R_A);E_R(ER_MDR);ALU(OP_IR13,BYTE,NO_CARRY);L(R_A,LBYTE);MISC(M_SET_FLAGS);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Aluop8_indir);mcode;}),
({ mcode_rec_t mcode = {0};GEN_ADDR(R_IR_BASE);DATA;NEXT(0x115);mcode;}),
({ mcode_rec_t mcode = {0};LDHI;NEXT(0x116);mcode;}),
({ mcode_rec_t mcode = {0};LDLO;NEXT(0x117);mcode;}),
({ mcode_rec_t mcode = {0};E_L(R_A);E_R(ER_MDR);ALU(OP_IR13,WORD,NO_CARRY);L(R_A,LWORD);MISC(M_SET_FLAGS);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Aluop16_indir);mcode;}),
({ mcode_rec_t mcode = {0};GEN_ADDR(R_IR_BASE);DATA;NEXT(0x11a);mcode;}),
({ mcode_rec_t mcode = {0};LDLO;NEXT(0x11b);mcode;}),
({ mcode_rec_t mcode = {0};E_L(R_A);E_R(ER_MDR);ALU(OP_SUB,BYTE,NO_CARRY);MISC(M_SET_FLAGS);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Cmp8_indir);mcode;}),
({ mcode_rec_t mcode = {0};GEN_ADDR(R_IR_BASE);DATA;NEXT(0x11e);mcode;}),
({ mcode_rec_t mcode = {0};LDHI;NEXT(0x11f);mcode;}),
({ mcode_rec_t mcode = {0};LDLO;NEXT(0x120);mcode;}),
({ mcode_rec_t mcode = {0};E_L(R_A);E_R(ER_MDR);ALU(OP_SUB,WORD,NO_CARRY);MISC(M_SET_FLAGS);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Cmp16_indir);mcode;}),
({ mcode_rec_t mcode = {0};GEN_ADDR(R_IR_BASE);DATA;NEXT(0x123);mcode;}),
({ mcode_rec_t mcode = {0};LDLO;NEXT(0x124);mcode;}),
({ mcode_rec_t mcode = {0};E_L(R_A);E_R(ER_MDR);ALU(OP_SUB,BYTE,NO_CARRY);MISC(M_SET_FLAGS);NEXT(CheckBr);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Cmpb8_indir);mcode;}),
({ mcode_rec_t mcode = {0};GEN_ADDR(R_IR_BASE);DATA;NEXT(0x127);mcode;}),
({ mcode_rec_t mcode = {0};LDHI;NEXT(0x128);mcode;}),
({ mcode_rec_t mcode = {0};LDLO;NEXT(0x129);mcode;}),
({ mcode_rec_t mcode = {0};E_L(R_A);E_R(ER_MDR);ALU(OP_SUB,WORD,NO_CARRY);MISC(M_SET_FLAGS);NEXT(CheckBr);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Cmpb16_indir);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMEXT;CBR(B_NORMAL,TakenBr);mcode;}),
({ mcode_rec_t mcode = {0};E_L(R_PC);E_R(ER_MDR);ALU(OP_ADD,WORD,NO_CARRY);L(R_PC,LWORD);CODE;NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;CBR(B_NORMAL,TakenBr);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;CBR(B_NEGATED,TakenBr);mcode;}),
({ mcode_rec_t mcode = {0};E_L(R_A);E_R(ER_MDR);ALU(OP_AND,BYTE,NO_CARRY);MISC(M_SET_FLAGS);NEXT(CheckBrNeg);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMEXT;CBR(B_NEGATED,TakenBr);mcode;}),
({ mcode_rec_t mcode = {0};E_L(R_A);E_R(ER_MDR);ALU(OP_AND,BYTE,NO_CARRY);MISC(M_SET_FLAGS);NEXT(CheckBr);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(0x133);mcode;}),
({ mcode_rec_t mcode = {0};E_L(R_A);E_R(ER_MDR);ALU(OP_AND,WORD,NO_CARRY);MISC(M_SET_FLAGS);NEXT(CheckBrNeg);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(0x135);mcode;}),
({ mcode_rec_t mcode = {0};E_L(R_A);E_R(ER_MDR);ALU(OP_AND,WORD,NO_CARRY);MISC(M_SET_FLAGS);NEXT(CheckBr);mcode;}),
({ mcode_rec_t mcode = {0};DEC_TO_Z(R_SP);DATA;NEXT(0x137);mcode;}),
({ mcode_rec_t mcode = {0};WRITELO;DEC_TO_Z(R_MAR);DATA;L(R_SP,LWORD);NEXT(0x138);mcode;}),
({ mcode_rec_t mcode = {0};WRITEHI;TO_Z(R_PC);CODE;NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};LDHI;NEXT(0x13a);mcode;}),
({ mcode_rec_t mcode = {0};READLO;INC_TO_Z(R_MAR);L(R_SP,LWORD);DATA;NEXT(0x13b);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_MDR);L(R_IR_REG,LWORD);NEXT(PCtoMAR);mcode;}),
({ mcode_rec_t mcode = {0};GEN_ADDR(R_IR_BASE);DATA;NEXT(0x13d);mcode;}),
({ mcode_rec_t mcode = {0};LDLO;NEXT(LdiA8);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Lda8_8);mcode;}),
({ mcode_rec_t mcode = {0};GEN_ADDR(R_IR_BASE);DATA;NEXT(0x140);mcode;}),
({ mcode_rec_t mcode = {0};LDLO;NEXT(LdiB8);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Ldb8_8);mcode;}),
({ mcode_rec_t mcode = {0};GEN_ADDR(R_IR_BASE);DATA;NEXT(0x143);mcode;}),
({ mcode_rec_t mcode = {0};LDHI;NEXT(0x144);mcode;}),
({ mcode_rec_t mcode = {0};LDLO;NEXT(LdiA16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Lda16_8);mcode;}),
({ mcode_rec_t mcode = {0};GEN_ADDR(R_IR_BASE);DATA;NEXT(0x147);mcode;}),
({ mcode_rec_t mcode = {0};LDHI;NEXT(0x148);mcode;}),
({ mcode_rec_t mcode = {0};LDLO;NEXT(LdiB16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Ldb16_8);mcode;}),
({ mcode_rec_t mcode = {0};GEN_ADDR(R_IR_BASE);DATA;NEXT(0x14b);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_A);L(R_MDR,LWORD);NEXT(0x14c);mcode;}),
({ mcode_rec_t mcode = {0};STLO;NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Sta8_8);mcode;}),
({ mcode_rec_t mcode = {0};GEN_ADDR(R_IR_BASE);DATA;NEXT(0x14f);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_A);L(R_MDR,LWORD);NEXT(0x150);mcode;}),
({ mcode_rec_t mcode = {0};STHI;NEXT(StaLo);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Sta16_8);mcode;}),
({ mcode_rec_t mcode = {0};GEN_ADDR(R_IR_BASE);DATA;NEXT(0x153);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);L(R_MDR,LWORD);NEXT(StaLo);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Stb8_8);mcode;}),
({ mcode_rec_t mcode = {0};GEN_ADDR(R_IR_BASE);DATA;NEXT(0x156);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);L(R_MDR,LWORD);NEXT(Shi);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Stb16_8);mcode;}),
({ mcode_rec_t mcode = {0};E_L(R_A);E_R(ER_MDR);ALU(OP_SUB,WORD,CARRY_IN);L(R_A,LWORD);MISC(M_SET_FLAGS);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};E_L(R_A);E_R(ER_MDR);ALU(OP_ADD,WORD,CARRY_IN);L(R_A,LWORD);MISC(M_SET_FLAGS);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(LdaA);mcode;}),
({ mcode_rec_t mcode = {0};GEN_ADDR(R_IR_BASE);L(R_A,LWORD);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(LdaB);mcode;}),
({ mcode_rec_t mcode = {0};GEN_ADDR(R_IR_BASE);L(R_B,LWORD);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_MDR);L(R_A,LBYTE);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_MDR);L(R_B,LBYTE);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(LdiA16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_MDR);L(R_A,LWORD);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(LdiB16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_MDR);L(R_B,LWORD);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(LdiC16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_MDR);L(R_C,LWORD);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(RelBr);mcode;}),
({ mcode_rec_t mcode = {0};GEN_ADDR(R_PC);L(R_PC,LWORD);CODE;NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(0x169);mcode;}),
({ mcode_rec_t mcode = {0};GEN_ADDR(R_PC);L(R_PC,LWORD);NEXT(0x16a);mcode;}),
({ mcode_rec_t mcode = {0};E_R(ER_MDR);E_L(R_PC);ALU(OP_SUB,WORD,NO_CARRY);L(R_MDR,LWORD);NEXT(Push16);mcode;}),
({ mcode_rec_t mcode = {0};DEC_TO_Z(R_SP);DATA;NEXT(0x16c);mcode;}),
({ mcode_rec_t mcode = {0};WRITELO;DEC_TO_Z(R_MAR);DATA;L(R_SP,LWORD);NEXT(0x16d);mcode;}),
({ mcode_rec_t mcode = {0};WRITEHI;TO_Z(R_A);L(R_PC,LWORD);CODE;NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};READLO;NEXT(0x16f);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_MDR);L(R_A,LBYTE);NEXT(Whi);mcode;}),
({ mcode_rec_t mcode = {0};E_L(R_A);MISC(M_LPTE);NEXT(PCtoMAR);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(0x172);mcode;}),
({ mcode_rec_t mcode = {0};GEN_ADDR(R_SP);DATA;NEXT(0x173);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_SP);L(R_MDR,LWORD);NEXT(0x174);mcode;}),
({ mcode_rec_t mcode = {0};DEC_TO_Z(R_MAR);DATA;NEXT(0x175);mcode;}),
({ mcode_rec_t mcode = {0};WRITELO;DEC_TO_Z(R_MAR);DATA;L(R_SP,LWORD);NEXT(0x176);mcode;}),
({ mcode_rec_t mcode = {0};WRITEHI;TO_Z(R_MAR);L(R_SP,LWORD);NEXT(PCtoMAR);mcode;}),
({ mcode_rec_t mcode = {0};CBR(B_NEGATED,0x178);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);DATA;NEXT(0x179);mcode;}),
({ mcode_rec_t mcode = {0};READLO;TO_Z(R_A);DATA;NEXT(Bcopy0);mcode;}),
({ mcode_rec_t mcode = {0};PRIV(1);CBR(B_NEGATED,0x17b);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);SET_ADR(DATA_SPACE,PTB_OVERRIDE);NEXT(0x17c);mcode;}),
({ mcode_rec_t mcode = {0};READLO;TO_Z(R_A);DATA;NEXT(0x17d);mcode;}),
({ mcode_rec_t mcode = {0};WRITELO;INC_TO_Z(R_MAR);L(R_A,LWORD);NEXT(0x17e);mcode;}),
({ mcode_rec_t mcode = {0};INC_TO_Z(R_B);L(R_B,LWORD);NEXT(0x17f);mcode;}),
({ mcode_rec_t mcode = {0};DEC_TO_Z(R_C);L(R_C,LWORD);NEXT(0x180);mcode;}),
({ mcode_rec_t mcode = {0};DEC_TO_Z(R_PC);L(R_PC,LWORD);CODE;NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};PRIV(1);CBR(B_NEGATED,0x182);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_B);DATA;NEXT(0x183);mcode;}),
({ mcode_rec_t mcode = {0};READLO;TO_Z(R_A);SET_ADR(DATA_SPACE,PTB_OVERRIDE);NEXT(0x184);mcode;}),
({ mcode_rec_t mcode = {0};WRITELO;INC_TO_Z(R_MAR);L(R_A,LWORD);NEXT(Bcopy1);mcode;}),
({ mcode_rec_t mcode = {0};TO_MDR(R_MSW);NEXT(0x186);mcode;}),
({ mcode_rec_t mcode = {0};ZERO_TO_Z;MISC(M_LEI);LMODE(1);NEXT(0x187);mcode;}),
({ mcode_rec_t mcode = {0};DEC_TO_Z(R_SSP);DATA;NEXT(0x188);mcode;}),
({ mcode_rec_t mcode = {0};PUSHLO;NEXT(0x189);mcode;}),
({ mcode_rec_t mcode = {0};PUSHHI;NEXT(0x18a);mcode;}),
({ mcode_rec_t mcode = {0};TO_MDR(R_SP);NEXT(0x18b);mcode;}),
({ mcode_rec_t mcode = {0};PUSHLO;NEXT(0x18c);mcode;}),
({ mcode_rec_t mcode = {0};PUSHHI;NEXT(0x18d);mcode;}),
({ mcode_rec_t mcode = {0};TO_MDR(R_TPC);NEXT(0x18e);mcode;}),
({ mcode_rec_t mcode = {0};PUSHLO;NEXT(0x18f);mcode;}),
({ mcode_rec_t mcode = {0};PUSHHI;NEXT(0x190);mcode;}),
({ mcode_rec_t mcode = {0};TO_MDR(R_A);NEXT(0x191);mcode;}),
({ mcode_rec_t mcode = {0};PUSHLO;NEXT(0x192);mcode;}),
({ mcode_rec_t mcode = {0};PUSHHI;NEXT(0x193);mcode;}),
({ mcode_rec_t mcode = {0};TO_MDR(R_B);NEXT(0x194);mcode;}),
({ mcode_rec_t mcode = {0};PUSHLO;NEXT(0x195);mcode;}),
({ mcode_rec_t mcode = {0};PUSHHI;NEXT(0x196);mcode;}),
({ mcode_rec_t mcode = {0};TO_MDR(R_C);NEXT(0x197);mcode;}),
({ mcode_rec_t mcode = {0};PUSHLO;NEXT(0x198);mcode;}),
({ mcode_rec_t mcode = {0};PUSHHI;NEXT(0x199);mcode;}),
({ mcode_rec_t mcode = {0};TO_MDR(R_DP);NEXT(0x19a);mcode;}),
({ mcode_rec_t mcode = {0};PUSHLO;L(R_SP,LWORD);NEXT(0x19b);mcode;}),
({ mcode_rec_t mcode = {0};PUSHHI;NEXT(0x19c);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_PC);L(R_A,LWORD);NEXT(0x19d);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_FCODE);DATA;L(R_C,LWORD);NEXT(0x19e);mcode;}),
({ mcode_rec_t mcode = {0};POPHI;NEXT(0x19f);mcode;}),
({ mcode_rec_t mcode = {0};POPLO;NEXT(0x1a0);mcode;}),
({ mcode_rec_t mcode = {0};ZERO_TO_Z;L(R_DP,LWORD);NEXT(0x1a1);mcode;}),
({ mcode_rec_t mcode = {0};FROM_MDR(R_PC);CODE;MISC(M_CLR_TRAP);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_SP);DATA;NEXT(0x1a3);mcode;}),
({ mcode_rec_t mcode = {0};POPHI;NEXT(0x1a4);mcode;}),
({ mcode_rec_t mcode = {0};POPLO;NEXT(0x1a5);mcode;}),
({ mcode_rec_t mcode = {0};FROM_MDR(R_DP);NEXT(0x1a6);mcode;}),
({ mcode_rec_t mcode = {0};POPHI;NEXT(0x1a7);mcode;}),
({ mcode_rec_t mcode = {0};POPLO;NEXT(0x1a8);mcode;}),
({ mcode_rec_t mcode = {0};FROM_MDR(R_C);NEXT(0x1a9);mcode;}),
({ mcode_rec_t mcode = {0};POPHI;NEXT(0x1aa);mcode;}),
({ mcode_rec_t mcode = {0};POPLO;NEXT(0x1ab);mcode;}),
({ mcode_rec_t mcode = {0};FROM_MDR(R_B);NEXT(0x1ac);mcode;}),
({ mcode_rec_t mcode = {0};POPHI;NEXT(0x1ad);mcode;}),
({ mcode_rec_t mcode = {0};POPLO;NEXT(0x1ae);mcode;}),
({ mcode_rec_t mcode = {0};FROM_MDR(R_A);NEXT(0x1af);mcode;}),
({ mcode_rec_t mcode = {0};POPHI;NEXT(0x1b0);mcode;}),
({ mcode_rec_t mcode = {0};POPLO;NEXT(0x1b1);mcode;}),
({ mcode_rec_t mcode = {0};FROM_MDR(R_PC);NEXT(0x1b2);mcode;}),
({ mcode_rec_t mcode = {0};POPHI;NEXT(0x1b3);mcode;}),
({ mcode_rec_t mcode = {0};POPLO;NEXT(0x1b4);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_MDR);MISC(M_COMMIT);NEXT(0x1b5);mcode;}),
({ mcode_rec_t mcode = {0};POPHI;NEXT(0x1b6);mcode;}),
({ mcode_rec_t mcode = {0};READLO;INC_TO_Z(R_MAR);L(R_SP,LWORD);NEXT(0x1b7);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_MDR);L(R_MSW,LWORD);LMODE(1);LPAGING(1);MISC(M_LEI);NEXT(0x1b8);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_TPC);L(R_SP,LWORD);NEXT(PCtoMAR);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_MDR);L(R_A,LWORD);NEXT(0x1ba);mcode;}),
({ mcode_rec_t mcode = {0};MISC(M_SYSCALL);NEXT(Unreachable);mcode;}),
({ mcode_rec_t mcode = {0};LDLO;NEXT(LdiA8);mcode;}),
({ mcode_rec_t mcode = {0};E_L(R_A);MISC(M_LPTE);NEXT(PCtoMAR);mcode;}),
({ mcode_rec_t mcode = {0};E_L(R_B);E_R(ER_MDR);ALU(OP_ADD,WORD,NO_CARRY);L(R_B,LWORD);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};E_L(R_A);E_R(ER_MDR);ALU(OP_ADD,WORD,NO_CARRY);L(R_A,LWORD);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Aluop16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Cmpb16);mcode;}),
({ mcode_rec_t mcode = {0};LDIMMLO;NEXT(Cmp16);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_PC);CODE;NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};COMPARE_0(R_C);MISC(M_SET_FLAGS);NEXT(0x1c4);mcode;}),
({ mcode_rec_t mcode = {0};CBR(B_NEGATED,0x1c5);mcode;}),
({ mcode_rec_t mcode = {0};COMPARE_0(R_MDR);MISC(M_SET_FLAGS);NEXT(0x1c6);mcode;}),
({ mcode_rec_t mcode = {0};CBR(B_NEGATED,0x1c7);mcode;}),
({ mcode_rec_t mcode = {0};E_L(R_MDR);E_R(ER_MDR);ALU(OP_ADD,WORD,NO_CARRY);L(R_IR_REG,LWORD);NEXT(Bcopy2);mcode;}),
({ mcode_rec_t mcode = {0};COMPARE_0(R_C);MISC(M_SET_FLAGS);NEXT(0x1c9);mcode;}),
({ mcode_rec_t mcode = {0};CBR(B_NEGATED,0x1ca);mcode;}),
({ mcode_rec_t mcode = {0};COMPARE_0(R_MDR);MISC(M_SET_FLAGS);NEXT(0x1cb);mcode;}),
({ mcode_rec_t mcode = {0};CBR(B_NEGATED,0x1cc);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_MDR);MISC(M_RSHIFT);L(R_IR_REG,LWORD);NEXT(Bcopy2);mcode;}),
({ mcode_rec_t mcode = {0};E_R(ER_MDR);E_L(R_MDR);ALU(OP_ADD,WORD,NO_CARRY);L(R_MDR,LWORD);NEXT(0x1ce);mcode;}),
({ mcode_rec_t mcode = {0};E_R(ER_MDR);E_L(R_A);ALU(OP_ADD,WORD,NO_CARRY);L(R_A,LWORD);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};E_R(ER_MDR);E_L(R_MDR);ALU(OP_ADD,WORD,NO_CARRY);L(R_MDR,LWORD);NEXT(0x1d0);mcode;}),
({ mcode_rec_t mcode = {0};E_R(ER_MDR);E_L(R_B);ALU(OP_ADD,WORD,NO_CARRY);L(R_B,LWORD);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};E_R(ER_MDR);E_L(R_MDR);ALU(OP_ADD,WORD,NO_CARRY);L(R_MDR,LWORD);NEXT(0x1d2);mcode;}),
({ mcode_rec_t mcode = {0};E_R(ER_MDR);E_L(R_B);ALU(OP_ADD,WORD,NO_CARRY);L(R_A,LWORD);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};E_R(ER_MDR);E_L(R_MDR);ALU(OP_ADD,WORD,NO_CARRY);L(R_MDR,LWORD);NEXT(0x1d4);mcode;}),
({ mcode_rec_t mcode = {0};E_R(ER_MDR);E_L(R_A);ALU(OP_ADD,WORD,NO_CARRY);L(R_B,LWORD);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_A);L(R_MSW,LWORD);LMODE(1);LPAGING(1);MISC(M_LEI);NEXT(PCtoMAR);mcode;}),
({ mcode_rec_t mcode = {0};READLO;TO_Z(R_A);DATA;NEXT(0x1d7);mcode;}),
({ mcode_rec_t mcode = {0};WRITELO;COMPARE8_0(R_MDR);MISC(M_SET_FLAGS);NEXT(0x1d8);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_PC);CODE;NEXT(0x1d9);mcode;}),
({ mcode_rec_t mcode = {0};INC_TO_Z(R_A);L(R_A,LWORD);NEXT(0x1da);mcode;}),
({ mcode_rec_t mcode = {0};INC_TO_Z(R_B);L(R_B,LWORD);CBR(B_NEGATED,BackupPC);mcode;}),
({ mcode_rec_t mcode = {0};GEN_ADDR(R_SP);L(R_IR_REG,LWORD);NEXT(Fetch);mcode;}),
({ mcode_rec_t mcode = {0};READHI;INC_TO_Z(R_MAR);DATA;NEXT(0x1dd);mcode;}),
({ mcode_rec_t mcode = {0};READLO;TO_Z(R_B);DATA;NEXT(0x1de);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_MDR);L(R_C,LWORD);NEXT(0x1df);mcode;}),
({ mcode_rec_t mcode = {0};READHI;INC_TO_Z(R_MAR);DATA;NEXT(0x1e0);mcode;}),
({ mcode_rec_t mcode = {0};READLO;TO_Z(R_A);DATA;NEXT(0x1e1);mcode;}),
({ mcode_rec_t mcode = {0};WRITEHI;INC_TO_Z(R_MAR);DATA;NEXT(0x1e2);mcode;}),
({ mcode_rec_t mcode = {0};WRITELO;INC_TO_Z(R_MAR);DATA;NEXT(0x1e3);mcode;}),
({ mcode_rec_t mcode = {0};TO_Z(R_C);L(R_MDR,LWORD);NEXT(0x1e4);mcode;}),
({ mcode_rec_t mcode = {0};WRITEHI;INC_TO_Z(R_MAR);DATA;NEXT(0x1e5);mcode;}),
({ mcode_rec_t mcode = {0};WRITELO;INC_TO_Z(R_MAR);L(R_A,LWORD);NEXT(0x1e6);mcode;}),
({ mcode_rec_t mcode = {0};INC2_TO_Z(R_B);L(R_B,LWORD);NEXT(0x1e7);mcode;}),
({ mcode_rec_t mcode = {0};INC2_TO_Z(R_B);L(R_B,LWORD);NEXT(PCtoMAR);mcode;}),
({ mcode_rec_t mcode = {0};READLO;NEXT(0x1e9);mcode;}),
({ mcode_rec_t mcode = {0};WRITELO;DEC_TO_Z(R_MAR);DATA;NEXT(0x1ea);mcode;}),
({ mcode_rec_t mcode = {0};READHI;NEXT(0x1eb);mcode;}),
({ mcode_rec_t mcode = {0};WRITEHI;TO_Z(R_MDR);L(R_C,LWORD);NEXT(0x1ec);mcode;}),
({ mcode_rec_t mcode = {0};DEC_TO_Z(R_B);DATA;NEXT(0x1ed);mcode;}),
({ mcode_rec_t mcode = {0};READLO;DEC_TO_Z(R_MAR);DATA;NEXT(0x1ee);mcode;}),
({ mcode_rec_t mcode = {0};READHI;TO_Z(R_MAR);L(R_B,LWORD);NEXT(0x1ef);mcode;}),
({ mcode_rec_t mcode = {0};E_L(R_C);E_R(ER_MDR);ALU(OP_IR13,WORD,NO_CARRY);L(R_MDR,LWORD);MISC(M_SET_FLAGS);NEXT(0x1f0);mcode;}),
({ mcode_rec_t mcode = {0};DEC_TO_Z(R_A);DATA;NEXT(0x1f1);mcode;}),
({ mcode_rec_t mcode = {0};WRITELO;DEC_TO_Z(R_MAR);DATA;L(R_A,LWORD);NEXT(Whi);mcode;}),
({ mcode_rec_t mcode = {0};READLO;NEXT(0x1f3);mcode;}),
({ mcode_rec_t mcode = {0};WRITELO;DEC_TO_Z(R_MAR);DATA;NEXT(0x1f4);mcode;}),
({ mcode_rec_t mcode = {0};READHI;NEXT(0x1f5);mcode;}),
({ mcode_rec_t mcode = {0};WRITEHI;TO_Z(R_MDR);L(R_C,LWORD);READHI;NEXT(0x1f6);mcode;}),
({ mcode_rec_t mcode = {0};DEC_TO_Z(R_B);DATA;NEXT(0x1f7);mcode;}),
({ mcode_rec_t mcode = {0};READLO;DEC_TO_Z(R_MAR);DATA;NEXT(0x1f8);mcode;}),
({ mcode_rec_t mcode = {0};READHI;TO_Z(R_MAR);L(R_B,LWORD);NEXT(0x1f9);mcode;}),
({ mcode_rec_t mcode = {0};E_L(R_C);E_R(ER_MDR);ALU(OP_IR13,WORD,CARRY_IN);L(R_MDR,LWORD);MISC(M_SET_FLAGS);NEXT(Mop16a);mcode;}),
({ mcode_rec_t mcode = {0};mcode;}),
({ mcode_rec_t mcode = {0};mcode;}),
({ mcode_rec_t mcode = {0};mcode;}),
({ mcode_rec_t mcode = {0};mcode;}),
({ mcode_rec_t mcode = {0};NEXT(Unreachable);mcode;}),
({ mcode_rec_t mcode = {0};mcode;}),
