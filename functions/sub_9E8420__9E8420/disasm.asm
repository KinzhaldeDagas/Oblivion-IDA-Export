0x9E8420: fld     ds:flt_A31C80
0x9E8426: push    ecx
0x9E8427: fstp    [esp+4+var_4]; float
0x9E842A: push    offset aFspellcastingd; "fSpellCastingDetectionMod"
0x9E842F: mov     ecx, offset flt_B36CA0
0x9E8434: call    GameSetting_ConstrAndReg_float
0x9E8439: push    offset sub_A1E060; void (__cdecl *)()
0x9E843E: call    _atexit
0x9E8443: pop     ecx
0x9E8444: retn
