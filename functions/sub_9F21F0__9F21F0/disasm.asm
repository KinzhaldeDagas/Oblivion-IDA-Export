0x9F21F0: push    offset aYouCannotWaitI; "You cannot wait in this location."
0x9F21F5: push    offset aSnowaitincell; "sNoWaitInCell"
0x9F21FA: mov     ecx, offset dword_B38B08
0x9F21FF: call    GameSetting_ConstrAndReg
0x9F2204: push    offset sub_A21D30; void (__cdecl *)()
0x9F2209: call    _atexit
0x9F220E: pop     ecx
0x9F220F: retn
