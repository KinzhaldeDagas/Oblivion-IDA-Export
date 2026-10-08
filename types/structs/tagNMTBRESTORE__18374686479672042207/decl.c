struct tagNMTBRESTORE
{
NMHDR hdr;
DWORD *pData;
DWORD *pCurrent;
UINT cbData;
int iItem;
int cButtons;
int cbBytesPerRecord;
TBBUTTON tbButton;
};
