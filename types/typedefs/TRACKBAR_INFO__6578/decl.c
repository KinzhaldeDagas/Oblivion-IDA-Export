struct TRACKBAR_INFO
{
HWND hwndSelf;
DWORD dwStyle;
LONG lRangeMin;
LONG lRangeMax;
LONG lLineSize;
LONG lPageSize;
LONG lSelMin;
LONG lSelMax;
LONG lPos;
UINT uThumbLen;
UINT uNumTics;
UINT uTicFreq;
HWND hwndNotify;
HWND hwndToolTip;
HWND hwndBuddyLA;
HWND hwndBuddyRB;
INT fLocation;
DWORD flags;
BOOL bUnicode;
RECT rcChannel;
RECT rcSelection;
RECT rcThumb;
LPLONG tics;
};
