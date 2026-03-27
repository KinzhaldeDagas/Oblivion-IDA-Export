0x9F0D70: push    offset aCreate; "Create"
0x9F0D75: push    offset aScreate; "sCreate"
0x9F0D7A: mov     ecx, offset dword_B38648
0x9F0D7F: call    GameSetting_ConstrAndReg
0x9F0D84: push    offset sub_A213B0; void (__cdecl *)()
0x9F0D89: call    _atexit
0x9F0D8E: pop     ecx
0x9F0D8F: retn
