0x9E6BA0: fld1
0x9E6BA2: push    ecx
0x9E6BA3: fstp    [esp+4+var_4]; float
0x9E6BA6: mov     ecx, offset fFightAggrMult
0x9E6BAB: push    offset aFfightaggrmult; "fFightAggrMult"
0x9E6BB0: call    GameSetting_ConstrAndReg_float
0x9E6BB5: push    offset sub_A1D7D0; void (__cdecl *)()
0x9E6BBA: call    _atexit
0x9E6BBF: pop     ecx
0x9E6BC0: retn
