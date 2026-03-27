0x9E8AF0: fld     ds:flt_A5880C
0x9E8AF6: push    ecx
0x9E8AF7: fstp    [esp+4+var_4]; float
0x9E8AFA: push    offset aFaipoweratta_4; "fAIPowerAttackFatigueMult"
0x9E8AFF: mov     ecx, offset fAIPowerAttackFatigueMult
0x9E8B04: call    GameSetting_ConstrAndReg_float
0x9E8B09: push    offset sub_A1E2C0; void (__cdecl *)()
0x9E8B0E: call    _atexit
0x9E8B13: pop     ecx
0x9E8B14: retn
