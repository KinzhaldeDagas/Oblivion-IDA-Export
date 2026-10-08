struct _FLOATING_SAVE_AREA
{
DWORD ControlWord;
DWORD StatusWord;
DWORD TagWord;
DWORD ErrorOffset;
DWORD ErrorSelector;
DWORD DataOffset;
DWORD DataSelector;
BYTE RegisterArea[80];
DWORD Cr0NpxState;
};
