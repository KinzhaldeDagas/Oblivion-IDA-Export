0x9EC5A0: push    28h ; '('
0x9EC5A2: push    offset aIpersuasionp_1; "iPersuasionPower3"
0x9EC5A7: mov     ecx, offset iPersuasionPower3
0x9EC5AC: call    GameSetting_ConstrAndReg
0x9EC5B1: push    offset sub_A1F7E0; void (__cdecl *)()
0x9EC5B6: call    _atexit
0x9EC5BB: pop     ecx
0x9EC5BC: retn
