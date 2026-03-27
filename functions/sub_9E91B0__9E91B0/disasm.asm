0x9E91B0: fld     ds:flt_A3D65C
0x9E91B6: push    ecx
0x9E91B7: fstp    [esp+4+var_4]; float
0x9E91BA: push    offset aFblockamountwe; "fBlockAmountWeaponMult"
0x9E91BF: mov     ecx, offset fBlockAmountWeaponMult
0x9E91C4: call    GameSetting_ConstrAndReg_float
0x9E91C9: push    offset sub_A1E520; void (__cdecl *)()
0x9E91CE: call    _atexit
0x9E91D3: pop     ecx
0x9E91D4: retn
