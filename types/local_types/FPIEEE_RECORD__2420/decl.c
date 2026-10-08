struct _FPIEEE_RECORD
{
unsigned __int32 RoundingMode : 2;
unsigned __int32 Precision : 3;
unsigned __int32 Operation : 12;
_FPIEEE_EXCEPTION_FLAGS Cause;
_FPIEEE_EXCEPTION_FLAGS Enable;
_FPIEEE_EXCEPTION_FLAGS Status;
_FPIEEE_VALUE Operand1;
_FPIEEE_VALUE Operand2;
_FPIEEE_VALUE Result;
};
