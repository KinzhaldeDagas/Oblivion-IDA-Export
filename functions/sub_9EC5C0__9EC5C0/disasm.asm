0x9EC5C0: push    0Ah
0x9EC5C2: push    offset aIpersuasionang; "iPersuasionAngleMin"
0x9EC5C7: mov     ecx, offset iPersuasionAngleMin
0x9EC5CC: call    GameSetting_ConstrAndReg
0x9EC5D1: push    offset sub_A1F7F0; void (__cdecl *)()
0x9EC5D6: call    _atexit
0x9EC5DB: pop     ecx
0x9EC5DC: retn
