0x9E6310: fld     ds:flt_A2FE7C
0x9E6316: push    ecx
0x9E6317: fstp    [esp+4+var_4]; float
0x9E631A: push    offset aFsneaktargetat; "fSneakTargetAttackBonus"
0x9E631F: mov     ecx, offset fSneakTargetAttackBonus
0x9E6324: call    GameSetting_ConstrAndReg_float
0x9E6329: push    offset sub_A1D4E0; void (__cdecl *)()
0x9E632E: call    _atexit
0x9E6333: pop     ecx
0x9E6334: retn
