struct _tagINPUTCONTEXT
{
HWND hWnd;
BOOL fOpen;
POINT ptStatusWndPos;
POINT ptSoftKbdPos;
DWORD fdwConversion;
DWORD fdwSentence;
$AE5339E31EC4E167838D6F64A6691922 lfFont;
COMPOSITIONFORM cfCompForm;
CANDIDATEFORM cfCandForm[4];
HIMCC hCompStr;
HIMCC hCandInfo;
HIMCC hGuideLine;
HIMCC hPrivate;
DWORD dwNumMsgBuf;
HIMCC hMsgBuf;
DWORD fdwInit;
DWORD dwReserve[3];
};
