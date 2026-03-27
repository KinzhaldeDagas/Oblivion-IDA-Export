0x9DF440: push    offset aSundas; "Sundas"
0x9DF445: push    offset aSdaysundas; "sDaySundas"
0x9DF44A: mov     ecx, offset sDaySundas
0x9DF44F: call    GameSetting_ConstrAndReg
0x9DF454: push    offset sub_A19FE0; void (__cdecl *)()
0x9DF459: call    _atexit
0x9DF45E: pop     ecx
0x9DF45F: retn
