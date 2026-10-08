struct __declspec(align(8)) MSACM_FillFormatData
{
HWND hWnd __offset(OFF64|AUTO);
int mode;
WCHAR_0 szFormatTag[48];
PACMFORMATCHOOSEW afc __offset(OFF64|AUTO);
DWORD ret;
};
