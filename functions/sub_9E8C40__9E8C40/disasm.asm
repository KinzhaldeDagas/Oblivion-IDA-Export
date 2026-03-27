0x9E8C40: fld1
0x9E8C42: push    ecx
0x9E8C43: fstp    [esp+4+var_4]; float
0x9E8C46: mov     ecx, offset fDamageStrengthMult
0x9E8C4B: push    offset aFdamagestren_0; "fDamageStrengthMult"
0x9E8C50: call    GameSetting_ConstrAndReg_float
0x9E8C55: push    offset sub_A1E330; void (__cdecl *)()
0x9E8C5A: call    _atexit
0x9E8C5F: pop     ecx
0x9E8C60: retn
