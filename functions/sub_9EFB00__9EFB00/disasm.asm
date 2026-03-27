0x9EFB00: push    0
0x9EFB02: push    offset aIshockdebug; "iShockDebug"
0x9EFB07: mov     ecx, offset iShockDebug
0x9EFB0C: call    GameSetting_ConstrAndReg
0x9EFB11: push    offset sub_A20B00; void (__cdecl *)()
0x9EFB16: call    _atexit
0x9EFB1B: pop     ecx
0x9EFB1C: retn
