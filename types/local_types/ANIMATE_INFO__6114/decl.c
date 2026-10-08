struct ANIMATE_INFO
{
HGLOBAL hRes;
HMMIO hMMio;
HWND hwndSelf;
HWND hwndNotify;
DWORD dwStyle;
MainAVIHeader mah;
AVIStreamHeader ash;
LPBITMAPINFOHEADER inbih;
LPDWORD lpIndex;
HIC hic;
LPBITMAPINFOHEADER outbih;
LPVOID indata;
LPVOID outdata;
CRITICAL_SECTION cs;
HANDLE hStopEvent;
HANDLE hThread;
DWORD threadId;
UINT uTimer;
int nFromFrame;
int nToFrame;
int nLoop;
int currFrame;
COLORREF transparentColor;
HBRUSH hbrushBG;
HBITMAP hbmPrevFrame;
};
