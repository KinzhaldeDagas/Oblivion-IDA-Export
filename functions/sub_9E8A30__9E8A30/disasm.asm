0x9E8A30: fld     ds:flt_A417B4
0x9E8A36: push    ecx
0x9E8A37: fstp    [esp+4+var_4]; float
0x9E8A3A: push    offset aFaipoweratta_0; "fAIPowerAttackNPCChance"
0x9E8A3F: mov     ecx, offset unk_B36DB0
0x9E8A44: call    GameSetting_ConstrAndReg_float
0x9E8A49: push    offset sub_A1E280; void (__cdecl *)()
0x9E8A4E: call    _atexit
0x9E8A53: pop     ecx
0x9E8A54: retn
