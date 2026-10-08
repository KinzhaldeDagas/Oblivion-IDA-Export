struct tagCOMSTAT
{
unsigned __int32 fCtsHold : 1;
unsigned __int32 fDsrHold : 1;
unsigned __int32 fRlsdHold : 1;
unsigned __int32 fXoffHold : 1;
unsigned __int32 fXoffSent : 1;
unsigned __int32 fEof : 1;
unsigned __int32 fTxim : 1;
unsigned __int32 fReserved : 25;
DWORD cbInQue;
DWORD cbOutQue;
};
