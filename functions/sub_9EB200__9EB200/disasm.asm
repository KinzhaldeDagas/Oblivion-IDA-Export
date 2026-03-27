0x9EB200: fld     ds:flt_A3D65C
0x9EB206: push    ecx
0x9EB207: fstp    [esp+4+var_4]; float
0x9EB20A: push    offset aFperkheavyar_0; "fPerkHeavyArmorExpertSpeedMult"
0x9EB20F: mov     ecx, offset fPerkHeavyArmorExpertSpeedMult
0x9EB214: call    GameSetting_ConstrAndReg_float
0x9EB219: push    offset sub_A1F0D0; void (__cdecl *)()
0x9EB21E: call    _atexit
0x9EB223: pop     ecx
0x9EB224: retn
