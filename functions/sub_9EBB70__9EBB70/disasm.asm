0x9EBB70: fld     ds:kHeadBodyNormalMatchRadius
0x9EBB76: push    ecx
0x9EBB77: fstp    [esp+4+var_4]; float
0x9EBB7A: push    offset aFcrimegoldstea; "fCrimeGoldSteal"
0x9EBB7F: mov     ecx, offset g_fCrimeGoldSteal_Value; Verified crime setting value used by605F60/606140; registration 0x9ebb70 contains matching GMST key. This is value storage, not a complete Setting object declaration.
0x9EBB84: call    GameSetting_ConstrAndReg_float
0x9EBB89: push    offset sub_A1F450; void (__cdecl *)()
0x9EBB8E: call    _atexit
0x9EBB93: pop     ecx
0x9EBB94: retn
