struct _CONSOLE_SCREEN_BUFFER_INFOEX
{
ULONG cbSize;
COORD dwSize;
COORD dwCursorPosition;
WORD wAttributes;
SMALL_RECT srWindow;
COORD dwMaximumWindowSize;
WORD wPopupAttributes;
BOOL bFullscreenSupported;
COLORREF ColorTable[16];
};
