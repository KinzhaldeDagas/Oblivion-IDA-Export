0x9ECB10: push    5Ah ; 'Z'
0x9ECB12: push    offset aIpersuasionb_2; "iPersuasionBribeCrime"
0x9ECB17: mov     ecx, offset iPersuasionBribeCrime
0x9ECB1C: call    GameSetting_ConstrAndReg
0x9ECB21: push    offset sub_A1F9F0; void (__cdecl *)()
0x9ECB26: call    _atexit
0x9ECB2B: pop     ecx
0x9ECB2C: retn
