0x9F11A0: push    offset aTheSaveGameI_0; "The save game is corrupt and cannot be "...
0x9F11A5: push    offset aSsavegamecorru; "sSaveGameCorruptMenuMessage"
0x9F11AA: mov     ecx, offset dword_B38750
0x9F11AF: call    GameSetting_ConstrAndReg
0x9F11B4: push    offset sub_A215C0; void (__cdecl *)()
0x9F11B9: call    _atexit
0x9F11BE: pop     ecx
0x9F11BF: retn
