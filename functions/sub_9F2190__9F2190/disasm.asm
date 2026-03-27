0x9F2190: push    offset aYouCannotWai_1; "You cannot wait while under water."
0x9F2195: push    offset aSnowaitunderwa; "sNoWaitUnderWater"
0x9F219A: mov     ecx, offset dword_B38AF0
0x9F219F: call    GameSetting_ConstrAndReg
0x9F21A4: push    offset sub_A21D00; void (__cdecl *)()
0x9F21A9: call    _atexit
0x9F21AE: pop     ecx
0x9F21AF: retn
