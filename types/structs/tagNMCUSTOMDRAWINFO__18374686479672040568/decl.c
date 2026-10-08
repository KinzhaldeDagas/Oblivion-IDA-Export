struct tagNMCUSTOMDRAWINFO
{
NMHDR hdr;
DWORD dwDrawStage;
HDC hdc;
RECT rc;
DWORD_PTR dwItemSpec;
UINT uItemState;
__declspec(align(8)) LPARAM_0 lItemlParam;
};
