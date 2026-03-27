0x9EC8C0: fld     ds:flt_A5A9D4
0x9EC8C6: push    ecx
0x9EC8C7: fstp    [esp+4+var_4]; float
0x9EC8CA: push    offset aFpersuasionbas; "fPersuasionBaseValueShape"
0x9EC8CF: mov     ecx, offset fPersuasionBaseValueShape
0x9EC8D4: call    GameSetting_ConstrAndReg_float
0x9EC8D9: push    offset sub_A1F920; void (__cdecl *)()
0x9EC8DE: call    _atexit
0x9EC8E3: pop     ecx
0x9EC8E4: retn
