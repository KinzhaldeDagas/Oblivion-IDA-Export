struct _TREEITEM
{
HTREEITEM parent;
HTREEITEM nextSibling;
HTREEITEM firstChild;
UINT callbackMask;
UINT state;
UINT stateMask;
LPWSTR pszText;
int cchTextMax;
int iImage;
int iSelectedImage;
int iExpandedImage;
int cChildren;
__declspec(align(8)) LPARAM_0 lParam;
int iIntegral;
int iLevel;
HTREEITEM lastChild;
HTREEITEM prevSibling;
RECT rect;
LONG linesOffset;
LONG stateOffset;
LONG imageOffset;
LONG textOffset;
LONG textWidth;
LONG visibleOrder;
const TREEVIEW_INFO *infoPtr;
};
