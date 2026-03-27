0x9FA5C0: fld     ds:flt_A67558
0x9FA5C6: push    ecx
0x9FA5C7: fstp    [esp+4+var_4]; float
0x9FA5CA: push    offset aFpathinvalidmo; "fPathInvalidMovementTypePenalty"
0x9FA5CF: mov     ecx, offset flt_B3A408
0x9FA5D4: call    GameSetting_ConstrAndReg_float
0x9FA5D9: push    offset sub_A24040; void (__cdecl *)()
0x9FA5DE: call    _atexit
0x9FA5E3: pop     ecx
0x9FA5E4: retn
