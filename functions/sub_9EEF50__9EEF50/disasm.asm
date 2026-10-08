0x9EEF50: fld1
0x9EEF52: push    ecx
0x9EEF53: fstp    [esp+4+var_4]; float
0x9EEF56: mov     ecx, (offset flt_B37ED0+110h)
0x9EEF5B: push    offset aFspellmakinggo; "fSpellmakingGoldMult"
0x9EEF60: call    GameSetting_ConstrAndReg_float
0x9EEF65: push    offset sub_A206E0; void (__cdecl *)()
0x9EEF6A: call    _atexit
0x9EEF6F: pop     ecx
0x9EEF70: retn
