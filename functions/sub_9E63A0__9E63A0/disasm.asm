0x9E63A0: fld1
0x9E63A2: push    ecx
0x9E63A3: fstp    [esp+4+var_4]; float
0x9E63A6: mov     ecx, offset fSneakBootWeightMult
0x9E63AB: push    offset aFsneakbootwe_0; "fSneakBootWeightMult"
0x9E63B0: call    GameSetting_ConstrAndReg_float
0x9E63B5: push    offset sub_A1D510; void (__cdecl *)()
0x9E63BA: call    _atexit
0x9E63BF: pop     ecx
0x9E63C0: retn
