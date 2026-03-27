0x9EF7B0: fld1
0x9EF7B2: push    ecx
0x9EF7B3: fstp    [esp+4+var_4]; float
0x9EF7B6: mov     ecx, offset fShockCoreColorR
0x9EF7BB: push    offset aFshockcorecolo; "fShockCoreColorR"
0x9EF7C0: call    GameSetting_ConstrAndReg_float
0x9EF7C5: push    offset sub_A209D0; void (__cdecl *)()
0x9EF7CA: call    _atexit
0x9EF7CF: pop     ecx
0x9EF7D0: retn
