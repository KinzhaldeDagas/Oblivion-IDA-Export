struct tagNMITEMACTIVATE
{
NMHDR hdr;
int iItem;
int iSubItem;
UINT uNewState;
UINT uOldState;
UINT uChanged;
POINT ptAction;
__declspec(align(8)) LPARAM_0 lParam;
UINT uKeyFlags;
};
