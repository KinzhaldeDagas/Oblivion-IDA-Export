0x9EB3F0: fld     ds:flt_A59E20
0x9EB3F6: push    ecx
0x9EB3F7: fstp    [esp+4+var_4]; float
0x9EB3FA: push    offset aFfatiguebase; "fFatigueBase"
0x9EB3FF: mov     ecx, offset fFatigueBase
0x9EB404: call    GameSetting_ConstrAndReg_float
0x9EB409: push    offset sub_A1F180; void (__cdecl *)()
0x9EB40E: call    _atexit
0x9EB413: pop     ecx
0x9EB414: retn
