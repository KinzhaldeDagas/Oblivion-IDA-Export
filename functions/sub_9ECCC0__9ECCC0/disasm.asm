0x9ECCC0: fld     ds:flt_A37CC8
0x9ECCC6: push    ecx
0x9ECCC7: fstp    [esp+4+var_4]; float
0x9ECCCA: push    offset aFrepairskillbr; "fRepairSkillBreakBase"
0x9ECCCF: mov     ecx, offset fRepairSkillBreakBase
0x9ECCD4: call    GameSetting_ConstrAndReg_float
0x9ECCD9: push    offset sub_A1FA90; void (__cdecl *)()
0x9ECCDE: call    _atexit
0x9ECCE3: pop     ecx
0x9ECCE4: retn
