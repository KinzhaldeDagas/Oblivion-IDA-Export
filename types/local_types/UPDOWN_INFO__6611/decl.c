struct __declspec(align(8)) UPDOWN_INFO
{
HWND Self;
HWND Notify;
DWORD dwStyle;
UINT AccelCount;
UDACCEL *AccelVect;
INT AccelIndex;
INT Base;
INT CurVal;
INT MinVal;
INT MaxVal;
HWND Buddy;
INT BuddyType;
INT Flags;
BOOL UnicodeFormat;
};
