struct __declspec(align(8)) HEADCOMBO
{
HWND self;
HWND owner;
UINT dwStyle;
HWND hWndEdit;
HWND hWndLBox;
UINT wState;
HFONT hFont;
RECT textRect;
RECT buttonRect;
RECT droppedRect;
INT droppedIndex;
INT fixedOwnerDrawHeight;
INT droppedWidth;
INT item_height;
INT visibleItems;
};
