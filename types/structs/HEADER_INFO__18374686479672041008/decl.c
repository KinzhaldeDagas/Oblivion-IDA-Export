struct __declspec(align(8)) HEADER_INFO
{
HWND hwndSelf;
HWND hwndNotify;
INT nNotifyFormat;
UINT uNumItem;
INT nHeight;
HFONT hFont;
HCURSOR hcurArrow;
HCURSOR hcurDivider;
HCURSOR hcurDivopen;
BOOL bCaptured;
BOOL bPressed;
BOOL bDragging;
BOOL bTracking;
POINT ptLButtonDown;
DWORD dwStyle;
INT iMoveItem;
INT xTrackOffset;
INT xOldTrack;
INT iHotItem;
INT iHotDivider;
INT iMargin;
INT filter_change_timeout;
HIMAGELIST himl;
HEADER_ITEM *items;
INT *order;
BOOL bRectsValid;
};
