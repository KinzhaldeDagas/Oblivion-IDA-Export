0x9ECB50: push    4Bh ; 'K'
0x9ECB52: push    offset aIpersuasiond_2; "iPersuasionDemandRefuse"
0x9ECB57: mov     ecx, offset iPersuasionDemandRefuse
0x9ECB5C: call    GameSetting_ConstrAndReg
0x9ECB61: push    offset sub_A1FA10; void (__cdecl *)()
0x9ECB66: call    _atexit
0x9ECB6B: pop     ecx
0x9ECB6C: retn
