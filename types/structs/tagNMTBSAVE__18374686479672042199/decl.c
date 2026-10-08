struct tagNMTBSAVE
{
NMHDR hdr;
DWORD *pData;
DWORD *pCurrent;
UINT cbData;
int iItem;
int cButtons;
__declspec(align(8)) TBBUTTON tbButton;
};
