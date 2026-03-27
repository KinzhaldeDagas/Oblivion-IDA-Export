0x9E11A0: fld1
0x9E11A2: push    ecx
0x9E11A3: fstp    [esp+4+var_4]; float
0x9E11A6: mov     ecx, offset fAIDefaultRushingAttackDistanceMult
0x9E11AB: push    offset aFaidefaultrush; "fAIDefaultRushingAttackDistanceMult"
0x9E11B0: call    GameSetting_ConstrAndReg_float
0x9E11B5: push    offset sub_A1AE30; void (__cdecl *)()
0x9E11BA: call    _atexit
0x9E11BF: pop     ecx
0x9E11C0: retn
