struct COMBOEX_INFO
{
HIMAGELIST himl;
HWND hwndSelf;
HWND hwndNotify;
HWND hwndCombo;
HWND hwndEdit;
DWORD dwExtStyle;
INT selected;
DWORD flags;
HFONT defaultFont;
HFONT font;
INT nb_items;
BOOL unicode;
BOOL NtfUnicode;
CBE_ITEMDATA edit;
CBE_ITEMDATA *items;
};
