struct TBUTTON_INFO
{
INT iBitmap;
INT idCommand;
BYTE fsState;
BYTE fsStyle;
BOOL bHot;
BOOL bDropDownPressed;
__declspec(align(8)) DWORD_PTR dwData;
INT_PTR iString;
INT nRow;
RECT rect;
INT cx;
};
