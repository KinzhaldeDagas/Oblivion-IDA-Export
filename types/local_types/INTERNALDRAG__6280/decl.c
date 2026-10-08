struct INTERNALDRAG
{
HWND hwnd __offset(OFF64|AUTO);
HIMAGELIST himl __offset(OFF64|AUTO);
HIMAGELIST himlNoCursor __offset(OFF64|AUTO);
INT x;
INT y;
INT dxHotspot;
INT dyHotspot;
BOOL bShow;
HBITMAP hbmBg __offset(OFF64|AUTO);
};
