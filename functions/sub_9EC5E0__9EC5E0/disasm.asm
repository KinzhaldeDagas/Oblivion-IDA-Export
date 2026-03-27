0x9EC5E0: push    5Ah ; 'Z'
0x9EC5E2: push    offset aIpersuasiona_0; "iPersuasionAngleMax"
0x9EC5E7: mov     ecx, offset iPersuasionAngleMax
0x9EC5EC: call    GameSetting_ConstrAndReg
0x9EC5F1: push    offset sub_A1F800; void (__cdecl *)()
0x9EC5F6: call    _atexit
0x9EC5FB: pop     ecx
0x9EC5FC: retn
