0x9F2A00: push    offset aCancel; "Cancel"
0x9F2A05: push    offset aScancel; "sCancel"
0x9F2A0A: mov     ecx, offset dword_B38D08
0x9F2A0F: call    GameSetting_ConstrAndReg
0x9F2A14: push    offset sub_A22130; void (__cdecl *)()
0x9F2A19: call    _atexit
0x9F2A1E: pop     ecx
0x9F2A1F: retn
