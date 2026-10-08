struct _JUMP_BUFFER
{
unsigned __int64 Frame;
unsigned __int64 Rbx;
unsigned __int64 Rsp;
unsigned __int64 Rbp;
unsigned __int64 Rsi;
unsigned __int64 Rdi;
unsigned __int64 R12;
unsigned __int64 R13;
unsigned __int64 R14;
unsigned __int64 R15;
unsigned __int64 Rip;
unsigned int MxCsr;
unsigned __int16 FpCsr;
unsigned __int16 Spare;
SETJMP_FLOAT128 Xmm6;
SETJMP_FLOAT128 Xmm7;
SETJMP_FLOAT128 Xmm8;
SETJMP_FLOAT128 Xmm9;
SETJMP_FLOAT128 Xmm10;
SETJMP_FLOAT128 Xmm11;
SETJMP_FLOAT128 Xmm12;
SETJMP_FLOAT128 Xmm13;
SETJMP_FLOAT128 Xmm14;
SETJMP_FLOAT128 Xmm15;
};
