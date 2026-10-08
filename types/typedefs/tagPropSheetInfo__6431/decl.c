struct tagPropSheetInfo
{
HWND hwnd;
PROPSHEETHEADERW_0 ppshheader;
BOOL unicode;
LPWSTR strPropertiesFor;
int nPages;
int active_page;
BOOL isModeless;
BOOL hasHelp;
BOOL hasApply;
BOOL hasFinish;
BOOL usePropPage;
BOOL useCallback;
BOOL activeValid;
PropPageInfo *proppage;
HFONT hFont;
HFONT hFontBold;
int width;
int height;
HIMAGELIST hImageList;
BOOL ended;
INT result;
};
